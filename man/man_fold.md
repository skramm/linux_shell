# Manuel de `fold`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md)

[Recherche Google](https://www.google.fr/search?q=linux+fold)

---

## NAME
       fold - wrap each input line to fit in specified width

## SYNOPSIS
       fold [OPTION]... [FILE]...

## DESCRIPTION
       Wrap input lines in each FILE, writing to standard output.

       With no FILE, or when FILE is -, read standard input.

       Mandatory  arguments  to  long  options are mandatory for short options
       too.

       -b, --bytes
              count bytes rather than columns

       -s, --spaces
              break at spaces

       -w, --width=WIDTH
              use WIDTH columns instead of 80

       --help display this help and exit

       --version
              output version information and exit

AUTHOR
       Written by David MacKenzie.

## REPORTING BUGS
       GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
       Report any translation bugs to <https://translationproject.org/team/>

COPYRIGHT
       Copyright © 2023 Free Software Foundation, Inc.   License  GPLv3+:  GNU
       GPL version 3 or later <https://gnu.org/licenses/gpl.html>.
       This  is  free  software:  you  are free to change and redistribute it.
       There is NO WARRANTY, to the extent permitted by law.

## SEE ALSO
       fmt(1)

       Full documentation <https://www.gnu.org/software/coreutils/fold>
       or available locally via: info '(coreutils) fold invocation'

GNU coreutils 9.4                January 2026                          FOLD(1)
