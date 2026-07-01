# Linux Shell: liste de commandes par type

[Liste alphabétique](linux_cmds_list_alpha.md) - [Liste par catégorie](linux_cmds_list_cat.md)

<a name='top'></a>

## Commandes "_builtin_"

| Nom | Description | Catégorie | Voir aussi |
|-----|-------------|-----------|------------|
| [alias](man/help_alias.md) | composition de commandes | [Général](linux_cmds_list_cat.md#cat4) | [unalias](linux_cmds_list_alpha.md#u) |
| [bg](man/help_bg.md) | passage d'un _job_ en arrière plan (_BackGround_) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [fg](linux_cmds_list_alpha.md#f) |
| [break](man/help_break.md) | sortie de boucle "for" | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [for](linux_cmds_list_alpha.md#f) |
| [case](man/help_case.md) |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [cd](man/help_cd.md) | _Change Directory_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [pushd](linux_cmds_list_alpha.md#p) |
| [echo](man/man_echo.md) | affichage de texte/variable | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [printf](linux_cmds_list_alpha.md#p) |
| [eval](man/help_eval.md) | exécute la commande passée en argument | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [exit](man/help_exit.md) | Terminaison du script et renvoi  d'une valeur à l'OS | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [return](linux_cmds_list_alpha.md#r) |
| [export](man/help_export.md) | exportation de variable dans un sous-shell | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [fg](man/help_fg.md) | passage d'un _job_ au premier plan (_ForeGround_) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [bg](linux_cmds_list_alpha.md#b) |
| [for](man/help_for.md) |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [function](man/help_function.md) | définition d'une fonction Bash | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [help](man/help_help.md) | liste commandes "_builtin_" et aide | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| [history](man/man_history.md) | historique des commandes | [Général](linux_cmds_list_cat.md#cat4) |  |
| [if](man/help_if.md) |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [jobs](man/help_jobs.md) | affichage des _jobs_ lancés | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) |  |
| [kill](man/man_kill.md) | stoppe un process par PID (envoi d'un signal POSIX) | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [pkill](linux_cmds_list_alpha.md#p) |
| [popd](man/help_popd.md) | récupération dossier courant | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [pushd](linux_cmds_list_alpha.md#p) |
| [printf](man/man_printf.md) | affichage de texte/variable formatté | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [echo](linux_cmds_list_alpha.md#e) |
| [pushd](man/help_pushd.md) | chgt dossier courant avec sauvegarde | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [popd](linux_cmds_list_alpha.md#p) |
| [pwd](man/man_pwd.md) | _print working directory_ | [Général](linux_cmds_list_cat.md#cat4) |  |
| [read](man/help_read.md) | saisie ligne (clavier ou fichier) | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [return](man/help_return.md) | fin de fonction | [Controle des scripts](linux_cmds_list_cat.md#cat16) | [exit,function](linux_cmds_list_alpha.md#e) |
| [set](man/man_set.md) | paramétrage du shell | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [shift](man/help_shift.md) | décalage paramètres positionnels ($1, $2, ...) | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [source](man/help_source.md) | exécution d'un script dans le même shell | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [time](man/man_time.md) | chronométrage de tâche | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [trap](man/help_trap.md) | interception de signal POSIX | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [type](man/help_type.md) | indique si une commande est interne (_builtin_) ou externe | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [umask](man/help_umask.md) | permissions par défaut | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [chmod](linux_cmds_list_alpha.md#c) |
| [unalias](man/help_unalias.md) | suppression d'un alias | [Général](linux_cmds_list_cat.md#cat4) | [alias](linux_cmds_list_alpha.md#a) |
| [while](man/help_while.md) |  | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |

## Commandes "_installed_"

| Nom | Description | Catégorie | Voir aussi |
|-----|-------------|-----------|------------|
| [7z](man/man_7z.md) | compression/décompression | [Compression](linux_cmds_list_cat.md#cat19) |  |
| [ab](man/man_ab.md) | _Apache's server benchmarking tool_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) | [hey](linux_cmds_list_alpha.md#h) |
| [addgroup](man/man_addgroup.md) | création groupe d'utilisateurs | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [adduser](linux_cmds_list_alpha.md#a) |
| [adduser](man/man_adduser.md) | création utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| [apropos](man/man_apropos.md) | recherche dans les pages de manuel | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| [apt](man/man_apt.md) | gestion paquets Debian | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [apt-get](man/man_apt-get.md) | gestion paquets Debian (bas niveau) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [arch](man/man_arch.md) | architecture processeur | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [uname](linux_cmds_list_alpha.md#u) |
| [awk](man/man_awk.md) | _pattern scanning and processing language_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [base64](man/man_base64.md) | encodage/décodage <a href="https://fr.wikipedia.org/wiki/Base64">base64</a> | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| [basename](man/man_basename.md) | extraction nom à partir d'un chemin | [Controle des scripts](linux_cmds_list_cat.md#cat16) |  |
| [bc](man/man_bc.md) | calculatrice CLI | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [blkid](man/man_blkid.md) | accès aux détails des _devices_ de type "bloc" | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [lsblk](linux_cmds_list_alpha.md#l) |
| [bzip2](man/man_bzip2.md) | compression | [Compression](linux_cmds_list_cat.md#cat19) |  |
| [cat](man/man_cat.md) | affiche et/ou concatene un/des fichiers | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| [chage](man/man_chage.md) | _change user password expiry information_ | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [passwd](linux_cmds_list_alpha.md#p) |
| [chgrp](man/man_chgrp.md) | chgt groupe propriétaire fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [chown](linux_cmds_list_alpha.md#c) |
| [chmod](man/man_chmod.md) | chgt permissions fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) |  |
| [chown](man/man_chown.md) | chgt propriétaire fichier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [chgrp](linux_cmds_list_alpha.md#c) |
| [chrt](man/man_chrt.md) | manipulation attributs d'un process | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) |  |
| [clear](man/man_clear.md) | effacement terminal | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [cmake](man/man_cmake.md) | outil de _build_ multi OS | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [cmp](man/man_cmp.md) | comparaison de fichiers, par octet | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [diff](linux_cmds_list_alpha.md#d) |
| [column](man/man_column.md) | transformation texte en colonnes | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [comm](man/man_comm.md) | comparaison de fichiers, par ligne | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [diff](linux_cmds_list_alpha.md#d) |
| [cp](man/man_cp.md) | copie fichier(s) | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [mv](linux_cmds_list_alpha.md#m) |
| [cpio](man/man_cpio.md) | manipulation d'archive | [Compression](linux_cmds_list_cat.md#cat19) |  |
| [cpupower](man/man_cpupower.md) | accès/édition paramètres de puissance CPU | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| [cron](man/man_cron.md) | planification de tâches | [Divers](linux_cmds_list_cat.md#cat7) | [at](linux_cmds_list_alpha.md#a) |
| [curl](man/man_curl.md) | client multiprotocoles (wget en mieux) | [Réseau](linux_cmds_list_cat.md#cat3) | [wget](linux_cmds_list_alpha.md#w) |
| [cut](man/man_cut.md) | suppression de texte dans des lignes | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [date](man/man_date.md) | affiche date & heure | [Divers](linux_cmds_list_cat.md#cat7) | [cal](linux_cmds_list_alpha.md#c) |
| [dd](man/man_dd.md) | utilitaire de copie bas niveau | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| [depmod](man/man_depmod.md) | _generates modules.dep and map files_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [df](man/man_df.md) | _disk free_ | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| [diff](man/man_diff.md) | différences entre 2 fichiers, ligne par ligne | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [cmp](linux_cmds_list_alpha.md#c) |
| [dig](man/man_dig.md) | requete DNS | [Réseau](linux_cmds_list_cat.md#cat3) | [nslookup](linux_cmds_list_alpha.md#n) |
| [dir](man/man_dir.md) | alias de ls | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [ls](linux_cmds_list_alpha.md#l) |
| [dmesg](man/man_dmesg.md) | affichage logs kernel (buffer circulaire) | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [dmidecode](man/man_dmidecode.md) | interface sur le BIOS | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [acpi](linux_cmds_list_alpha.md#a) |
| [dpkg](man/man_dpkg.md) | utilitaire paquets Debian (.deb) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [du](man/man_du.md) | _disk usage_ | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [ncdu](linux_cmds_list_alpha.md#n) |
| [env](man/man_env.md) | exécution d'un programme en modifiant l'environnement | [Divers](linux_cmds_list_cat.md#cat7) | [printenv](linux_cmds_list_alpha.md#p) |
| [fc-list](man/man_fc-list.md) | _list available fonts_ | [Divers](linux_cmds_list_cat.md#cat7) | [pango-list](linux_cmds_list_alpha.md#p) |
| [fdisk](man/man_fdisk.md) | _manipulate disk partition table_ | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| [file](man/man_file.md) | nature d'un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| [find](man/man_find.md) | _search for files, folders,_ ... | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) |  |
| [findmnt](man/man_findmnt.md) | _find a filesystem_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| [fmt](man/man_fmt.md) | text formatter | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [fold](man/man_fold.md) | ajustement longueur de ligne | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [free](man/man_free.md) | état RAM utilisée/libre | [Mémoire](linux_cmds_list_cat.md#cat22) | [vmstat](linux_cmds_list_alpha.md#v) |
| [fsck](man/man_fsck.md) | Vérification et correction système de fichier | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| [ftp](man/man_ftp.md) | transfert de fichiers | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [g++](man/man_g++.md) | compilation C++ | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [gcc](man/man_gcc.md) | compilation C | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [getfacl](man/man_getfacl.md) | affichage des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [setfacl](linux_cmds_list_alpha.md#s) |
| [git](man/man_git.md) | **LE** gestionnaire de versions de fichiers source | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [grep](man/man_grep.md) | recherche de chaîne | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [ripgrep](linux_cmds_list_alpha.md#r) |
| [groupadd](man/man_groupadd.md) | création groupe (bas niveau!) | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [addgroup](linux_cmds_list_alpha.md#a) |
| [groupmod](man/man_groupmod.md) | modification d'un groupe d'utilisateurs | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| [groups](man/man_groups.md) | affiche les groupes existants | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [id](linux_cmds_list_alpha.md#i) |
| [gunzip](man/man_gunzip.md) | decompression zip | [Compression](linux_cmds_list_cat.md#cat19) | [gzip](linux_cmds_list_alpha.md#g) |
| [gzip](man/man_gzip.md) | compression zip | [Compression](linux_cmds_list_cat.md#cat19) | [zip,gunzip](linux_cmds_list_alpha.md#z) |
| [halt](man/man_halt.md) |  | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [shutdown,reboot](linux_cmds_list_alpha.md#s) |
| [hdparm](man/man_hdparm.md) | accès/édition paramètres des disques | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| [head](man/man_head.md) | premières lignes texte | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [tail](linux_cmds_list_alpha.md#t) |
| [host](man/man_host.md) | requete DNS | [Réseau](linux_cmds_list_cat.md#cat3) | [dig](linux_cmds_list_alpha.md#d) |
| [hostname](man/man_hostname.md) | nom de la machine | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [htop](man/man_htop.md) | top en mieux | [Monitoring système](linux_cmds_list_cat.md#cat21) | [top,nmon](linux_cmds_list_alpha.md#t) |
| [id](man/man_id.md) | affiche les infos sur un utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [whoami](linux_cmds_list_alpha.md#w) |
| [info](man/man_info.md) | aide sur commande | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| [insmod](man/man_insmod.md) | _insert a module into the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [ip](man/man_ip.md) |  | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [journalctl](man/man_journalctl.md) | outil d'accès aux logs systemd | [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [systemctl](linux_cmds_list_alpha.md#s) |
| [jq](man/man_jq.md) | traitement de chaines JSON | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [jo](linux_cmds_list_alpha.md#j) |
| [killall](man/man_killall.md) | stoppe tous les process par nom | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) |  |
| [last](man/man_last.md) | historique des logins & boots | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| [ld](man/man_ld.md) | _linker_ de binaires | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [ldconfig](man/man_ldconfig.md) | _configure dynamic linker run-time bindings_ | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [less](man/man_less.md) | filtre d'affichage | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [more](linux_cmds_list_alpha.md#m) |
| [ln](man/man_ln.md) | création de lien, symbolique ou _hardlink_ | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| [logger](man/man_logger.md) | écriture dans un log système | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| [loginctl](man/man_loginctl.md) | _Control the systemd login manager_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [systemctl](linux_cmds_list_alpha.md#s) |
| [look](man/man_look.md) | _display lines beginning with a given string_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [losetup](man/man_losetup.md) | _set up and control loop devices_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [lsblk](linux_cmds_list_alpha.md#l) |
| [ls](man/man_ls.md) | _list directory content_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) |  |
| [lsb_release](man/man_lsb_release.md) | version distribution | [Général](linux_cmds_list_cat.md#cat4) | [uname](linux_cmds_list_alpha.md#u) |
| [lsblk](man/man_lsblk.md) | liste périphs stockage "bloc" | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [blkid](linux_cmds_list_alpha.md#b) |
| [lscpu](man/man_lscpu.md) | détails sur archi CPU | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| [lshw](man/man_lshw.md) | _list hardware_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| [lsmod](man/man_lsmod.md) | _show the status of modules in the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [lsof](man/man_lsof.md) | _list open files_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [ss](linux_cmds_list_alpha.md#s) |
| [lspci](man/man_lspci.md) | _list all PCI devices_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| [lsusb](man/man_lsusb.md) | liste périphs USB | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| [make](man/man_make.md) | construction d'une cible en fonction des dépendances | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [man](man/man_man.md) | manuel | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [help](linux_cmds_list_alpha.md#h) |
| [md5sum](man/man_md5sum.md) | calcul de hash MD5 | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| [mkdir](man/man_mkdir.md) | _make directory_ | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) |  |
| [mktemp](man/man_mktemp.md) | création fichier out dossier temporaire, dans `/tmp` | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) |  |
| [modinfo](man/man_modinfo.md) | _show information about a module_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [modprobe](man/man_modprobe.md) | _add and remove modules from the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [more](man/man_more.md) | filtre d'affichage | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [less](linux_cmds_list_alpha.md#l) |
| [mount](man/man_mount.md) | montage de partitions | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [umount](linux_cmds_list_alpha.md#u) |
| [mtr](man/man_mtr.md) | affiche les étapes d'une requete réseau | [Réseau](linux_cmds_list_cat.md#cat3) | [traceroute](linux_cmds_list_alpha.md#t) |
| [mv](man/man_mv.md) | déplacement/renommage | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [cp](linux_cmds_list_alpha.md#c) |
| [nano](man/man_nano.md) | éditeur en mode "console" | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [nc](man/man_nc.md) | alias pour netcat | [Réseau](linux_cmds_list_cat.md#cat3) | [netcat](linux_cmds_list_alpha.md#n) |
| [netcat](man/man_netcat.md) | utilitaire TCP/UDP | [Réseau](linux_cmds_list_cat.md#cat3) | [nc](linux_cmds_list_alpha.md#n) |
| [netstat](man/man_netstat.md) | infos/reseau, routage, etc. | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| npm ([G](https://www.google.fr/search?q=linux+npm)) | gestionnaire de paquets Javascript | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [nslookup](man/man_nslookup.md) | requete DNS (_deprecated_) | [Réseau](linux_cmds_list_cat.md#cat3) | [dig](linux_cmds_list_alpha.md#d) |
| [od](man/man_od.md) | visualisation en hexa ou octal | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [xxd](linux_cmds_list_alpha.md#x) |
| [passwd](man/man_passwd.md) | changement pwd | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [chage](linux_cmds_list_alpha.md#c) |
| [paste](man/man_paste.md) | fusion de lignes de texte de plusieurs fichiers | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [pidof](man/man_pidof.md) |  donne le PID d'un process | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [ps](linux_cmds_list_alpha.md#p) |
| [ping](man/man_ping.md) | envoi de trames ICMP | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [pip](man/man_pip.md) | gestionnaire de paquets Python (2 ou 3) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [pip3](man/man_pip3.md) | gestionnaire de paquets Python3 | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [pkg-config](man/man_pkg-config.md) | outil de paramétrage de compilation, renvoie les infos sur librairies installées | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [pkill](man/man_pkill.md) | stoppe un process par nom | [Gestion des jobs & process](linux_cmds_list_cat.md#cat12) | [kill](linux_cmds_list_alpha.md#k) |
| [printenv](man/man_printenv.md) | liste var. environnement | [Divers](linux_cmds_list_cat.md#cat7) | [env](linux_cmds_list_alpha.md#e) |
| [ps](man/man_ps.md) | snapshot des process | [Monitoring système](linux_cmds_list_cat.md#cat21) | [top-pstree](linux_cmds_list_alpha.md#t) |
| [pstree](man/man_pstree.md) | arborescence des process | [Monitoring système](linux_cmds_list_cat.md#cat21) | [ps](linux_cmds_list_alpha.md#p) |
| [reboot](man/man_reboot.md) | reboot | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [shutdown,halt](linux_cmds_list_alpha.md#s) |
| [rev](man/man_rev.md) | inversion de texte | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [rm](man/man_rm.md) | suppression fichier | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) | [rmdir](linux_cmds_list_alpha.md#r) |
| [rmdir](man/man_rmdir.md) | supression dossier | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [rm](linux_cmds_list_alpha.md#r) |
| [rmmod](man/man_rmmod.md) | _remove a module from the kernel_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [route](man/man_route.md) | affiche ou édite la table de routage | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [rpm](man/man_rpm.md) | gestion paquets Fedora | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [rsync](man/man_rsync.md) | copie et synchronisation de fichiers entre machines | [Réseau](linux_cmds_list_cat.md#cat3) - [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| [scp](man/man_scp.md) | tranfert de fichiers entre machines | [Réseau](linux_cmds_list_cat.md#cat3) - [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| [screen](man/man_screen.md) | multiplexeur de terminal | [Divers](linux_cmds_list_cat.md#cat7) | [tmux](linux_cmds_list_alpha.md#t) |
| [sed](man/man_sed.md) |  _Stream EDitor_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [seq](man/man_seq.md) | _print a sequence of numbers_ | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [setfacl](man/man_setfacl.md) | modification des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) de fichiers/dossier | [Fichiers & permissions](linux_cmds_list_cat.md#cat5) | [getfacl](linux_cmds_list_alpha.md#g) |
| [sha256sum](man/man_sha256sum.md) | calcul de hash SHA256 | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| [shasum](man/man_shasum.md) | calcul de hash SHA (256,512,...) | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [sha256sum](linux_cmds_list_alpha.md#s) |
| [showkey](man/man_showkey.md) | affichage codes claviers en temps réel | [Interface avec bureau](linux_cmds_list_cat.md#cat18) | [xev](linux_cmds_list_alpha.md#x) |
| [shred](man/man_shred.md) | effacement en profondeur de fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| [shuf](man/man_shuf.md) | permutation aléatoire de lignes | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [sort](linux_cmds_list_alpha.md#s) |
| [shutdown](man/man_shutdown.md) | Comme son nom l'indique... | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [reboot,halt](linux_cmds_list_alpha.md#r) |
| [sleep](man/man_sleep.md) | attente | [Divers](linux_cmds_list_cat.md#cat7) | [time,at](linux_cmds_list_alpha.md#t) |
| [snap](man/man_snap.md) | utilitaire de controle des "snap" (Ubuntu) | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| [sort](man/man_sort.md) | tri de texte | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [split](man/man_split.md) | Découpage d'un fichier en plusieurs morceaux | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [ss](man/man_ss.md) | _socket statistics_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [lsof](linux_cmds_list_alpha.md#l) |
| [ssh](man/man_ssh.md) | Connection à une machine distante | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [ssh-add](man/man_ssh-add.md) |  | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [ssh-copy-id](man/man_ssh-copy-id.md) |  | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [ssh-keygen](man/man_ssh-keygen.md) | Génération de clés SSH | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [stat](man/man_stat.md) | détails complets sur un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| [strace](man/man_strace.md) | _trace system calls and signals_ | [Gestion Kernel](linux_cmds_list_cat.md#cat13) - [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| [strings](man/man_strings.md) | extraction de chaines dans des binaires | [Dev](linux_cmds_list_cat.md#cat6) |  |
| [su](man/man_su.md) | changement temporaire de _user_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [sudo](linux_cmds_list_alpha.md#s) |
| [sudo](man/man_sudo.md) | exécution d'une commande admin | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [su](linux_cmds_list_alpha.md#s) |
| [swapoff](man/man_swapoff.md) | gestion mémoire _swap_ | [Mémoire](linux_cmds_list_cat.md#cat22) | [swapon](linux_cmds_list_alpha.md#s) |
| [swapon](man/man_swapon.md) | gestion mémoire _swap_ | [Mémoire](linux_cmds_list_cat.md#cat22) | [swapoff](linux_cmds_list_alpha.md#s) |
| [systemctl](man/man_systemctl.md) | gestion des services (CLI/systemd) | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |
| [tac](man/man_tac.md) | affichage fichier à l'envers | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [cat](linux_cmds_list_alpha.md#c) |
| [tail](man/man_tail.md) | dernières lignes texte | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [head](linux_cmds_list_alpha.md#h) |
| [tar](man/man_tar.md) | utilitaire archivage | [Compression](linux_cmds_list_cat.md#cat19) | [zip](linux_cmds_list_alpha.md#z) |
| [tcpdump](man/man_tcpdump.md) | capture trames réseau (Wireshark en CLI) | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| [tee](man/man_tee.md) | modif redirection (stdout, stderr) | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [tmux](man/man_tmux.md) | multiplexeur de terminal | [Divers](linux_cmds_list_cat.md#cat7) | [screen](linux_cmds_list_alpha.md#s) |
| [top](man/man_top.md) | _dashboard_ système & process | [Monitoring système](linux_cmds_list_cat.md#cat21) | [htop](linux_cmds_list_alpha.md#h) |
| [touch](man/man_touch.md) | création ou MAJ date d'un fichier | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) |  |
| [tr](man/man_tr.md) | _translate or delete characters_ | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [tree](man/man_tree.md) | affiche l'arborescence d'un dossier | [Manipulation dossiers](linux_cmds_list_cat.md#cat15) | [ls](linux_cmds_list_alpha.md#l) |
| [tty](man/man_tty.md) | indique le terminal courant (`/dev/pts/XX`) | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [ufw](man/man_ufw.md) |  pilote CLI de Firewall  | [Réseau](linux_cmds_list_cat.md#cat3) - [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| [umount](man/man_umount.md) | démontage de partitions | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [mount](linux_cmds_list_alpha.md#m) |
| [uname](man/man_uname.md) | version noyau | [Général](linux_cmds_list_cat.md#cat4) - [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [lsb_release](linux_cmds_list_alpha.md#l) |
| [uniq](man/man_uniq.md) | suppression lignes identiques | [Traitement données texte](linux_cmds_list_cat.md#cat8) |  |
| [unzip](man/man_unzip.md) | décompression zip | [Compression](linux_cmds_list_cat.md#cat19) | [zip](linux_cmds_list_alpha.md#z) |
| [uptime](man/man_uptime.md) | durée fonctionnement système | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [useradd](man/man_useradd.md) | création utilisateur (bas niveau!) | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [adduser](linux_cmds_list_alpha.md#a) |
| [userdel](man/man_userdel.md) | suppression compte | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| [usermod](man/man_usermod.md) | modification compte utilisateur | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) |  |
| [vmstat](man/man_vmstat.md) | état mémoire virtuelle | [Mémoire](linux_cmds_list_cat.md#cat22) | [free](linux_cmds_list_alpha.md#f) |
| [w](man/man_w.md) | qui est loggé et que fait-il? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [who](linux_cmds_list_alpha.md#w) |
| [watch](man/man_watch.md) | exécution périodique d'une commande | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [wc](man/man_wc.md) | _word count_ | [Général](linux_cmds_list_cat.md#cat4) |  |
| [wget](man/man_wget.md) | client http CLI | [Réseau](linux_cmds_list_cat.md#cat3) | [curl](linux_cmds_list_alpha.md#c) |
| [whatis](man/man_whatis.md) | que fait cette commande? | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) |  |
| [whereis](man/man_whereis.md) | indique la localisation d'une commande | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) |  |
| [which](man/man_which.md) | localisation (chemin) d'un programme | [Divers](linux_cmds_list_cat.md#cat7) | [locate](linux_cmds_list_alpha.md#l) |
| [who](man/man_who.md) | qui est loggé? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [w](linux_cmds_list_alpha.md#w) |
| [whoami](man/man_whoami.md) | qui suis-je? | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) | [id](linux_cmds_list_alpha.md#i) |
| [xargs](man/man_xargs.md) |  | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [xdg-open](man/man_xdg-open.md) | ouverture fichier avec application GUI associée au type par défaut | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| [xxd](man/man_xxd.md) | visualisation en hexa | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [od](linux_cmds_list_alpha.md#o) |
| [yes](man/man_yes.md) | _output a string repeatedly until killed_ | [Divers](linux_cmds_list_cat.md#cat7) |  |
| [zip](man/man_zip.md) | compression zip | [Compression](linux_cmds_list_cat.md#cat19) | [gzip,unzip](linux_cmds_list_alpha.md#g) |
| [zramctl](man/man_zramctl.md) | paramétrage et controle de la compression RAM | [Gestion Kernel](linux_cmds_list_cat.md#cat13) |  |

## Commandes "NI"

| Nom | Description | Catégorie | Voir aussi |
|-----|-------------|-----------|------------|
| aa-xxx ([G](https://www.google.fr/search?q=linux+aa-xxx)) | ensemble de commandes de gestion de <a href="https://apparmor.net/">`Apparmor`</a> | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| acpi ([G](https://www.google.fr/search?q=linux+acpi)) | details sur alimentation (batterie ou secteur) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [upower,dmidecode](linux_cmds_list_alpha.md#u) |
| aplay ([G](https://www.google.fr/search?q=linux+aplay)) | écoute de fichier audio | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| asciinema ([G](https://www.google.fr/search?q=linux+asciinema)) | _screencast_ console | [Multimédia](linux_cmds_list_cat.md#cat24) | [ffmpeg](linux_cmds_list_alpha.md#f) |
| at ([G](https://www.google.fr/search?q=linux+at)) | planification de tâches | [Divers](linux_cmds_list_cat.md#cat7) | [cron](linux_cmds_list_alpha.md#c) |
| auditd ([G](https://www.google.fr/search?q=linux+auditd)) | _Logging_ des actions système | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| banner ([G](https://www.google.fr/search?q=linux+banner)) | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [figlet](linux_cmds_list_alpha.md#f) |
| bat ([G](https://www.google.fr/search?q=linux+bat)) | cat en mieux | [Édition/visualisation fichiers](linux_cmds_list_cat.md#cat14) | [cat,tail](linux_cmds_list_alpha.md#c) |
| brctl ([G](https://www.google.fr/search?q=linux+brctl)) | gestion des "bridges" réseau | [Réseau](linux_cmds_list_cat.md#cat3) | [nmcli](linux_cmds_list_alpha.md#n) |
| btop ([G](https://www.google.fr/search?q=linux+btop)) |  monitoring système | [Monitoring système](linux_cmds_list_cat.md#cat21) | [htop,top](linux_cmds_list_alpha.md#h) |
| [cal](man/help_cal.md) | affichage calendrier | [Divers](linux_cmds_list_cat.md#cat7) | [date](linux_cmds_list_alpha.md#d) |
| cloc ([G](https://www.google.fr/search?q=linux+cloc)) | _Count Lines Of Code_ | [Dev](linux_cmds_list_cat.md#cat6) | [wc](linux_cmds_list_alpha.md#w) |
| convert ([G](https://www.google.fr/search?q=linux+convert)) | conversion format d'image | [Divers](linux_cmds_list_cat.md#cat7) |  |
| cowsay ([G](https://www.google.fr/search?q=linux+cowsay)) | [lien](https://en.wikipedia.org/wiki/Cattle#/media/File:Cow_(Fleckvieh_breed)_Oeschinensee_Slaunger_2009-07-07.jpg) | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| display ([G](https://www.google.fr/search?q=linux+display)) | affichage d'une image sur serveur X | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| evtest ([G](https://www.google.fr/search?q=linux+evtest)) | affichage évènements clavier+souris | [Interface avec bureau](linux_cmds_list_cat.md#cat18) | [showkey,xev](linux_cmds_list_alpha.md#s) |
| exiftool ([G](https://www.google.fr/search?q=linux+exiftool)) | manipulation métadonnées fichier image, audio, etc. | [Manipulation fichiers](linux_cmds_list_cat.md#cat11) |  |
| falco ([G](https://www.google.fr/search?q=linux+falco)) | _kernel monitoring and detection agent_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) | [sysdig](linux_cmds_list_alpha.md#s) |
| ffmpeg ([G](https://www.google.fr/search?q=linux+ffmpeg)) | édition vidéo généraliste | [Multimédia](linux_cmds_list_cat.md#cat24) | [melt](linux_cmds_list_alpha.md#m) |
| figlet ([G](https://www.google.fr/search?q=linux+figlet)) | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [toilet](linux_cmds_list_alpha.md#t) |
| gdb ([G](https://www.google.fr/search?q=linux+gdb)) | déboggage pas à pas | [Dev](linux_cmds_list_cat.md#cat6) |  |
| hey ([G](https://www.google.fr/search?q=linux+hey)) | _HTTP load generator_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) | [ab](linux_cmds_list_alpha.md#a) |
| hwclock ([G](https://www.google.fr/search?q=linux+hwclock)) | accès horloge interne | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [time](linux_cmds_list_alpha.md#t) |
| ifdown ([G](https://www.google.fr/search?q=linux+ifdown)) | désactivation interface réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| iftop ([G](https://www.google.fr/search?q=linux+iftop)) | monitoring réseau | [Réseau](linux_cmds_list_cat.md#cat3) - [Monitoring système](linux_cmds_list_cat.md#cat21) |  |
| ifup ([G](https://www.google.fr/search?q=linux+ifup)) | activation interface réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| inxi ([G](https://www.google.fr/search?q=linux+inxi)) | informations système | [Monitoring système](linux_cmds_list_cat.md#cat21) | [lstopo-htop-lsdev](linux_cmds_list_alpha.md#l) |
| iotop ([G](https://www.google.fr/search?q=linux+iotop)) | liste process avec leur utilisation I/O disque | [Monitoring système](linux_cmds_list_cat.md#cat21) |  |
| [jo](man/help_jo.md) | génération de JSON | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [jq](linux_cmds_list_alpha.md#j) |
| locate ([G](https://www.google.fr/search?q=linux+locate)) | localise un programme dans le système | [Général](linux_cmds_list_cat.md#cat4) | [which](linux_cmds_list_alpha.md#w) |
| lsdev ([G](https://www.google.fr/search?q=linux+lsdev)) | infos générales sur _hardware_ | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| lstopo ([G](https://www.google.fr/search?q=linux+lstopo)) | architecture CPU (coeurs, RAM cache, ...) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) - [Mémoire](linux_cmds_list_cat.md#cat22) |  |
| melt ([G](https://www.google.fr/search?q=linux+melt)) | édition vidéo | [Multimédia](linux_cmds_list_cat.md#cat24) | [ffmpeg](linux_cmds_list_alpha.md#f) |
| ncdu ([G](https://www.google.fr/search?q=linux+ncdu)) | `du` en mieux | [Disque & stockage](linux_cmds_list_cat.md#cat2) | [du](linux_cmds_list_alpha.md#d) |
| nmap ([G](https://www.google.fr/search?q=linux+nmap)) | exploration réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| nmcli ([G](https://www.google.fr/search?q=linux+nmcli)) | pilote CLI des connexions réseau | [Réseau](linux_cmds_list_cat.md#cat3) |  |
| nmon ([G](https://www.google.fr/search?q=linux+nmon)) | _dashboard_ système | [Monitoring système](linux_cmds_list_cat.md#cat21) | [htop](linux_cmds_list_alpha.md#h) |
| notify-send ([G](https://www.google.fr/search?q=linux+notify-send)) | Envoi de notification au bureau | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| pango-list ([G](https://www.google.fr/search?q=linux+pango-list)) | liste des polices de caractères installées | [Divers](linux_cmds_list_cat.md#cat7) | [fc-list](linux_cmds_list_alpha.md#f) |
| pango-view ([G](https://www.google.fr/search?q=linux+pango-view)) | _convert text to image_ | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| pv ([G](https://www.google.fr/search?q=linux+pv)) | _Pipe Viewer_ (monitoring de _pipe_ ou de copie) | [Divers](linux_cmds_list_cat.md#cat7) |  |
| pwgen ([G](https://www.google.fr/search?q=linux+pwgen)) | génération de _password_ | [Gestion utilisateurs](linux_cmds_list_cat.md#cat9) - [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| qrencode ([G](https://www.google.fr/search?q=linux+qrencode)) | génération de qrcodes | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| rdap ([G](https://www.google.fr/search?q=linux+rdap)) | infos/domaine | [Réseau](linux_cmds_list_cat.md#cat3) | [whois](linux_cmds_list_alpha.md#w) |
| ripgrep ([G](https://www.google.fr/search?q=linux+ripgrep)) | (rg) grep récursif | [Traitement données texte](linux_cmds_list_cat.md#cat8) | [grep](linux_cmds_list_alpha.md#g) |
| sensors ([G](https://www.google.fr/search?q=linux+sensors)) | données capteurs (température, tension, etc.) | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) |  |
| smartctl ([G](https://www.google.fr/search?q=linux+smartctl)) | accès aux données [SMART](https://fr.wikipedia.org/wiki/Self-Monitoring,_Analysis_and_Reporting_Technology) des disques | [Disque & stockage](linux_cmds_list_cat.md#cat2) |  |
| sox ([G](https://www.google.fr/search?q=linux+sox)) | couteau suisse audio | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| soxi ([G](https://www.google.fr/search?q=linux+soxi)) | détails sur fichier audio | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| spd-say ([G](https://www.google.fr/search?q=linux+spd-say)) | synthétiseur vocal | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| stress ([G](https://www.google.fr/search?q=linux+stress)) | génération de charge CPU | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) |  |
| sysdig ([G](https://www.google.fr/search?q=linux+sysdig)) | _Cloud-Native Application Protection Platform_ | [Sécurité & Performance](linux_cmds_list_cat.md#cat17) - [Gestion Kernel](linux_cmds_list_cat.md#cat13) | [falco](linux_cmds_list_alpha.md#f) |
| tldr ([G](https://www.google.fr/search?q=linux+tldr)) | `man` en mieux | [Référence & aide des commandes](linux_cmds_list_cat.md#cat23) | [man](linux_cmds_list_alpha.md#m) |
| toilet ([G](https://www.google.fr/search?q=linux+toilet)) | affichage bannière | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) | [banner](linux_cmds_list_alpha.md#b) |
| traceroute ([G](https://www.google.fr/search?q=linux+traceroute)) | affiche les étapes d'une requete réseau | [Réseau](linux_cmds_list_cat.md#cat3) | [mtr](linux_cmds_list_alpha.md#m) |
| updatedb ([G](https://www.google.fr/search?q=linux+updatedb)) | mise à jour BDD `locate` | [Général](linux_cmds_list_cat.md#cat4) | [locate](linux_cmds_list_alpha.md#l) |
| upower ([G](https://www.google.fr/search?q=linux+upower)) | client du _daemon_ `upowerd`, gerant l'alimentation | [Système & _Hardware_](linux_cmds_list_cat.md#cat1) | [acpi](linux_cmds_list_alpha.md#a) |
| uuid ([G](https://www.google.fr/search?q=linux+uuid)) | génération de _Universally Unique IDentifier_ | [Encodage/décodage & générateurs](linux_cmds_list_cat.md#cat20) |  |
| whois ([G](https://www.google.fr/search?q=linux+whois)) | infos/domaine (obsolete) | [Réseau](linux_cmds_list_cat.md#cat3) | [rdap](linux_cmds_list_alpha.md#r) |
| wl-paste ([G](https://www.google.fr/search?q=linux+wl-paste)) | copie presse-papier (Wayland) | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| xclip ([G](https://www.google.fr/search?q=linux+xclip)) | transfert vers le presse-papier X | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| xev ([G](https://www.google.fr/search?q=linux+xev)) | affichage évènements clavier+souris | [Interface avec bureau](linux_cmds_list_cat.md#cat18) | [showkey,evtest](linux_cmds_list_alpha.md#s) |
| xinput ([G](https://www.google.fr/search?q=linux+xinput)) | _utility to configure and test X input devices_ | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |
| yt-dlp ([G](https://www.google.fr/search?q=linux+yt-dlp)) | téléchargement vidéos | [Multimédia](linux_cmds_list_cat.md#cat24) |  |
| yum ([G](https://www.google.fr/search?q=linux+yum)) | gestion paquets RedHat | [Installation logiciels](linux_cmds_list_cat.md#cat10) |  |
| zenity ([G](https://www.google.fr/search?q=linux+zenity)) | génération de dialogues GUI via CLI | [Interface avec bureau](linux_cmds_list_cat.md#cat18) |  |



_MAJ: 2026-07-01T09:53:32+0000_,
_OS: Ubuntu - 24.04.4 LTS (Noble Numbat)_
