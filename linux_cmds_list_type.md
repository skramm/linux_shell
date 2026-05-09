# Linux Shell: liste de commandes par type

[Liste alphabétique](linux_cmds_list_alpha.md) - [Liste par catégorie](linux_cmds_list_cat.md)

<a name='top'></a>

## Commandes "_builtin_"

| Nom | Description | Catégorie | Voir aussi |
|------|------|------|------|------|
| alias | composition de commandes | [Général](linux_cmds_list_cat.md#cat4.md) | [unalias](linux_cmds_list_alpha.md#u) |
| bg | passage d'un _job_ en arrière plan (_BackGround_) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) | [fg](linux_cmds_list_alpha.md#f) |
| break | sortie de boucle "for" | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) | [for](linux_cmds_list_alpha.md#f) |
| case |  | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| cd | _Change Directory_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) | [pushd](linux_cmds_list_alpha.md#p) |
| echo | affichage de texte/variable | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) | [printf](linux_cmds_list_alpha.md#p) |
| eval | exécute la commande passée en argument | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| exit | Terminaison du script et renvoi  d'une valeur à l'OS | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) | [return](linux_cmds_list_alpha.md#r) |
| export | exportation de variable dans un sous-shell | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| fg | passage d'un _job_ au premier plan (_ForeGround_) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) | [bg](linux_cmds_list_alpha.md#b) |
| for |  | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| function | définition d'une fonction Bash | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| help | liste commandes "_builtin_" et aide | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23.md) | [man](linux_cmds_list_alpha.md#m) |
| history | historique des commandes | [Général](linux_cmds_list_cat.md#cat4.md) |  |
| if |  | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| jobs | affichage des _jobs_ lancés | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) |  |
| kill | stoppe un process par PID (envoi d'un signal POSIX) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) | [pkill](linux_cmds_list_alpha.md#p) |
| popd | récupération dossier courant | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) | [pushd](linux_cmds_list_alpha.md#p) |
| printf | affichage de texte/variable formatté | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) | [echo](linux_cmds_list_alpha.md#e) |
| pushd | chgt dossier courant avec sauvegarde | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) | [popd](linux_cmds_list_alpha.md#p) |
| pwd | _print working directory_ | [Général](linux_cmds_list_cat.md#cat4.md) |  |
| read | saisie ligne (clavier ou fichier) | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| return | fin de fonction | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) | [exit,function](linux_cmds_list_alpha.md#e) |
| set | paramétrage du shell | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| shift | décalage paramètres positionnels ($1, $2, ...) | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| source | exécution d'un script dans le même shell | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| time | chronométrage de tâche | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| trap | interception de signal POSIX | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| type | indique si une commande est interne (_builtin_) ou externe | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| umask | permissions par défaut | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) | [chmod](linux_cmds_list_alpha.md#c) |
| unalias | suppression d'un alias | [Général](linux_cmds_list_cat.md#cat4.md) | [alias](linux_cmds_list_alpha.md#a) |
| while |  | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |

## Commandes "_installed_"

| Nom | Description | Catégorie | Voir aussi |
|------|------|------|------|------|
| 7z | compression/décompression | [Compression](linux_cmds_list_cat.md#cat19.md) |  |
| ab | _Apache's server benchmarking tool_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) | [hey](linux_cmds_list_alpha.md#h) |
| addgroup | création groupe d'utilisateurs | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [adduser](linux_cmds_list_alpha.md#a) |
| adduser | création utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) |  |
| apropos | recherche dans les pages de manuel | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23.md) | [man](linux_cmds_list_alpha.md#m) |
| apt | gestion paquets Debian | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| apt-get | gestion paquets Debian (bas niveau) | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| arch | architecture processeur | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [uname](linux_cmds_list_alpha.md#u) |
| awk | _pattern scanning and processing language_ | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| base64 | encodage/décodage <a href="https://fr.wikipedia.org/wiki/Base64">base64</a> | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| basename | extraction nom à partir d'un chemin | [Controle des scripts](linux_cmds_list_cat.md#cat16.md) |  |
| bc | calculatrice CLI | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| blkid | accès aux détails des _devices_ de type "bloc" | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) | [lsblk](linux_cmds_list_alpha.md#l) |
| bzip2 | compression | [Compression](linux_cmds_list_cat.md#cat19.md) |  |
| cat | affiche et/ou concatene un/des fichiers | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) |  |
| chage | _change user password expiry information_ | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) | [passwd](linux_cmds_list_alpha.md#p) |
| chgrp | chgt groupe propriétaire fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) | [chown](linux_cmds_list_alpha.md#c) |
| chmod | chgt permissions fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) |  |
| chown | chgt propriétaire fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) | [chgrp](linux_cmds_list_alpha.md#c) |
| chrt | manipulation attributs d'un process | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) |  |
| clear | effacement terminal | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| cmake | outil de _build_ multi OS | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| cmp | comparaison de fichiers, par octet | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) | [diff](linux_cmds_list_alpha.md#d) |
| column | transformation texte en colonnes | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| comm | comparaison de fichiers, par ligne | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) | [diff](linux_cmds_list_alpha.md#d) |
| cp | copie fichier(s) | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) | [mv](linux_cmds_list_alpha.md#m) |
| cpio | manipulation d'archive | [Compression](linux_cmds_list_cat.md#cat19.md) |  |
| cpupower | accès/édition paramètres de puissance CPU | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) |  |
| cron | planification de tâches | [Divers](linux_cmds_list_cat.md#cat7.md) | [at](linux_cmds_list_alpha.md#a) |
| curl | client multiprotocoles (wget en mieux) | [Réseau](linux_cmds_list_cat.md#cat3.md) | [wget](linux_cmds_list_alpha.md#w) |
| cut | suppression de texte dans des lignes | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| date | affiche date & heure | [Divers](linux_cmds_list_cat.md#cat7.md) | [cal](linux_cmds_list_alpha.md#c) |
| dd | utilitaire de copie bas niveau | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) |  |
| depmod | _generates modules.dep and map files_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| df | _disk free_ | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) |  |
| diff | différences entre 2 fichiers, ligne par ligne | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) | [cmp](linux_cmds_list_alpha.md#c) |
| dig | requete DNS | [Réseau](linux_cmds_list_cat.md#cat3.md) | [nslookup](linux_cmds_list_alpha.md#n) |
| dir | alias de ls | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) | [ls](linux_cmds_list_alpha.md#l) |
| dmesg | affichage logs kernel (buffer circulaire) | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| dpkg | utilitaire paquets Debian (.deb) | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| du | _disk usage_ | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) | [ncdu](linux_cmds_list_alpha.md#n) |
| env | exécution d'un programme en modifiant l'environnement | [Divers](linux_cmds_list_cat.md#cat7.md) | [printenv](linux_cmds_list_alpha.md#p) |
| fc-list | _list available fonts_ | [Divers](linux_cmds_list_cat.md#cat7.md) | [pango-list](linux_cmds_list_alpha.md#p) |
| fdisk | _manipulate disk partition table_ | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) |  |
| file | nature d'un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) |  |
| find | _search for files, folders,_ ... | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) |  |
| findmnt | _find a filesystem_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| fmt | text formatter | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| fold | ajustement longueur de ligne | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| free | état RAM utilisée/libre | [Mémoire](linux_cmds_list_cat.md#cat22.md) | [vmstat](linux_cmds_list_alpha.md#v) |
| fsck | Vérification et correction système de fichier | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) |  |
| ftp | transfert de fichiers | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| g++ | compilation C++ | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| gcc | compilation C | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| getfacl | affichage des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) | [setfacl](linux_cmds_list_alpha.md#s) |
| git | **LE** gestionnaire de versions de fichiers source | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| grep | recherche de chaîne | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) | [ripgrep](linux_cmds_list_alpha.md#r) |
| groupadd | création groupe (bas niveau!) | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [addgroup](linux_cmds_list_alpha.md#a) |
| groupmod | modification d'un groupe d'utilisateurs | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) |  |
| groups | affiche les groupes existants | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [id](linux_cmds_list_alpha.md#i) |
| gunzip | decompression zip | [Compression](linux_cmds_list_cat.md#cat19.md) | [gzip](linux_cmds_list_alpha.md#g) |
| gzip | compression zip | [Compression](linux_cmds_list_cat.md#cat19.md) | [zip,gunzip](linux_cmds_list_alpha.md#z) |
| halt |  | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [shutdown,reboot](linux_cmds_list_alpha.md#s) |
| hdparm | accès/édition paramètres des disques | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) |  |
| head | premières lignes texte | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [tail](linux_cmds_list_alpha.md#t) |
| host | requete DNS | [Réseau](linux_cmds_list_cat.md#cat3.md) | [dig](linux_cmds_list_alpha.md#d) |
| hostname | nom de la machine | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| htop | top en mieux | [Monitoring système](linux_cmds_list_cat.md#cat21.md) | [top,nmon](linux_cmds_list_alpha.md#t) |
| id | affiche les infos sur un utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [whoami](linux_cmds_list_alpha.md#w) |
| info | aide sur commande | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23.md) | [man](linux_cmds_list_alpha.md#m) |
| insmod | _insert a module into the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| ip |  | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| journalctl | outil d'accès aux logs systemd | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) | [systemctl](linux_cmds_list_alpha.md#s) |
| jq | traitement de chaines JSON | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) | [jo](linux_cmds_list_alpha.md#j) |
| killall | stoppe tous les process par nom | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) |  |
| last | historique des logins & boots | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) |  |
| ld | _linker_ de binaires | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| ldconfig | _configure dynamic linker run-time bindings_ | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| less | filtre d'affichage | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [more](linux_cmds_list_alpha.md#m) |
| ln | création de lien, symbolique ou _hardlink_ | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) |  |
| logger | écriture dans un log système | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) |  |
| loginctl | _Control the systemd login manager_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) | [systemctl](linux_cmds_list_alpha.md#s) |
| look | _display lines beginning with a given string_ | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| losetup | _set up and control loop devices_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [lsblk](linux_cmds_list_alpha.md#l) |
| ls | _list directory content_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) |  |
| lsb_release | version distribution | [Général](linux_cmds_list_cat.md#cat4.md) | [uname](linux_cmds_list_alpha.md#u) |
| lsblk | liste périphs stockage "bloc" | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [blkid](linux_cmds_list_alpha.md#b) |
| lscpu | détails sur archi CPU | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| lshw | _list hardware_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| lsmod | _show the status of modules in the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| lsof | _list open files_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [ss](linux_cmds_list_alpha.md#s) |
| lspci | _list all PCI devices_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| lsusb | liste périphs USB | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| make | construction d'une cible en fonction des dépendances | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| man | manuel | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23.md) | [help](linux_cmds_list_alpha.md#h) |
| md5sum | calcul de hash MD5 | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| mkdir | _make directory_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) |  |
| modinfo | _show information about a module_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| modprobe | _add and remove modules from the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| more | filtre d'affichage | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [less](linux_cmds_list_alpha.md#l) |
| mount | montage de partitions | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) | [umount](linux_cmds_list_alpha.md#u) |
| mtr | affiche les étapes d'une requete réseau | [Réseau](linux_cmds_list_cat.md#cat3.md) | [traceroute](linux_cmds_list_alpha.md#t) |
| mv | déplacement/renommage | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) | [cp](linux_cmds_list_alpha.md#c) |
| nano | éditeur en mode "console" | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| nc | alias pour netcat | [Réseau](linux_cmds_list_cat.md#cat3.md) | [netcat](linux_cmds_list_alpha.md#n) |
| netcat | utilitaire TCP/UDP | [Réseau](linux_cmds_list_cat.md#cat3.md) | [nc](linux_cmds_list_alpha.md#n) |
| netstat | infos/reseau, routage, etc. | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| npm | gestionnaire de paquets Javascript | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| nslookup | requete DNS (_deprecated_) | [Réseau](linux_cmds_list_cat.md#cat3.md) | [dig](linux_cmds_list_alpha.md#d) |
| od | visualisation en hexa ou octal | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [xxd](linux_cmds_list_alpha.md#x) |
| passwd | changement pwd | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [chage](linux_cmds_list_alpha.md#c) |
| paste | fusion de lignes de texte de plusieurs fichiers | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| pidof |  donne le PID d'un process | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) | [ps](linux_cmds_list_alpha.md#p) |
| ping | envoi de trames ICMP | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| pip | gestionnaire de paquets Python (2 ou 3) | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| pip3 | gestionnaire de paquets Python3 | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| pkg-config | outil de paramétrage de compilation, renvoie les infos sur librairies installées | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| pkill | stoppe un process par nom | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12.md) | [kill](linux_cmds_list_alpha.md#k) |
| printenv | liste var. environnement | [Divers](linux_cmds_list_cat.md#cat7.md) | [env](linux_cmds_list_alpha.md#e) |
| ps | snapshot des process | [Monitoring système](linux_cmds_list_cat.md#cat21.md) | [top,pstree](linux_cmds_list_alpha.md#t) |
| pstree | arborescence des process | [Monitoring système](linux_cmds_list_cat.md#cat21.md) | [ps](linux_cmds_list_alpha.md#p) |
| reboot | reboot | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [shutdown,halt](linux_cmds_list_alpha.md#s) |
| rev | inversion de texte | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| rm | suppression fichier | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) | [rmdir](linux_cmds_list_alpha.md#r) |
| rmdir | supression dossier | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) | [rm](linux_cmds_list_alpha.md#r) |
| rmmod | _remove a module from the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| route | affiche ou édite la table de routage | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| rpm | gestion paquets Fedora | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| rsync | copie et synchronisation de fichiers entre machines | [Réseau](linux_cmds_list_cat.md#cat3.md) - [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) |  |
| scp | tranfert de fichiers entre machines | [Réseau](linux_cmds_list_cat.md#cat3.md) - [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) |  |
| screen | multiplexeur de terminal | [Divers](linux_cmds_list_cat.md#cat7.md) | [tmux](linux_cmds_list_alpha.md#t) |
| sed |  _Stream EDitor_ | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| seq | _print a sequence of numbers_ | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| setfacl | modification des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) de fichiers/dossier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5.md) | [getfacl](linux_cmds_list_alpha.md#g) |
| sha256sum | calcul de hash SHA256 | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| shasum | calcul de hash SHA (256,512,...) | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) | [sha256sum](linux_cmds_list_alpha.md#s) |
| showkey | affichage codes claviers en temps réel | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) | [xev](linux_cmds_list_alpha.md#x) |
| shred | effacement en profondeur de fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) |  |
| shuf | permutation aléatoire de lignes | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) | [sort](linux_cmds_list_alpha.md#s) |
| shutdown | Comme son nom l'indique... | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [reboot,halt](linux_cmds_list_alpha.md#r) |
| sleep | attente | [Divers](linux_cmds_list_cat.md#cat7.md) | [time,at](linux_cmds_list_alpha.md#t) |
| snap | utilitaire de controle des "snap" (Ubuntu) | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| sort | tri de texte | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| split | Découpage d'un fichier en plusieurs morceaux | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| ss | _socket statistics_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [lsof](linux_cmds_list_alpha.md#l) |
| ssh | Connection à une machine distante | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| ssh-add |  | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| ssh-copy-id |  | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| ssh-keygen | Génération de clés SSH | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| stat | détails complets sur un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) |  |
| strace | _trace system calls and signals_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) - [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) |  |
| strings | extraction de chaines dans des binaires | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| su | changement temporaire de _user_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [sudo](linux_cmds_list_alpha.md#s) |
| sudo | exécution d'une commande admin | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [su](linux_cmds_list_alpha.md#s) |
| swapoff | gestion mémoire _swap_ | [Mémoire](linux_cmds_list_cat.md#cat22.md) | [swapon](linux_cmds_list_alpha.md#s) |
| swapon | gestion mémoire _swap_ | [Mémoire](linux_cmds_list_cat.md#cat22.md) | [swapoff](linux_cmds_list_alpha.md#s) |
| systemctl | gestion des services (CLI/systemd) | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |
| tac | affichage fichier à l'envers | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [cat](linux_cmds_list_alpha.md#c) |
| tail | dernières lignes texte | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [head](linux_cmds_list_alpha.md#h) |
| tar | utilitaire archivage | [Compression](linux_cmds_list_cat.md#cat19.md) | [zip](linux_cmds_list_alpha.md#z) |
| tcpdump | capture trames réseau (Wireshark en CLI) | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| tee | modif redirection (stdout, stderr) | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| tmux | multiplexeur de terminal | [Divers](linux_cmds_list_cat.md#cat7.md) | [screen](linux_cmds_list_alpha.md#s) |
| top | _dashboard_ système & process | [Monitoring système](linux_cmds_list_cat.md#cat21.md) | [htop](linux_cmds_list_alpha.md#h) |
| touch | création ou MAJ date d'un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) |  |
| tr | _translate or delete characters_ | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| tree | affiche l'arborescence d'un dossier | [Manipulation dossiers](linux_cmds_list_cat.md#cat15.md) | [ls](linux_cmds_list_alpha.md#l) |
| tty | indique le terminal courant (`/dev/pts/XX`) | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| ufw |  pilote CLI de Firewall  | [Réseau](linux_cmds_list_cat.md#cat3.md) - [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) |  |
| umount | démontage de partitions | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) | [mount](linux_cmds_list_alpha.md#m) |
| uname | version noyau | [Général](linux_cmds_list_cat.md#cat4.md) - [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) | [lsb_release](linux_cmds_list_alpha.md#l) |
| uniq | suppression lignes identiques | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) |  |
| unzip | décompression zip | [Compression](linux_cmds_list_cat.md#cat19.md) | [zip](linux_cmds_list_alpha.md#z) |
| uptime | durée fonctionnement système | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| useradd | création utilisateur (bas niveau!) | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [adduser](linux_cmds_list_alpha.md#a) |
| userdel | suppression compte | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) |  |
| usermod | modification compte utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) |  |
| vmstat | état mémoire virtuelle | [Mémoire](linux_cmds_list_cat.md#cat22.md) | [free](linux_cmds_list_alpha.md#f) |
| w | qui est loggé et que fait-il? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [who](linux_cmds_list_alpha.md#w) |
| watch | exécution périodique d'une commande | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| wc | _word count_ | [Général](linux_cmds_list_cat.md#cat4.md) |  |
| wget | client http CLI | [Réseau](linux_cmds_list_cat.md#cat3.md) | [curl](linux_cmds_list_alpha.md#c) |
| whatis | que fait cette commande? | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23.md) |  |
| whereis | indique la localisation d'une commande | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23.md) |  |
| which | localisation (chemin) d'un programme | [Divers](linux_cmds_list_cat.md#cat7.md) | [locate](linux_cmds_list_alpha.md#l) |
| who | qui est loggé? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [w](linux_cmds_list_alpha.md#w) |
| whoami | qui suis-je? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) | [id](linux_cmds_list_alpha.md#i) |
| xargs |  | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| xdg-open | ouverture fichier avec application GUI associée au type par défaut | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) |  |
| xxd | visualisation en hexa | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [od](linux_cmds_list_alpha.md#o) |
| yes | _output a string repeatedly until killed_ | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| zip | compression zip | [Compression](linux_cmds_list_cat.md#cat19.md) | [gzip,unzip](linux_cmds_list_alpha.md#g) |
| zramctl | paramétrage et controle de la compression RAM | [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) |  |

## Commandes "NI"

| Nom | Description | Catégorie | Voir aussi |
|------|------|------|------|------|
| aa-xxx | ensemble de commandes de gestion de <a href="https://apparmor.net/">`Apparmor`</a> | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) |  |
| acpi | details sur alimentation (batterie ou secteur) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| aplay | écoute de fichier audio | [Multimédia](linux_cmds_list_cat.md#cat24.md) |  |
| asciinema | _screencast_ console | [Multimédia](linux_cmds_list_cat.md#cat24.md) | [ffmpeg](linux_cmds_list_alpha.md#f) |
| at | planification de tâches | [Divers](linux_cmds_list_cat.md#cat7.md) | [cron](linux_cmds_list_alpha.md#c) |
| auditd | _Logging_ des actions système | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) |  |
| banner | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) | [figlet](linux_cmds_list_alpha.md#f) |
| bat | cat en mieux | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14.md) | [cat,tail](linux_cmds_list_alpha.md#c) |
| btop |  monitoring système | [Monitoring système](linux_cmds_list_cat.md#cat21.md) | [htop,top](linux_cmds_list_alpha.md#h) |
| cal | affichage calendrier | [Divers](linux_cmds_list_cat.md#cat7.md) | [date](linux_cmds_list_alpha.md#d) |
| cloc | _Count Lines Of Code_ | [Dev](linux_cmds_list_cat.md#cat6.md) | [wc](linux_cmds_list_alpha.md#w) |
| convert | conversion format d'image | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| cowsay | [lien](https://en.wikipedia.org/wiki/Cattle#/media/File:Cow_(Fleckvieh_breed)_Oeschinensee_Slaunger_2009-07-07.jpg) | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| display | affichage d'une image sur serveur X | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) |  |
| evtest | affichage évènements clavier+souris | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) | [showkey,xev](linux_cmds_list_alpha.md#s) |
| exiftool | manipulation métadonnées fichier image, audio, etc. | [Manipulation fichiers](linux_cmds_list_cat.md#cat11.md) |  |
| falco | _kernel monitoring and detection agent_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) | [sysdig](linux_cmds_list_alpha.md#s) |
| ffmpeg | édition vidéo généraliste | [Multimédia](linux_cmds_list_cat.md#cat24.md) | [melt](linux_cmds_list_alpha.md#m) |
| figlet | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) | [toilet](linux_cmds_list_alpha.md#t) |
| gdb | déboggage pas à pas | [Dev](linux_cmds_list_cat.md#cat6.md) |  |
| hey | _HTTP load generator_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) | [ab](linux_cmds_list_alpha.md#a) |
| hwclock | accès horloge interne | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) | [time](linux_cmds_list_alpha.md#t) |
| ifdown | désactivation interface réseau | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| iftop | monitoring réseau | [Réseau](linux_cmds_list_cat.md#cat3.md) - [Monitoring système](linux_cmds_list_cat.md#cat21.md) |  |
| ifup | activation interface réseau | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| inxi | informations système | [Monitoring système](linux_cmds_list_cat.md#cat21.md) | [lstopo-htop-lsdev](linux_cmds_list_alpha.md#l) |
| iotop | liste process avec leur utilisation I/O disque | [Monitoring système](linux_cmds_list_cat.md#cat21.md) |  |
| jo | génération de JSON | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) | [jq](linux_cmds_list_alpha.md#j) |
| locate | localise un programme dans le système | [Général](linux_cmds_list_cat.md#cat4.md) | [which](linux_cmds_list_alpha.md#w) |
| lsdev | infos générales sur _hardware_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| lstopo | architecture CPU (coeurs, RAM cache, ...) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) - [Mémoire](linux_cmds_list_cat.md#cat22.md) |  |
| melt | édition vidéo | [Multimédia](linux_cmds_list_cat.md#cat24.md) | [ffmpeg](linux_cmds_list_alpha.md#f) |
| ncdu | `du` en mieux | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) | [du](linux_cmds_list_alpha.md#d) |
| nmap | exploration réseau | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| nmcli | pilote CLI des connexions réseau | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| nmon | _dashboard_ système | [Monitoring système](linux_cmds_list_cat.md#cat21.md) | [htop](linux_cmds_list_alpha.md#h) |
| notify-send | Envoi de notification au bureau | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) |  |
| pango-list | liste des polices de caractères installées | [Divers](linux_cmds_list_cat.md#cat7.md) | [fc-list](linux_cmds_list_alpha.md#f) |
| pango-view | _convert text to image_ | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| pv | _Pipe Viewer_ (monitoring de _pipe_ ou de copie) | [Divers](linux_cmds_list_cat.md#cat7.md) |  |
| pwgen | génération de _password_ | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9.md) - [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| qrencode | génération de qrcodes | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| ripgrep | (rg) grep récursif | [Traitement données texte](linux_cmds_list_cat.md#cat8.md) | [grep](linux_cmds_list_alpha.md#g) |
| sensors | données capteurs (température, tension, etc.) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1.md) |  |
| smartctl | accès aux données [SMART](https://fr.wikipedia.org/wiki/Self-Monitoring,_Analysis_and_Reporting_Technology) des disques | [Disque & stockage](linux_cmds_list_cat.md#cat2.md) |  |
| sox | couteau suisse audio | [Multimédia](linux_cmds_list_cat.md#cat24.md) |  |
| soxi | détails sur fichier audio | [Multimédia](linux_cmds_list_cat.md#cat24.md) |  |
| spd-say | synthétiseur vocal | [Multimédia](linux_cmds_list_cat.md#cat24.md) |  |
| stress | génération de charge CPU | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) |  |
| sysdig | _Cloud-Native Application Protection Platform_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17.md) - [Gestion Kernel](linux_cmds_list_cat.md#cat13.md) | [falco](linux_cmds_list_alpha.md#f) |
| tldr | `man` en mieux | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23.md) | [man](linux_cmds_list_alpha.md#m) |
| toilet | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) | [banner](linux_cmds_list_alpha.md#b) |
| traceroute | affiche les étapes d'une requete réseau | [Réseau](linux_cmds_list_cat.md#cat3.md) | [mtr](linux_cmds_list_alpha.md#m) |
| updatedb | mise à jour BDD `locate` | [Général](linux_cmds_list_cat.md#cat4.md) | [locate](linux_cmds_list_alpha.md#l) |
| uuid | génération de _Universally Unique IDentifier_ | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20.md) |  |
| whois | infos/domaine | [Réseau](linux_cmds_list_cat.md#cat3.md) |  |
| wl-paste | copie presse-papier (Wayland) | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) |  |
| xclip | transfert vers le presse-papier X | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) |  |
| xev | affichage évènements clavier+souris | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) | [showkey,evtest](linux_cmds_list_alpha.md#s) |
| xinput | _utility to configure and test X input devices_ | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) |  |
| yt-dlp | téléchargement vidéos | [Multimédia](linux_cmds_list_cat.md#cat24.md) |  |
| yum | gestion paquets RedHat | [Installation logiciels](linux_cmds_list_cat.md#cat10.md) |  |
| zenity | génération de dialogues GUI via CLI | [Interface avec bureau](linux_cmds_list_cat.md#cat18.md) |  |



_MAJ: 2026-05-09T10:12:39+0000_,
