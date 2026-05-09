# Linux Shell: liste de commandes par type

[Liste alphabétique](linux_cmds_list_alpha.md) - [Liste par catégorie](linux_cmds_list_cat.md)

<a name='top'></a>

## Commandes "_builtin_"

| Nom | Description | Catégorie | Voir aussi |
|-----|-------------|-----------|------------|
| alias | composition de commandes | [Général](linux_cmds_list_cat.md#cat4) | [unalias](linux_cmds_list_alpha.md#u) |
| bg | passage d'un _job_ en arrière plan (_BackGround_) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [fg](linux_cmds_list_alpha.md#f) |
| break | sortie de boucle "for" | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [for](linux_cmds_list_alpha.md#f) |
| case |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| cd | _Change Directory_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [pushd](linux_cmds_list_alpha.md#p) |
| echo | affichage de texte/variable | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [printf](linux_cmds_list_alpha.md#p) |
| eval | exécute la commande passée en argument | [Divers](linux_cmds_list_cat.md#cat7) |  |
| exit | Terminaison du script et renvoi  d'une valeur à l'OS | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [return](linux_cmds_list_alpha.md#r) |
| export | exportation de variable dans un sous-shell | [Divers](linux_cmds_list_cat.md#cat7) |  |
| fg | passage d'un _job_ au premier plan (_ForeGround_) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [bg](linux_cmds_list_alpha.md#b) |
| for |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| function | définition d'une fonction Bash | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| help | liste commandes "_builtin_" et aide | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| history | historique des commandes | [Général](linux_cmds_list_cat.md#cat4) |  |
| if |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| jobs | affichage des _jobs_ lancés | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) |  |
| kill | stoppe un process par PID (envoi d'un signal POSIX) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [pkill](linux_cmds_list_alpha.md#p) |
| popd | récupération dossier courant | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [pushd](linux_cmds_list_alpha.md#p) |
| printf | affichage de texte/variable formatté | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [echo](linux_cmds_list_alpha.md#e) |
| pushd | chgt dossier courant avec sauvegarde | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [popd](linux_cmds_list_alpha.md#p) |
| pwd | _print working directory_ | [Général](linux_cmds_list_cat.md#cat4) |  |
| read | saisie ligne (clavier ou fichier) | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| return | fin de fonction | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [exit,function](linux_cmds_list_alpha.md#e) |
| set | paramétrage du shell | [Divers](linux_cmds_list_cat.md#cat7) |  |
| shift | décalage paramètres positionnels ($1, $2, ...) | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| source | exécution d'un script dans le même shell | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| time | chronométrage de tâche | [Divers](linux_cmds_list_cat.md#cat7) |  |
| trap | interception de signal POSIX | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| type | indique si une commande est interne (_builtin_) ou externe | [Divers](linux_cmds_list_cat.md#cat7) |  |
| umask | permissions par défaut | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [chmod](linux_cmds_list_alpha.md#c) |
| unalias | suppression d'un alias | [Général](linux_cmds_list_cat.md#cat4) | [alias](linux_cmds_list_alpha.md#a) |
| while |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |

## Commandes "_installed_"

| Nom | Description | Catégorie | Voir aussi |
|-----|-------------|-----------|------------|
| 7z | compression/décompression | [Compression](linux_cmds_list_cat.md#cat19) |  |
| ab | _Apache's server benchmarking tool_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) | [hey](linux_cmds_list_alpha.md#h) |
| addgroup | création groupe d'utilisateurs | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [adduser](linux_cmds_list_alpha.md#a) |
| adduser | création utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| apropos | recherche dans les pages de manuel | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| apt | gestion paquets Debian | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| apt-get | gestion paquets Debian (bas niveau) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| arch | architecture processeur | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [uname](linux_cmds_list_alpha.md#u) |
| awk | _pattern scanning and processing language_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| base64 | encodage/décodage <a href="https://fr.wikipedia.org/wiki/Base64">base64</a> | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| basename | extraction nom à partir d'un chemin | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| bc | calculatrice CLI | [Divers](linux_cmds_list_cat.md#cat7) |  |
| blkid | accès aux détails des _devices_ de type "bloc" | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [lsblk](linux_cmds_list_alpha.md#l) |
| bzip2 | compression | [Compression](linux_cmds_list_cat.md#cat19) |  |
| cat | affiche et/ou concatene un/des fichiers | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| chage | _change user password expiry information_ | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [passwd](linux_cmds_list_alpha.md#p) |
| chgrp | chgt groupe propriétaire fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [chown](linux_cmds_list_alpha.md#c) |
| chmod | chgt permissions fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) |  |
| chown | chgt propriétaire fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [chgrp](linux_cmds_list_alpha.md#c) |
| chrt | manipulation attributs d'un process | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) |  |
| clear | effacement terminal | [Divers](linux_cmds_list_cat.md#cat7) |  |
| cmake | outil de _build_ multi OS | [Dev](linux_cmds_list_cat.md#cat6) |  |
| cmp | comparaison de fichiers, par octet | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [diff](linux_cmds_list_alpha.md#d) |
| column | transformation texte en colonnes | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| comm | comparaison de fichiers, par ligne | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [diff](linux_cmds_list_alpha.md#d) |
| cp | copie fichier(s) | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [mv](linux_cmds_list_alpha.md#m) |
| cpio | manipulation d'archive | [Compression](linux_cmds_list_cat.md#cat19) |  |
| cpupower | accès/édition paramètres de puissance CPU | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| cron | planification de tâches | [Divers](linux_cmds_list_cat.md#cat7) | [at](linux_cmds_list_alpha.md#a) |
| curl | client multiprotocoles (wget en mieux) | [Réseau](linux_cmds_list_cat.md#cat3) | [wget](linux_cmds_list_alpha.md#w) |
| cut | suppression de texte dans des lignes | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| date | affiche date & heure | [Divers](linux_cmds_list_cat.md#cat7) | [cal](linux_cmds_list_alpha.md#c) |
| dd | utilitaire de copie bas niveau | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| depmod | _generates modules.dep and map files_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| df | _disk free_ | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| diff | différences entre 2 fichiers, ligne par ligne | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [cmp](linux_cmds_list_alpha.md#c) |
| dig | requete DNS | [Réseau](linux_cmds_list_cat.md#cat3) | [nslookup](linux_cmds_list_alpha.md#n) |
| dir | alias de ls | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [ls](linux_cmds_list_alpha.md#l) |
| dmesg | affichage logs kernel (buffer circulaire) | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| dpkg | utilitaire paquets Debian (.deb) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| du | _disk usage_ | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [ncdu](linux_cmds_list_alpha.md#n) |
| env | exécution d'un programme en modifiant l'environnement | [Divers](linux_cmds_list_cat.md#cat7) | [printenv](linux_cmds_list_alpha.md#p) |
| fc-list | _list available fonts_ | [Divers](linux_cmds_list_cat.md#cat7) | [pango-list](linux_cmds_list_alpha.md#p) |
| fdisk | _manipulate disk partition table_ | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| file | nature d'un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| find | _search for files, folders,_ ... | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) |  |
| findmnt | _find a filesystem_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| fmt | text formatter | [Divers](linux_cmds_list_cat.md#cat7) |  |
| fold | ajustement longueur de ligne | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| free | état RAM utilisée/libre | [Mémoire](linux_cmds_list_cat.md#cat22) | [vmstat](linux_cmds_list_alpha.md#v) |
| fsck | Vérification et correction système de fichier | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| ftp | transfert de fichiers | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| g++ | compilation C++ | [Dev](linux_cmds_list_cat.md#cat6) |  |
| gcc | compilation C | [Dev](linux_cmds_list_cat.md#cat6) |  |
| getfacl | affichage des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [setfacl](linux_cmds_list_alpha.md#s) |
| git | **LE** gestionnaire de versions de fichiers source | [Dev](linux_cmds_list_cat.md#cat6) |  |
| grep | recherche de chaîne | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [ripgrep](linux_cmds_list_alpha.md#r) |
| groupadd | création groupe (bas niveau!) | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [addgroup](linux_cmds_list_alpha.md#a) |
| groupmod | modification d'un groupe d'utilisateurs | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| groups | affiche les groupes existants | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [id](linux_cmds_list_alpha.md#i) |
| gunzip | decompression zip | [Compression](linux_cmds_list_cat.md#cat19) | [gzip](linux_cmds_list_alpha.md#g) |
| gzip | compression zip | [Compression](linux_cmds_list_cat.md#cat19) | [zip,gunzip](linux_cmds_list_alpha.md#z) |
| halt |  | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [shutdown,reboot](linux_cmds_list_alpha.md#s) |
| hdparm | accès/édition paramètres des disques | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| head | premières lignes texte | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [tail](linux_cmds_list_alpha.md#t) |
| host | requete DNS | [Réseau](linux_cmds_list_cat.md#cat3) | [dig](linux_cmds_list_alpha.md#d) |
| hostname | nom de la machine | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| htop | top en mieux | [Monitoring système](linux_cmds_list_cat.md#cat21) | [top,nmon](linux_cmds_list_alpha.md#t) |
| id | affiche les infos sur un utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [whoami](linux_cmds_list_alpha.md#w) |
| info | aide sur commande | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| insmod | _insert a module into the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| ip |  | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| journalctl | outil d'accès aux logs systemd | [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [systemctl](linux_cmds_list_alpha.md#s) |
| jq | traitement de chaines JSON | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [jo](linux_cmds_list_alpha.md#j) |
| killall | stoppe tous les process par nom | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) |  |
| last | historique des logins & boots | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| ld | _linker_ de binaires | [Dev](linux_cmds_list_cat.md#cat6) |  |
| ldconfig | _configure dynamic linker run-time bindings_ | [Dev](linux_cmds_list_cat.md#cat6) |  |
| less | filtre d'affichage | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [more](linux_cmds_list_alpha.md#m) |
| ln | création de lien, symbolique ou _hardlink_ | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| logger | écriture dans un log système | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| loginctl | _Control the systemd login manager_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [systemctl](linux_cmds_list_alpha.md#s) |
| look | _display lines beginning with a given string_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| losetup | _set up and control loop devices_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [lsblk](linux_cmds_list_alpha.md#l) |
| ls | _list directory content_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) |  |
| lsb_release | version distribution | [Général](linux_cmds_list_cat.md#cat4) | [uname](linux_cmds_list_alpha.md#u) |
| lsblk | liste périphs stockage "bloc" | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [blkid](linux_cmds_list_alpha.md#b) |
| lscpu | détails sur archi CPU | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| lshw | _list hardware_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| lsmod | _show the status of modules in the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| lsof | _list open files_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [ss](linux_cmds_list_alpha.md#s) |
| lspci | _list all PCI devices_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| lsusb | liste périphs USB | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| make | construction d'une cible en fonction des dépendances | [Dev](linux_cmds_list_cat.md#cat6) |  |
| man | manuel | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [help](linux_cmds_list_alpha.md#h) |
| md5sum | calcul de hash MD5 | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| mkdir | _make directory_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) |  |
| modinfo | _show information about a module_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| modprobe | _add and remove modules from the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| more | filtre d'affichage | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [less](linux_cmds_list_alpha.md#l) |
| mount | montage de partitions | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [umount](linux_cmds_list_alpha.md#u) |
| mtr | affiche les étapes d'une requete réseau | [Réseau](linux_cmds_list_cat.md#cat3) | [traceroute](linux_cmds_list_alpha.md#t) |
| mv | déplacement/renommage | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [cp](linux_cmds_list_alpha.md#c) |
| nano | éditeur en mode "console" | [Divers](linux_cmds_list_cat.md#cat7) |  |
| nc | alias pour netcat | [Réseau](linux_cmds_list_cat.md#cat3) | [netcat](linux_cmds_list_alpha.md#n) |
| netcat | utilitaire TCP/UDP | [Réseau](linux_cmds_list_cat.md#cat3) | [nc](linux_cmds_list_alpha.md#n) |
| netstat | infos/reseau, routage, etc. | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| npm | gestionnaire de paquets Javascript | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| nslookup | requete DNS (_deprecated_) | [Réseau](linux_cmds_list_cat.md#cat3) | [dig](linux_cmds_list_alpha.md#d) |
| od | visualisation en hexa ou octal | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [xxd](linux_cmds_list_alpha.md#x) |
| passwd | changement pwd | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [chage](linux_cmds_list_alpha.md#c) |
| paste | fusion de lignes de texte de plusieurs fichiers | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| pidof |  donne le PID d'un process | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [ps](linux_cmds_list_alpha.md#p) |
| ping | envoi de trames ICMP | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| pip | gestionnaire de paquets Python (2 ou 3) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| pip3 | gestionnaire de paquets Python3 | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| pkg-config | outil de paramétrage de compilation, renvoie les infos sur librairies installées | [Dev](linux_cmds_list_cat.md#cat6) |  |
| pkill | stoppe un process par nom | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [kill](linux_cmds_list_alpha.md#k) |
| printenv | liste var. environnement | [Divers](linux_cmds_list_cat.md#cat7) | [env](linux_cmds_list_alpha.md#e) |
| ps | snapshot des process | [Monitoring système](linux_cmds_list_cat.md#cat21) | [top,pstree](linux_cmds_list_alpha.md#t) |
| pstree | arborescence des process | [Monitoring système](linux_cmds_list_cat.md#cat21) | [ps](linux_cmds_list_alpha.md#p) |
| reboot | reboot | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [shutdown,halt](linux_cmds_list_alpha.md#s) |
| rev | inversion de texte | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| rm | suppression fichier | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [rmdir](linux_cmds_list_alpha.md#r) |
| rmdir | supression dossier | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [rm](linux_cmds_list_alpha.md#r) |
| rmmod | _remove a module from the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| route | affiche ou édite la table de routage | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| rpm | gestion paquets Fedora | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| rsync | copie et synchronisation de fichiers entre machines | [Réseau](linux_cmds_list_cat.md#cat3) - [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| scp | tranfert de fichiers entre machines | [Réseau](linux_cmds_list_cat.md#cat3) - [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| screen | multiplexeur de terminal | [Divers](linux_cmds_list_cat.md#cat7) | [tmux](linux_cmds_list_alpha.md#t) |
| sed |  _Stream EDitor_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| seq | _print a sequence of numbers_ | [Divers](linux_cmds_list_cat.md#cat7) |  |
| setfacl | modification des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) de fichiers/dossier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [getfacl](linux_cmds_list_alpha.md#g) |
| sha256sum | calcul de hash SHA256 | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| shasum | calcul de hash SHA (256,512,...) | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [sha256sum](linux_cmds_list_alpha.md#s) |
| showkey | affichage codes claviers en temps réel | [Interface avec bureau](linux_cmds_list_cat.md#cat18) | [xev](linux_cmds_list_alpha.md#x) |
| shred | effacement en profondeur de fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| shuf | permutation aléatoire de lignes | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [sort](linux_cmds_list_alpha.md#s) |
| shutdown | Comme son nom l'indique... | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [reboot,halt](linux_cmds_list_alpha.md#r) |
| sleep | attente | [Divers](linux_cmds_list_cat.md#cat7) | [time,at](linux_cmds_list_alpha.md#t) |
| snap | utilitaire de controle des "snap" (Ubuntu) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| sort | tri de texte | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| split | Découpage d'un fichier en plusieurs morceaux | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| ss | _socket statistics_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [lsof](linux_cmds_list_alpha.md#l) |
| ssh | Connection à une machine distante | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| ssh-add |  | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| ssh-copy-id |  | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| ssh-keygen | Génération de clés SSH | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| stat | détails complets sur un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| strace | _trace system calls and signals_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) - [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| strings | extraction de chaines dans des binaires | [Dev](linux_cmds_list_cat.md#cat6) |  |
| su | changement temporaire de _user_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [sudo](linux_cmds_list_alpha.md#s) |
| sudo | exécution d'une commande admin | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [su](linux_cmds_list_alpha.md#s) |
| swapoff | gestion mémoire _swap_ | [Mémoire](linux_cmds_list_cat.md#cat22) | [swapon](linux_cmds_list_alpha.md#s) |
| swapon | gestion mémoire _swap_ | [Mémoire](linux_cmds_list_cat.md#cat22) | [swapoff](linux_cmds_list_alpha.md#s) |
| systemctl | gestion des services (CLI/systemd) | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| tac | affichage fichier à l'envers | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [cat](linux_cmds_list_alpha.md#c) |
| tail | dernières lignes texte | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [head](linux_cmds_list_alpha.md#h) |
| tar | utilitaire archivage | [Compression](linux_cmds_list_cat.md#cat19) | [zip](linux_cmds_list_alpha.md#z) |
| tcpdump | capture trames réseau (Wireshark en CLI) | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| tee | modif redirection (stdout, stderr) | [Divers](linux_cmds_list_cat.md#cat7) |  |
| tmux | multiplexeur de terminal | [Divers](linux_cmds_list_cat.md#cat7) | [screen](linux_cmds_list_alpha.md#s) |
| top | _dashboard_ système & process | [Monitoring système](linux_cmds_list_cat.md#cat21) | [htop](linux_cmds_list_alpha.md#h) |
| touch | création ou MAJ date d'un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| tr | _translate or delete characters_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| tree | affiche l'arborescence d'un dossier | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [ls](linux_cmds_list_alpha.md#l) |
| tty | indique le terminal courant (`/dev/pts/XX`) | [Divers](linux_cmds_list_cat.md#cat7) |  |
| ufw |  pilote CLI de Firewall  | [Réseau](linux_cmds_list_cat.md#cat3) - [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| umount | démontage de partitions | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [mount](linux_cmds_list_alpha.md#m) |
| uname | version noyau | [Général](linux_cmds_list_cat.md#cat4) - [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [lsb_release](linux_cmds_list_alpha.md#l) |
| uniq | suppression lignes identiques | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| unzip | décompression zip | [Compression](linux_cmds_list_cat.md#cat19) | [zip](linux_cmds_list_alpha.md#z) |
| uptime | durée fonctionnement système | [Divers](linux_cmds_list_cat.md#cat7) |  |
| useradd | création utilisateur (bas niveau!) | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [adduser](linux_cmds_list_alpha.md#a) |
| userdel | suppression compte | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| usermod | modification compte utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| vmstat | état mémoire virtuelle | [Mémoire](linux_cmds_list_cat.md#cat22) | [free](linux_cmds_list_alpha.md#f) |
| w | qui est loggé et que fait-il? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [who](linux_cmds_list_alpha.md#w) |
| watch | exécution périodique d'une commande | [Divers](linux_cmds_list_cat.md#cat7) |  |
| wc | _word count_ | [Général](linux_cmds_list_cat.md#cat4) |  |
| wget | client http CLI | [Réseau](linux_cmds_list_cat.md#cat3) | [curl](linux_cmds_list_alpha.md#c) |
| whatis | que fait cette commande? | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) |  |
| whereis | indique la localisation d'une commande | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) |  |
| which | localisation (chemin) d'un programme | [Divers](linux_cmds_list_cat.md#cat7) | [locate](linux_cmds_list_alpha.md#l) |
| who | qui est loggé? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [w](linux_cmds_list_alpha.md#w) |
| whoami | qui suis-je? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [id](linux_cmds_list_alpha.md#i) |
| xargs |  | [Divers](linux_cmds_list_cat.md#cat7) |  |
| xdg-open | ouverture fichier avec application GUI associée au type par défaut | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| xxd | visualisation en hexa | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [od](linux_cmds_list_alpha.md#o) |
| yes | _output a string repeatedly until killed_ | [Divers](linux_cmds_list_cat.md#cat7) |  |
| zip | compression zip | [Compression](linux_cmds_list_cat.md#cat19) | [gzip,unzip](linux_cmds_list_alpha.md#g) |
| zramctl | paramétrage et controle de la compression RAM | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |

## Commandes "NI"

| Nom | Description | Catégorie | Voir aussi |
|-----|-------------|-----------|------------|
| aa-xxx | ensemble de commandes de gestion de <a href="https://apparmor.net/">`Apparmor`</a> | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| acpi | details sur alimentation (batterie ou secteur) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| aplay | écoute de fichier audio | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| asciinema | _screencast_ console | [Multimédia](linux_cmds_list_cat.md#cat24) | [ffmpeg](linux_cmds_list_alpha.md#f) |
| at | planification de tâches | [Divers](linux_cmds_list_cat.md#cat7) | [cron](linux_cmds_list_alpha.md#c) |
| auditd | _Logging_ des actions système | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| banner | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [figlet](linux_cmds_list_alpha.md#f) |
| bat | cat en mieux | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [cat,tail](linux_cmds_list_alpha.md#c) |
| btop |  monitoring système | [Monitoring système](linux_cmds_list_cat.md#cat21) | [htop,top](linux_cmds_list_alpha.md#h) |
| cal | affichage calendrier | [Divers](linux_cmds_list_cat.md#cat7) | [date](linux_cmds_list_alpha.md#d) |
| cloc | _Count Lines Of Code_ | [Dev](linux_cmds_list_cat.md#cat6) | [wc](linux_cmds_list_alpha.md#w) |
| convert | conversion format d'image | [Divers](linux_cmds_list_cat.md#cat7) |  |
| cowsay | [lien](https://en.wikipedia.org/wiki/Cattle#/media/File:Cow_(Fleckvieh_breed)_Oeschinensee_Slaunger_2009-07-07.jpg) | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| display | affichage d'une image sur serveur X | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| evtest | affichage évènements clavier+souris | [Interface avec bureau](linux_cmds_list_cat.md#cat18) | [showkey,xev](linux_cmds_list_alpha.md#s) |
| exiftool | manipulation métadonnées fichier image, audio, etc. | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| falco | _kernel monitoring and detection agent_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) | [sysdig](linux_cmds_list_alpha.md#s) |
| ffmpeg | édition vidéo généraliste | [Multimédia](linux_cmds_list_cat.md#cat24) | [melt](linux_cmds_list_alpha.md#m) |
| figlet | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [toilet](linux_cmds_list_alpha.md#t) |
| gdb | déboggage pas à pas | [Dev](linux_cmds_list_cat.md#cat6) |  |
| hey | _HTTP load generator_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) | [ab](linux_cmds_list_alpha.md#a) |
| hwclock | accès horloge interne | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [time](linux_cmds_list_alpha.md#t) |
| ifdown | désactivation interface réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| iftop | monitoring réseau | [Réseau](linux_cmds_list_cat.md#cat3) - [Monitoring système](linux_cmds_list_cat.md#cat21) |  |
| ifup | activation interface réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| inxi | informations système | [Monitoring système](linux_cmds_list_cat.md#cat21) | [lstopo-htop-lsdev](linux_cmds_list_alpha.md#l) |
| iotop | liste process avec leur utilisation I/O disque | [Monitoring système](linux_cmds_list_cat.md#cat21) |  |
| jo | génération de JSON | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [jq](linux_cmds_list_alpha.md#j) |
| locate | localise un programme dans le système | [Général](linux_cmds_list_cat.md#cat4) | [which](linux_cmds_list_alpha.md#w) |
| lsdev | infos générales sur _hardware_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| lstopo | architecture CPU (coeurs, RAM cache, ...) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) - [Mémoire](linux_cmds_list_cat.md#cat22) |  |
| melt | édition vidéo | [Multimédia](linux_cmds_list_cat.md#cat24) | [ffmpeg](linux_cmds_list_alpha.md#f) |
| ncdu | `du` en mieux | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [du](linux_cmds_list_alpha.md#d) |
| nmap | exploration réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| nmcli | pilote CLI des connexions réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| nmon | _dashboard_ système | [Monitoring système](linux_cmds_list_cat.md#cat21) | [htop](linux_cmds_list_alpha.md#h) |
| notify-send | Envoi de notification au bureau | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| pango-list | liste des polices de caractères installées | [Divers](linux_cmds_list_cat.md#cat7) | [fc-list](linux_cmds_list_alpha.md#f) |
| pango-view | _convert text to image_ | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| pv | _Pipe Viewer_ (monitoring de _pipe_ ou de copie) | [Divers](linux_cmds_list_cat.md#cat7) |  |
| pwgen | génération de _password_ | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) - [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| qrencode | génération de qrcodes | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| ripgrep | (rg) grep récursif | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [grep](linux_cmds_list_alpha.md#g) |
| sensors | données capteurs (température, tension, etc.) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| smartctl | accès aux données [SMART](https://fr.wikipedia.org/wiki/Self-Monitoring,_Analysis_and_Reporting_Technology) des disques | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| sox | couteau suisse audio | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| soxi | détails sur fichier audio | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| spd-say | synthétiseur vocal | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| stress | génération de charge CPU | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| sysdig | _Cloud-Native Application Protection Platform_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) - [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [falco](linux_cmds_list_alpha.md#f) |
| tldr | `man` en mieux | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| toilet | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [banner](linux_cmds_list_alpha.md#b) |
| traceroute | affiche les étapes d'une requete réseau | [Réseau](linux_cmds_list_cat.md#cat3) | [mtr](linux_cmds_list_alpha.md#m) |
| updatedb | mise à jour BDD `locate` | [Général](linux_cmds_list_cat.md#cat4) | [locate](linux_cmds_list_alpha.md#l) |
| uuid | génération de _Universally Unique IDentifier_ | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| whois | infos/domaine | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| wl-paste | copie presse-papier (Wayland) | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| xclip | transfert vers le presse-papier X | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| xev | affichage évènements clavier+souris | [Interface avec bureau](linux_cmds_list_cat.md#cat18) | [showkey,evtest](linux_cmds_list_alpha.md#s) |
| xinput | _utility to configure and test X input devices_ | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| yt-dlp | téléchargement vidéos | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| yum | gestion paquets RedHat | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| zenity | génération de dialogues GUI via CLI | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |



_MAJ: 2026-05-09T15:12:41+0000_,
