/**
https://github.com/skramm/linux_shell/blob/main/content/linux_gen.cpp

Construction d'un index de commandes Linux, à partir de deux fichiers csv:  
- linux_cat.csv
- linux_commands.csv

Produit deux fichiers Markdown:  
- un fichier classé par catégorie de commandes
- un fichier index général, classé par ordre alphabétique, avec un lien sur la catégorie dans l'autre index

Utilisation:
- build: g++ linux_gen.cpp
- run: ./a.out
*/


#include <string>
#include <array>
#include <sstream>
#include <vector>
#include <iostream>
#include <cassert>
#include <fstream>
#include <algorithm>
#include <chrono>
#include <iomanip>

/// static stuff, used to edit generated man pages with markdown section titles (`##`)
/// source: https://man7.org/linux/man-pages/man7/man-pages.7.html
std::vector<std::string> mantitles = {
	"NAME"
	,"LIBRARY"
	,"SYNOPSIS"
	,"CONFIGURATION"
	,"DESCRIPTION"
	,"OPTIONS"
	,"EXIT STATUS"
	,"EXIT VALUES"
	,"RETURN VALUE"
	,"ERRORS"
	,"ENVIRONMENT"
	,"FILES"
	,"ATTRIBUTES"
	,"VERSIONS"
	,"STANDARDS"
	,"HISTORY"
	,"NOTES"
	,"CAVEATS"
	,"AVAILABILITY"
	,"REPORTING BUGS"
	,"BUGS"
	,"EXAMPLES"
	,"AUTHORS"
	,"SEE ALSO"
};

using Categories = std::vector<std::pair<int,std::string>>;

//--------------------------------------------------
/// Split a line of CSV file into fields
std::vector<std::string>
split_string( const std::string &s, char delim )
{
	std::vector<std::string> velems;
//	std::stringstream ss( TrimSpaces(s) );
	std::stringstream ss( s );
	std::string item;
	while( std::getline( ss, item, delim ) )
		velems.push_back(item);

	if( s.back() == delim )                 // add empty field if last char is the delim
		velems.push_back( std::string() );
	return velems;
}


//--------------------------------------------------
/// read CSV file \c filename
std::vector<std::vector<std::string>>
readCSV( std::string filename )
{
	std::ifstream file( filename );
	if( !file.is_open() )
		throw std::runtime_error( "Error, unable to open file " + filename );

	std::vector<std::vector<std::string>> out;

	std::string buff;
	int line = 0;
	while ( getline (file, buff ) )
	{
		line++;

		auto v_str = split_string( buff, ';' );
//		std::cout << "line " << line << ": " << buff << " size=" << v_str.size() << '\n';

		if( !v_str.empty() )
			if( v_str[0][0] != '#' )
				out.push_back( v_str );
	}
	return out;
}

//--------------------------------------------------
/// Read categories in category file
/**
\return A vector of pairs, each one holding the category index and its name
*/
auto
readCSV_cat( std::string filename )
{
	auto vcat = readCSV( filename );
	Categories vout;
	for( const auto& elems: vcat )
		vout.push_back(
			std::make_pair(
				std::stoi(elems[0]),
				elems[1]
			)
		);
	return vout;
}

//--------------------------------------------------
void
createHeader( std::string str /* "man" or "help" */, std::string name )
{
	std::ofstream f( "../man/" + str + "_" + name + ".md" );
	assert( f.is_open() );
	f << "# Manuel de `" << name << "`\n\n"
		<< "[Liste alphabétique](../linux_cmds_list_alpha.md) - "
		<< "[Liste par catégorie](../linux_cmds_list_cat.md)\n\n"
		<< "[Recherche Google](https://www.google.fr/search?q=linux+" << name << ")\n\n---\n"; 
	f.close();
}

//--------------------------------------------------
/// Type of "man" page (can be the output of "help" instead, if no man available)
enum En_ManType
{
	MT_MAN, MT_HELP, MT_NONE
};

//--------------------------------------------------
/// Generate man (or "help") md pages
/**
If no `man`, an attempt is made with `help`

But the default shell used with `std::system()` is `sh`, and help is not available with it, it's a bash builtin,
so we need to explicitely use bash
*/
En_ManType
generateMan( std::string name )
{
	std::stringstream oss;
	oss << "man " << name << " 1>/tmp/manfile 2>/dev/null";
	std::cout << "RUN: " << oss.str() << "\n";
	std::system( "echo 'ls -l /tmp'" );
	std::system( "ls -l /tmp" );

	std::system( "echo 'ls -l /tmp/man*'" );
	std::system( "ls -l /tmp/man*" );
//	std::system( "head /tmp/manfile" );

#if 0
	auto ret = std::system( oss.str().c_str() ); // run "man"
	if( ret != 0 )                               // if no manual, then try with 'help'
	{ 
		createHeader( "help", name );

		std::stringstream oss2;
		oss2 << "bash -c 'help " << name << "' >>../man/help_" << name << ".md 2>/dev/null";
		auto ret2 = std::system( oss2.str().c_str() );
		if( ret2 != 0 )
		{
			std::cout << "failure of:" << oss2.str() << "\n";
			return MT_NONE;
		}
		return MT_HELP;
	}
	else // edit man page to improve the markdown
	{
		createHeader( "man", name );
		std::stringstream oss3;
		// remove first line
		oss3 << "tail -n +2 /tmp/manfile >>../man/man_" << name << ".md";
		for( const auto& title: mantitles )
		{
			std::stringstream oss3;
			// -E: extended regular expressions
			oss3 << "sed -i -E 's/^" << title << "/## " << title << "/' ../man/man_" << name << ".md";
			std::cout << "RUN: " << oss3.str() << "\n";
			auto ret3 = std::system( oss3.str().c_str() );
			if( ret3 != 0 )
			{
				std::cout << "failure of:" << oss3.str() << "\n";
			}
		}
		return MT_MAN;
	}
#endif
	return MT_NONE; // TMP
}

/// Type of command on local machine
enum En_Type
{
	T_NOTPRESENT = 0,
	T_BUILTIN    = 1,
	T_PRESENT    = 2
};

const char*
getString( En_Type ty )
{
	switch( ty )
	{
		case T_BUILTIN:    return "_builtin_";   break;
		case T_PRESENT:    return "_installed_"; break;
		case T_NOTPRESENT: return "NI";          break;
		default:
			assert(0);
	}
}

//--------------------------------------------------
/// Contenu d'une commande: nom, commentaire, catégorie, "voir aussi"
struct Command
{
	std::vector<int> _cats; ///< plusieurs catégories possible pour une même commande
	std::string _name;
	std::string _comment;
	std::string _seealso;
	En_Type     _type;
	En_ManType  _mantype = MT_NONE;
	
	Command() = default;
	Command( const std::vector<std::string>& vin )
	{
//		std::cout << "#=" << vin.size() << "\n";
		assert( vin.size() > 4 );
//		std::cout << "0:" << vin[0] << " 1:" << vin[1]<< " 2:" << vin[2] << " 3:" << vin[3] << " 4:" << vin[4]  << '\n';
		_name    = vin[0];
		_comment = vin[2];
		_seealso = vin[3];
		_mantype = generateMan( _name );
		_type    = En_Type( std::stoi( vin[4] ) );

// fill the categories
		auto cats = split_string( vin[1], '-' );
		assert( !cats.empty() );
		for( const auto& c: cats )
			_cats.emplace_back( std::stoi( c ) );
	}
	bool operator < ( const Command& other )
	{
		return _name < other._name;
	}
};

//--------------------------------------------------
/// Read commands in input CSV file
auto
readCSV_cmd( std::string filename )
{
	auto vcmd = readCSV( filename );

	std::vector<Command> vout;
	std::array<int,3> nbt = {};   // {} to initialize to 0
	for( const auto elems: vcmd )
	{
//		std::cout << "elems size=" << elems.size() << '\n';
		if( elems.size() > 2 )
		{
			Command cmd( elems );
			nbt[cmd._type]++;
			vout.emplace_back( cmd );
		}
	}
	return std::make_pair( vout, nbt );
}

//--------------------------------------------------
void
printfooter( std::ofstream& f )
{
	auto t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	f << "\n\n_MAJ: " << std::put_time( std::localtime( &t ), "%FT%T%z" ) << "_,\n";
}

//--------------------------------------------------
void
printHeader( std::ofstream& f )
{
	f << "**Statut**: \n- _builtin_: commande intégrée au Shell\n"
		<< "- _installed_: programme installé et disponible dans l'OS local (VM Github)\n"
		<< "- NI (_Not Installed_): programme non installé\n\n"
		<< "**Note**: certaines commandes apparaissent dans plusieurs catégories\n\n";
}

//--------------------------------------------------
void
printAlpha( std::ofstream& f )
{
	for( uint8_t i=0;i<26;i++ )
		f << "[" << (char)(i+'A') << "](#" << (char)(i+'a') << ")-";
	f << "\n\n";
}

//--------------------------------------------------
/// Return the categories to which a command belongs as
/// a vector of pairs
auto
findCategories(
	const Command& command,
	const Categories& categs
)
{
	Categories out;
// iterate on all the categories of the command
	for( const auto& c: command._cats )
	{
		auto it = std::find_if(
			categs.begin(),
			categs.end(),
			[c]
			(const auto& elem)   // lambda
			{
				if( elem.first == c )
					return true;
				return false;
			}
		);
		if( it != categs.end() )
			out.push_back( *it );
	}
	return out;
}

//--------------------------------------------------
void 
printCategories(
	std::ofstream&    f,
	Command           cmd,
	const Categories& categs
)
{
	int t = 0;
	auto commCats = findCategories( cmd, categs );
	for( const auto& cat: commCats )
	{
		if( t++ > 0 )
			f << " - ";
		f << "[" << cat.second << "](linux_cmds_list_cat.md#cat" << cat.first << ")";
	}
}

//--------------------------------------------------
/// Generation of alphabetical list
void
genListAlpha(
	std::string                                         fn, ///< output filename
	std::pair<std::vector<Command>,std::array<int,3>>&  commands,
	const Categories&      categs
)
{
	std::ofstream f( fn );
	assert( f.is_open() );
	f << "# Linux Shell: liste alphabétique de commandes\n\n"
		<< "[Liste par catégorie](linux_cmds_list_cat.md)\n\n"
		<< "<a name='#top'></a>\n\n";

	printHeader( f );

	auto cmds          = commands.first; // can't use a reference, 'cause it needs to be sorted afterward
	const auto& nbcmds = commands.second;	
	f << cmds.size() << " commandes<br>\n";
	f << nbcmds[T_BUILTIN] << " _builtin_, "
		<< nbcmds[T_PRESENT] << " _installed_, "
		<< nbcmds[T_NOTPRESENT] << " NI (_not installed_)\n\n";

	std::sort( cmds.begin(), cmds.end() );
	auto first_letter = cmds[0]._name.at(0);
	bool start = true;
	for( const auto& cmd: cmds )
	{
//		EnManType mtype = NONE;
//		if( cmd._type != "NI" )        // generate man page
//			mtype = generate_man( cmd._name );
	
		auto first = cmd._name.at(0);
		if( first != first_letter || start )
		{
			f << "\n## " << (char)std::toupper(first)
				<< "\n<a name='" << first << "'></a>\n\n"
				<< "<a href='#top'>Haut de page</a>"
				<< " - [Liste par catégorie](linux_cmds_list_cat.md)\n\n";
			printAlpha( f );
				
			f << "| Nom | Description | Catégorie | Voir aussi | Statut |\n"
				<< "|-----|-----|-----|-----|-----|\n";
			first_letter = first;
			start = false;
		}

		f << "| ";
		
		switch( cmd._mantype )
		{
			case MT_MAN:
				f << "[" << cmd._name << "](man/man_" << cmd._name << ".md";
			break;
			case MT_HELP:
				f << "[" << cmd._name << "](man/help_" << cmd._name << ".md";
			break;
			case MT_NONE:
				f << cmd._name << " ( [G](https://www.google.fr/search?q=linux+" << cmd._name << ") ";
			break;
			default:
				assert(0);
		}
		f << ") | "<< cmd._comment << " | ";


		printCategories( f, cmd, categs );


		f << " | ";

		if( !cmd._seealso.empty() )
		{
			auto letter = cmd._seealso.at(0);
			f << "[" << cmd._seealso << "](#" << letter << ")";
		}
		f << " | " << getString(cmd._type) << " |\n";		

	}
	printfooter(f);
}

//--------------------------------------------------
/// Returns the number of commands in a given category
int
countCateg( int cat, const std::vector<Command>& vcmd )
{
	int c=0;
	for( const auto& cmd: vcmd )
		for( const auto& ccat: cmd._cats )
			if( ccat == cat )
				c++; 
	return c;
}
//--------------------------------------------------
void
genCat(
	std::ofstream&              f,
	int                         idx,
	std::pair<int,std::string>  pcat,
	const std::vector<Command>& vcmd
)
{
	auto cat = pcat.first;
	auto nbc = countCateg( cat, vcmd );

	f << "\n## " << idx << " - catégorie: " << pcat.second
		<< "\n<a name='cat" << cat << "'></a>\n\n" 
		<< nbc << " commandes - <a href='#top'>Haut de page</a>"
		<< " - [Liste alphabétique](linux_cmds_list_alpha.md)\n\n"
		<< "| Nom | Description | Voir aussi | Statut |"
		<< "\n|-----|-----|-----|-----|\n";

	std::vector<Command> newvec;
	for( const auto& cmd: vcmd )
	{
		const auto& cats = cmd._cats;
		auto f = std::find( std::begin(cats), std::end(cats), cat );
		if( f != std::end(cats) )
			newvec.push_back( cmd );
//		if( cmd._cat == cat )
//			newvec.push_back( cmd );
	}
	std::sort( newvec.begin(), newvec.end() );
	
	for( const auto& cmd: newvec )
	{
		f << "| <a href='https://www.google.fr/search?q=linux+"
			<< cmd._name << "'>" 
			<< cmd._name << "</a> | "
			<< cmd._comment << " | ";
		if( !cmd._seealso.empty() )
		{
			auto letter = cmd._seealso.at(0);
			f << "[" << cmd._seealso << "](linux_cmds_list_alpha.md#" << letter << ")";
		}
		f << " | " << getString(cmd._type) << " |\n";
	}
}

//--------------------------------------------------
void
genListCat(
	std::string                  fn,
	const std::vector<Command>&  cmds,
	const Categories&            vcats
)
{
	std::ofstream f( fn );
	assert( f.is_open() );
	f << "# Linux Shell: liste de commandes par catégorie\n\n"
		<< "[Liste alphabétique](linux_cmds_list_alpha.md)\n\n"
		<< "<a name='top'></a>\n\n"
		<< "Catégories:  \n";

// list of links
	int tot = 0;
	for( int idx=1; idx<vcats.size(); idx++ )
	{
		auto nb = countCateg(idx,cmds);
		f << "* " << idx << " - [" << vcats[idx].second << "](#cat" << vcats[idx].first << ")\n";
		tot += nb;
	}
	f << "\nTotal: " << tot << " commandes\n\n";
	printHeader( f );
	
	for(int idx=1; idx<vcats.size(); idx++ )
		genCat( f, idx, vcats[idx], cmds );
	printfooter(f);
}

//--------------------------------------------------
void
printForType(
	std::ofstream&               f,
	const std::vector<Command>&  cmds,
	const Categories&            categs,
	En_Type                      type
)
{
	f << "## Commandes \"" << getString( type ) << "\"\n\n"
		<< "| Nom | Description | Catégorie | Voir aussi |\n"
		<< "|-----|-------------|-----------|------------|\n";
		
	for( const auto& cmd: cmds )
		if( cmd._type == type )
		{
			f << "| " << cmd._name
				<< " | " << cmd._comment << " | ";
			printCategories( f, cmd, categs );
			f << " | ";
			if( !cmd._seealso.empty() )
			{
				auto letter = cmd._seealso.at(0);
				f << "[" << cmd._seealso << "](linux_cmds_list_alpha.md#" << letter << ")";
			}
			f << " |\n";
		}
	f << "\n";
}

//--------------------------------------------------
void
genListType(
	std::string           fn,     ///< filename
	std::vector<Command>  cmds,   ///< all the commands
	const Categories&     categs  ///< categories
)
{
	std::ofstream f( fn );
	assert( f.is_open() );
	f << "# Linux Shell: liste de commandes par type\n\n"
		<< "[Liste alphabétique](linux_cmds_list_alpha.md) - "
		<< "[Liste par catégorie](linux_cmds_list_cat.md)\n\n"
		<< "<a name='top'></a>\n\n";

	std::sort( cmds.begin(), cmds.end() );
	auto first_letter = cmds[0]._name.at(0);
	bool start = true;

	printForType( f, cmds, categs, T_BUILTIN    );
	printForType( f, cmds, categs, T_PRESENT    );
	printForType( f, cmds, categs, T_NOTPRESENT );

	printfooter(f);
}

//--------------------------------------------------
int main( int argc, const char* argv[] )
{
	assert( argc > 1 );
	auto cat = readCSV_cat( "linux_cat.csv" );
	auto cmds = readCSV_cmd( std::string(argv[1]) );
	genListAlpha( "../linux_cmds_list_alpha.md", cmds, cat );
	genListCat( "../linux_cmds_list_cat.md", cmds.first, cat );
	genListType( "../linux_cmds_list_type.md", cmds.first, cat );
}


