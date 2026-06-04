# Linux Shell: liste de commandes par catégorie

[Liste alphabétique](linux_cmds_list_alpha.md)

<a name='top'></a>

Catégories:  
* 1 - [Général](#cat4)
* 2 - [Édition/visualisation fichiers](#cat14)
* 3 - [Disque & stockage](#cat2)
* 4 - [Manipulation fichiers](#cat11)
* 5 - [Manipulation dossiers](#cat15)
* 6 - [Réseau](#cat3)
* 7 - [Fichiers & permissions](#cat5)
* 8 - [Système & _Hardware_](#cat1)
* 9 - [Mémoire](#cat22)
* 10 - [Dev](#cat6)
* 11 - [Traitement données texte](#cat8)
* 12 - [Gestion utilisateurs](#cat9)
* 13 - [Installation logiciels](#cat10)
* 14 - [Divers](#cat7)
* 15 - [Gestion des jobs & process](#cat12)
* 16 - [Controle des scripts](#cat16)
* 17 - [Gestion Kernel](#cat13)
* 18 - [Sécurité & Performance](#cat17)
* 19 - [Interface avec bureau](#cat18)
* 20 - [Compression](#cat19)
* 21 - [Encodage/décodage & générateurs](#cat20)
* 22 - [Monitoring système](#cat21)
* 23 - [Mémoire](#cat22)
* 24 - [Référence & aide des commandes](#cat23)
* 25 - [Multimédia](#cat24)

Total: 299 commandes

**Statut**: 
- _builtin_: commande intégrée au Shell
- _installed_: programme installé et disponible dans l'OS local (VM Github)
- NI (_Not Installed_): programme non installé

**Note**: certaines commandes apparaissent dans plusieurs catégories


## 1 - catégorie: Général
<a name='cat4'></a>

9 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [alias](man/help_alias.md) | composition de commandes | [unalias](linux_cmds_list_alpha.md#u) | _builtin_ |
| [history](man/man_history.md) | historique des commandes |  | _builtin_ |
| locate ([G](https://www.google.fr/search?q=linux+locate)) | localise un programme dans le système | [which](linux_cmds_list_alpha.md#w) | NI |
| [lsb_release](man/man_lsb_release.md) | version distribution | [uname](linux_cmds_list_alpha.md#u) | _installed_ |
| [pwd](man/man_pwd.md) | _print working directory_ |  | _builtin_ |
| [unalias](man/help_unalias.md) | suppression d'un alias | [alias](linux_cmds_list_alpha.md#a) | _builtin_ |
| [uname](man/man_uname.md) | version noyau | [lsb_release](linux_cmds_list_alpha.md#l) | _installed_ |
| updatedb ([G](https://www.google.fr/search?q=linux+updatedb)) | mise à jour BDD `locate` | [locate](linux_cmds_list_alpha.md#l) | NI |
| [wc](man/man_wc.md) | _word count_ |  | _installed_ |

## 2 - catégorie: Édition/visualisation fichiers
<a name='cat14'></a>

13 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| bat ([G](https://www.google.fr/search?q=linux+bat)) | cat en mieux | [cat,tail](linux_cmds_list_alpha.md#c) | NI |
| [cat](man/man_cat.md) | affiche et/ou concatene un/des fichiers |  | _installed_ |
| [file](man/man_file.md) | nature d'un fichier |  | _installed_ |
| [head](man/man_head.md) | premières lignes texte | [tail](linux_cmds_list_alpha.md#t) | _installed_ |
| [less](man/man_less.md) | filtre d'affichage | [more](linux_cmds_list_alpha.md#m) | _installed_ |
| [more](man/man_more.md) | filtre d'affichage | [less](linux_cmds_list_alpha.md#l) | _installed_ |
| [od](man/man_od.md) | visualisation en hexa ou octal | [xxd](linux_cmds_list_alpha.md#x) | _installed_ |
| [shred](man/man_shred.md) | effacement en profondeur de fichier |  | _installed_ |
| [stat](man/man_stat.md) | détails complets sur un fichier |  | _installed_ |
| [tac](man/man_tac.md) | affichage fichier à l'envers | [cat](linux_cmds_list_alpha.md#c) | _installed_ |
| [tail](man/man_tail.md) | dernières lignes texte | [head](linux_cmds_list_alpha.md#h) | _installed_ |
| [touch](man/man_touch.md) | création ou MAJ date d'un fichier |  | _installed_ |
| [xxd](man/man_xxd.md) | visualisation en hexa | [od](linux_cmds_list_alpha.md#o) | _installed_ |

## 3 - catégorie: Disque & stockage
<a name='cat2'></a>

11 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [blkid](man/man_blkid.md) | accès aux détails des _devices_ de type "bloc" | [lsblk](linux_cmds_list_alpha.md#l) | _installed_ |
| [dd](man/man_dd.md) | utilitaire de copie bas niveau |  | _installed_ |
| [df](man/man_df.md) | _disk free_ |  | _installed_ |
| [du](man/man_du.md) | _disk usage_ | [ncdu](linux_cmds_list_alpha.md#n) | _installed_ |
| [fdisk](man/man_fdisk.md) | _manipulate disk partition table_ |  | _installed_ |
| [fsck](man/man_fsck.md) | Vérification et correction système de fichier |  | _installed_ |
| [hdparm](man/man_hdparm.md) | accès/édition paramètres des disques |  | _installed_ |
| [mount](man/man_mount.md) | montage de partitions | [umount](linux_cmds_list_alpha.md#u) | _installed_ |
| ncdu ([G](https://www.google.fr/search?q=linux+ncdu)) | `du` en mieux | [du](linux_cmds_list_alpha.md#d) | NI |
| smartctl ([G](https://www.google.fr/search?q=linux+smartctl)) | accès aux données [SMART](https://fr.wikipedia.org/wiki/Self-Monitoring,_Analysis_and_Reporting_Technology) des disques |  | NI |
| [umount](man/man_umount.md) | démontage de partitions | [mount](linux_cmds_list_alpha.md#m) | _installed_ |

## 4 - catégorie: Manipulation fichiers
<a name='cat11'></a>

10 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [cmp](man/man_cmp.md) | comparaison de fichiers, par octet | [diff](linux_cmds_list_alpha.md#d) | _installed_ |
| [comm](man/man_comm.md) | comparaison de fichiers, par ligne | [diff](linux_cmds_list_alpha.md#d) | _installed_ |
| [cp](man/man_cp.md) | copie fichier(s) | [mv](linux_cmds_list_alpha.md#m) | _installed_ |
| [diff](man/man_diff.md) | différences entre 2 fichiers, ligne par ligne | [cmp](linux_cmds_list_alpha.md#c) | _installed_ |
| exiftool ([G](https://www.google.fr/search?q=linux+exiftool)) | manipulation métadonnées fichier image, audio, etc. |  | NI |
| [ln](man/man_ln.md) | création de lien, symbolique ou _hardlink_ |  | _installed_ |
| [mv](man/man_mv.md) | déplacement/renommage | [cp](linux_cmds_list_alpha.md#c) | _installed_ |
| [rm](man/man_rm.md) | suppression fichier | [rmdir](linux_cmds_list_alpha.md#r) | _installed_ |
| [rsync](man/man_rsync.md) | copie et synchronisation de fichiers entre machines |  | _installed_ |
| [scp](man/man_scp.md) | tranfert de fichiers entre machines |  | _installed_ |

## 5 - catégorie: Manipulation dossiers
<a name='cat15'></a>

8 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [cd](man/help_cd.md) | _Change Directory_ | [pushd](linux_cmds_list_alpha.md#p) | _builtin_ |
| [dir](man/man_dir.md) | alias de ls | [ls](linux_cmds_list_alpha.md#l) | _installed_ |
| [ls](man/man_ls.md) | _list directory content_ |  | _installed_ |
| [mkdir](man/man_mkdir.md) | _make directory_ |  | _installed_ |
| [popd](man/help_popd.md) | récupération dossier courant | [pushd](linux_cmds_list_alpha.md#p) | _builtin_ |
| [pushd](man/help_pushd.md) | chgt dossier courant avec sauvegarde | [popd](linux_cmds_list_alpha.md#p) | _builtin_ |
| [rmdir](man/man_rmdir.md) | supression dossier | [rm](linux_cmds_list_alpha.md#r) | _installed_ |
| [tree](man/man_tree.md) | affiche l'arborescence d'un dossier | [ls](linux_cmds_list_alpha.md#l) | _installed_ |

## 6 - catégorie: Réseau
<a name='cat3'></a>

31 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| brctl ([G](https://www.google.fr/search?q=linux+brctl)) | gestion des "bridges" réseau | [nmcli](linux_cmds_list_alpha.md#n) | NI |
| [curl](man/man_curl.md) | client multiprotocoles (wget en mieux) | [wget](linux_cmds_list_alpha.md#w) | _installed_ |
| [dig](man/man_dig.md) | requete DNS | [nslookup](linux_cmds_list_alpha.md#n) | _installed_ |
| [ftp](man/man_ftp.md) | transfert de fichiers |  | _installed_ |
| [host](man/man_host.md) | requete DNS | [dig](linux_cmds_list_alpha.md#d) | _installed_ |
| [hostname](man/man_hostname.md) | nom de la machine |  | _installed_ |
| ifdown ([G](https://www.google.fr/search?q=linux+ifdown)) | désactivation interface réseau |  | NI |
| iftop ([G](https://www.google.fr/search?q=linux+iftop)) | monitoring réseau |  | NI |
| ifup ([G](https://www.google.fr/search?q=linux+ifup)) | activation interface réseau |  | NI |
| [ip](man/man_ip.md) |  |  | _installed_ |
| [mtr](man/man_mtr.md) | affiche les étapes d'une requete réseau | [traceroute](linux_cmds_list_alpha.md#t) | _installed_ |
| [nc](man/man_nc.md) | alias pour netcat | [netcat](linux_cmds_list_alpha.md#n) | _installed_ |
| [netcat](man/man_netcat.md) | utilitaire TCP/UDP | [nc](linux_cmds_list_alpha.md#n) | _installed_ |
| [netstat](man/man_netstat.md) | infos/reseau, routage, etc. |  | _installed_ |
| nmap ([G](https://www.google.fr/search?q=linux+nmap)) | exploration réseau |  | NI |
| nmcli ([G](https://www.google.fr/search?q=linux+nmcli)) | pilote CLI des connexions réseau |  | NI |
| [nslookup](man/man_nslookup.md) | requete DNS (_deprecated_) | [dig](linux_cmds_list_alpha.md#d) | _installed_ |
| [ping](man/man_ping.md) | envoi de trames ICMP |  | _installed_ |
| rdap ([G](https://www.google.fr/search?q=linux+rdap)) | infos/domaine | [whois](linux_cmds_list_alpha.md#w) | NI |
| [route](man/man_route.md) | affiche ou édite la table de routage |  | _installed_ |
| [rsync](man/man_rsync.md) | copie et synchronisation de fichiers entre machines |  | _installed_ |
| [scp](man/man_scp.md) | tranfert de fichiers entre machines |  | _installed_ |
| [ssh](man/man_ssh.md) | Connection à une machine distante |  | _installed_ |
| [ssh-add](man/man_ssh-add.md) |  |  | _installed_ |
| [ssh-copy-id](man/man_ssh-copy-id.md) |  |  | _installed_ |
| [ssh-keygen](man/man_ssh-keygen.md) | Génération de clés SSH |  | _installed_ |
| [tcpdump](man/man_tcpdump.md) | capture trames réseau (Wireshark en CLI) |  | _installed_ |
| traceroute ([G](https://www.google.fr/search?q=linux+traceroute)) | affiche les étapes d'une requete réseau | [mtr](linux_cmds_list_alpha.md#m) | NI |
| [ufw](man/man_ufw.md) |  pilote CLI de Firewall  |  | _installed_ |
| [wget](man/man_wget.md) | client http CLI | [curl](linux_cmds_list_alpha.md#c) | _installed_ |
| whois ([G](https://www.google.fr/search?q=linux+whois)) | infos/domaine (obsolete) | [rdap](linux_cmds_list_alpha.md#r) | NI |

## 7 - catégorie: Fichiers & permissions
<a name='cat5'></a>

8 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [chage](man/man_chage.md) | _change user password expiry information_ | [passwd](linux_cmds_list_alpha.md#p) | _installed_ |
| [chgrp](man/man_chgrp.md) | chgt groupe propriétaire fichier | [chown](linux_cmds_list_alpha.md#c) | _installed_ |
| [chmod](man/man_chmod.md) | chgt permissions fichier |  | _installed_ |
| [chown](man/man_chown.md) | chgt propriétaire fichier | [chgrp](linux_cmds_list_alpha.md#c) | _installed_ |
| [find](man/man_find.md) | _search for files, folders,_ ... |  | _installed_ |
| [getfacl](man/man_getfacl.md) | affichage des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) | [setfacl](linux_cmds_list_alpha.md#s) | _installed_ |
| [setfacl](man/man_setfacl.md) | modification des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) de fichiers/dossier | [getfacl](linux_cmds_list_alpha.md#g) | _installed_ |
| [umask](man/help_umask.md) | permissions par défaut | [chmod](linux_cmds_list_alpha.md#c) | _builtin_ |

## 8 - catégorie: Système & _Hardware_
<a name='cat1'></a>

20 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| acpi ([G](https://www.google.fr/search?q=linux+acpi)) | details sur alimentation (batterie ou secteur) |  | NI |
| [arch](man/man_arch.md) | architecture processeur | [uname](linux_cmds_list_alpha.md#u) | _installed_ |
| [findmnt](man/man_findmnt.md) | _find a filesystem_ |  | _installed_ |
| [halt](man/man_halt.md) |  | [shutdown,reboot](linux_cmds_list_alpha.md#s) | _installed_ |
| hwclock ([G](https://www.google.fr/search?q=linux+hwclock)) | accès horloge interne | [time](linux_cmds_list_alpha.md#t) | NI |
| [losetup](man/man_losetup.md) | _set up and control loop devices_ | [lsblk](linux_cmds_list_alpha.md#l) | _installed_ |
| [lsblk](man/man_lsblk.md) | liste périphs stockage "bloc" | [blkid](linux_cmds_list_alpha.md#b) | _installed_ |
| [lscpu](man/man_lscpu.md) | détails sur archi CPU |  | _installed_ |
| lsdev ([G](https://www.google.fr/search?q=linux+lsdev)) | infos générales sur _hardware_ |  | NI |
| [lshw](man/man_lshw.md) | _list hardware_ |  | _installed_ |
| [lsof](man/man_lsof.md) | _list open files_ | [ss](linux_cmds_list_alpha.md#s) | _installed_ |
| [lspci](man/man_lspci.md) | _list all PCI devices_ |  | _installed_ |
| lstopo ([G](https://www.google.fr/search?q=linux+lstopo)) | architecture CPU (coeurs, RAM cache, ...) |  | NI |
| [lsusb](man/man_lsusb.md) | liste périphs USB |  | _installed_ |
| [reboot](man/man_reboot.md) | reboot | [shutdown,halt](linux_cmds_list_alpha.md#s) | _installed_ |
| sensors ([G](https://www.google.fr/search?q=linux+sensors)) | données capteurs (température, tension, etc.) |  | NI |
| [shutdown](man/man_shutdown.md) | Comme son nom l'indique... | [reboot,halt](linux_cmds_list_alpha.md#r) | _installed_ |
| [ss](man/man_ss.md) | _socket statistics_ | [lsof](linux_cmds_list_alpha.md#l) | _installed_ |
| [su](man/man_su.md) | changement temporaire de _user_ | [sudo](linux_cmds_list_alpha.md#s) | _installed_ |
| [sudo](man/man_sudo.md) | exécution d'une commande admin | [su](linux_cmds_list_alpha.md#s) | _installed_ |

## 9 - catégorie: Mémoire
<a name='cat22'></a>

5 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [free](man/man_free.md) | état RAM utilisée/libre | [vmstat](linux_cmds_list_alpha.md#v) | _installed_ |
| lstopo ([G](https://www.google.fr/search?q=linux+lstopo)) | architecture CPU (coeurs, RAM cache, ...) |  | NI |
| [swapoff](man/man_swapoff.md) | gestion mémoire _swap_ | [swapon](linux_cmds_list_alpha.md#s) | _installed_ |
| [swapon](man/man_swapon.md) | gestion mémoire _swap_ | [swapoff](linux_cmds_list_alpha.md#s) | _installed_ |
| [vmstat](man/man_vmstat.md) | état mémoire virtuelle | [free](linux_cmds_list_alpha.md#f) | _installed_ |

## 10 - catégorie: Dev
<a name='cat6'></a>

11 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| cloc ([G](https://www.google.fr/search?q=linux+cloc)) | _Count Lines Of Code_ | [wc](linux_cmds_list_alpha.md#w) | NI |
| [cmake](man/man_cmake.md) | outil de _build_ multi OS |  | _installed_ |
| [g++](man/man_g++.md) | compilation C++ |  | _installed_ |
| [gcc](man/man_gcc.md) | compilation C |  | _installed_ |
| gdb ([G](https://www.google.fr/search?q=linux+gdb)) | déboggage pas à pas |  | NI |
| [git](man/man_git.md) | **LE** gestionnaire de versions de fichiers source |  | _installed_ |
| [ld](man/man_ld.md) | _linker_ de binaires |  | _installed_ |
| [ldconfig](man/man_ldconfig.md) | _configure dynamic linker run-time bindings_ |  | _installed_ |
| [make](man/man_make.md) | construction d'une cible en fonction des dépendances |  | _installed_ |
| [pkg-config](man/man_pkg-config.md) | outil de paramétrage de compilation, renvoie les infos sur librairies installées |  | _installed_ |
| [strings](man/man_strings.md) | extraction de chaines dans des binaires |  | _installed_ |

## 11 - catégorie: Traitement données texte
<a name='cat8'></a>

16 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [awk](man/man_awk.md) | _pattern scanning and processing language_ |  | _installed_ |
| [column](man/man_column.md) | transformation texte en colonnes |  | _installed_ |
| [cut](man/man_cut.md) | suppression de texte dans des lignes |  | _installed_ |
| [fold](man/man_fold.md) | ajustement longueur de ligne |  | _installed_ |
| [grep](man/man_grep.md) | recherche de chaîne | [ripgrep](linux_cmds_list_alpha.md#r) | _installed_ |
| [jq](man/man_jq.md) | traitement de chaines JSON | [jo](linux_cmds_list_alpha.md#j) | _installed_ |
| [look](man/man_look.md) | _display lines beginning with a given string_ |  | _installed_ |
| [paste](man/man_paste.md) | fusion de lignes de texte de plusieurs fichiers |  | _installed_ |
| [rev](man/man_rev.md) | inversion de texte |  | _installed_ |
| ripgrep ([G](https://www.google.fr/search?q=linux+ripgrep)) | (rg) grep récursif | [grep](linux_cmds_list_alpha.md#g) | NI |
| [sed](man/man_sed.md) |  _Stream EDitor_ |  | _installed_ |
| [shuf](man/man_shuf.md) | permutation aléatoire de lignes | [sort](linux_cmds_list_alpha.md#s) | _installed_ |
| [sort](man/man_sort.md) | tri de texte |  | _installed_ |
| [split](man/man_split.md) | Découpage d'un fichier en plusieurs morceaux |  | _installed_ |
| [tr](man/man_tr.md) | _translate or delete characters_ |  | _installed_ |
| [uniq](man/man_uniq.md) | suppression lignes identiques |  | _installed_ |

## 12 - catégorie: Gestion utilisateurs
<a name='cat9'></a>

15 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [addgroup](man/man_addgroup.md) | création groupe d'utilisateurs | [adduser](linux_cmds_list_alpha.md#a) | _installed_ |
| [adduser](man/man_adduser.md) | création utilisateur |  | _installed_ |
| [groupadd](man/man_groupadd.md) | création groupe (bas niveau!) | [addgroup](linux_cmds_list_alpha.md#a) | _installed_ |
| [groupmod](man/man_groupmod.md) | modification d'un groupe d'utilisateurs |  | _installed_ |
| [groups](man/man_groups.md) | affiche les groupes existants | [id](linux_cmds_list_alpha.md#i) | _installed_ |
| [id](man/man_id.md) | affiche les infos sur un utilisateur | [whoami](linux_cmds_list_alpha.md#w) | _installed_ |
| [last](man/man_last.md) | historique des logins & boots |  | _installed_ |
| [passwd](man/man_passwd.md) | changement pwd | [chage](linux_cmds_list_alpha.md#c) | _installed_ |
| pwgen ([G](https://www.google.fr/search?q=linux+pwgen)) | génération de _password_ |  | NI |
| [useradd](man/man_useradd.md) | création utilisateur (bas niveau!) | [adduser](linux_cmds_list_alpha.md#a) | _installed_ |
| [userdel](man/man_userdel.md) | suppression compte |  | _installed_ |
| [usermod](man/man_usermod.md) | modification compte utilisateur |  | _installed_ |
| [w](man/man_w.md) | qui est loggé et que fait-il? | [who](linux_cmds_list_alpha.md#w) | _installed_ |
| [who](man/man_who.md) | qui est loggé? | [w](linux_cmds_list_alpha.md#w) | _installed_ |
| [whoami](man/man_whoami.md) | qui suis-je? | [id](linux_cmds_list_alpha.md#i) | _installed_ |

## 13 - catégorie: Installation logiciels
<a name='cat10'></a>

9 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [apt](man/man_apt.md) | gestion paquets Debian |  | _installed_ |
| [apt-get](man/man_apt-get.md) | gestion paquets Debian (bas niveau) |  | _installed_ |
| [dpkg](man/man_dpkg.md) | utilitaire paquets Debian (.deb) |  | _installed_ |
| npm ([G](https://www.google.fr/search?q=linux+npm)) | gestionnaire de paquets Javascript |  | _installed_ |
| [pip](man/man_pip.md) | gestionnaire de paquets Python (2 ou 3) |  | _installed_ |
| [pip3](man/man_pip3.md) | gestionnaire de paquets Python3 |  | _installed_ |
| [rpm](man/man_rpm.md) | gestion paquets Fedora |  | _installed_ |
| [snap](man/man_snap.md) | utilitaire de controle des "snap" (Ubuntu) |  | _installed_ |
| yum ([G](https://www.google.fr/search?q=linux+yum)) | gestion paquets RedHat |  | NI |

## 14 - catégorie: Divers
<a name='cat7'></a>

30 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| at ([G](https://www.google.fr/search?q=linux+at)) | planification de tâches | [cron](linux_cmds_list_alpha.md#c) | NI |
| [bc](man/man_bc.md) | calculatrice CLI |  | _installed_ |
| [cal](man/help_cal.md) | affichage calendrier | [date](linux_cmds_list_alpha.md#d) | NI |
| [clear](man/man_clear.md) | effacement terminal |  | _installed_ |
| convert ([G](https://www.google.fr/search?q=linux+convert)) | conversion format d'image |  | NI |
| [cron](man/man_cron.md) | planification de tâches | [at](linux_cmds_list_alpha.md#a) | _installed_ |
| [date](man/man_date.md) | affiche date & heure | [cal](linux_cmds_list_alpha.md#c) | _installed_ |
| [env](man/man_env.md) | exécution d'un programme en modifiant l'environnement | [printenv](linux_cmds_list_alpha.md#p) | _installed_ |
| [eval](man/help_eval.md) | exécute la commande passée en argument |  | _builtin_ |
| [export](man/help_export.md) | exportation de variable dans un sous-shell |  | _builtin_ |
| [fc-list](man/man_fc-list.md) | _list available fonts_ | [pango-list](linux_cmds_list_alpha.md#p) | _installed_ |
| [fmt](man/man_fmt.md) | text formatter |  | _installed_ |
| [nano](man/man_nano.md) | éditeur en mode "console" |  | _installed_ |
| pango-list ([G](https://www.google.fr/search?q=linux+pango-list)) | liste des polices de caractères installées | [fc-list](linux_cmds_list_alpha.md#f) | NI |
| [printenv](man/man_printenv.md) | liste var. environnement | [env](linux_cmds_list_alpha.md#e) | _installed_ |
| pv ([G](https://www.google.fr/search?q=linux+pv)) | _Pipe Viewer_ (monitoring de _pipe_ ou de copie) |  | NI |
| [screen](man/man_screen.md) | multiplexeur de terminal | [tmux](linux_cmds_list_alpha.md#t) | _installed_ |
| [seq](man/man_seq.md) | _print a sequence of numbers_ |  | _installed_ |
| [set](man/man_set.md) | paramétrage du shell |  | _builtin_ |
| [sleep](man/man_sleep.md) | attente | [time,at](linux_cmds_list_alpha.md#t) | _installed_ |
| [tee](man/man_tee.md) | modif redirection (stdout, stderr) |  | _installed_ |
| [time](man/man_time.md) | chronométrage de tâche |  | _builtin_ |
| [tmux](man/man_tmux.md) | multiplexeur de terminal | [screen](linux_cmds_list_alpha.md#s) | _installed_ |
| [tty](man/man_tty.md) | indique le terminal courant (`/dev/pts/XX`) |  | _installed_ |
| [type](man/help_type.md) | indique si une commande est interne (_builtin_) ou externe |  | _builtin_ |
| [uptime](man/man_uptime.md) | durée fonctionnement système |  | _installed_ |
| [watch](man/man_watch.md) | exécution périodique d'une commande |  | _installed_ |
| [which](man/man_which.md) | localisation (chemin) d'un programme | [locate](linux_cmds_list_alpha.md#l) | _installed_ |
| [xargs](man/man_xargs.md) |  |  | _installed_ |
| [yes](man/man_yes.md) | _output a string repeatedly until killed_ |  | _installed_ |

## 15 - catégorie: Gestion des jobs & process
<a name='cat12'></a>

8 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [bg](man/help_bg.md) | passage d'un _job_ en arrière plan (_BackGround_) | [fg](linux_cmds_list_alpha.md#f) | _builtin_ |
| [chrt](man/man_chrt.md) | manipulation attributs d'un process |  | _installed_ |
| [fg](man/help_fg.md) | passage d'un _job_ au premier plan (_ForeGround_) | [bg](linux_cmds_list_alpha.md#b) | _builtin_ |
| [jobs](man/help_jobs.md) | affichage des _jobs_ lancés |  | _builtin_ |
| [kill](man/man_kill.md) | stoppe un process par PID (envoi d'un signal POSIX) | [pkill](linux_cmds_list_alpha.md#p) | _builtin_ |
| [killall](man/man_killall.md) | stoppe tous les process par nom |  | _installed_ |
| [pidof](man/man_pidof.md) |  donne le PID d'un process | [ps](linux_cmds_list_alpha.md#p) | _installed_ |
| [pkill](man/man_pkill.md) | stoppe un process par nom | [kill](linux_cmds_list_alpha.md#k) | _installed_ |

## 16 - catégorie: Controle des scripts
<a name='cat16'></a>

15 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [basename](man/man_basename.md) | extraction nom à partir d'un chemin |  | _installed_ |
| [break](man/help_break.md) | sortie de boucle "for" | [for](linux_cmds_list_alpha.md#f) | _builtin_ |
| [case](man/help_case.md) |  |  | _builtin_ |
| [echo](man/man_echo.md) | affichage de texte/variable | [printf](linux_cmds_list_alpha.md#p) | _builtin_ |
| [exit](man/help_exit.md) | Terminaison du script et renvoi  d'une valeur à l'OS | [return](linux_cmds_list_alpha.md#r) | _builtin_ |
| [for](man/help_for.md) |  |  | _builtin_ |
| [function](man/help_function.md) | définition d'une fonction Bash |  | _builtin_ |
| [if](man/help_if.md) |  |  | _builtin_ |
| [printf](man/man_printf.md) | affichage de texte/variable formatté | [echo](linux_cmds_list_alpha.md#e) | _builtin_ |
| [read](man/help_read.md) | saisie ligne (clavier ou fichier) |  | _builtin_ |
| [return](man/help_return.md) | fin de fonction | [exit,function](linux_cmds_list_alpha.md#e) | _builtin_ |
| [shift](man/help_shift.md) | décalage paramètres positionnels ($1, $2, ...) |  | _builtin_ |
| [source](man/help_source.md) | exécution d'un script dans le même shell |  | _builtin_ |
| [trap](man/help_trap.md) | interception de signal POSIX |  | _builtin_ |
| [while](man/help_while.md) |  |  | _builtin_ |

## 17 - catégorie: Gestion Kernel
<a name='cat13'></a>

14 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [depmod](man/man_depmod.md) | _generates modules.dep and map files_ |  | _installed_ |
| [dmesg](man/man_dmesg.md) | affichage logs kernel (buffer circulaire) |  | _installed_ |
| [insmod](man/man_insmod.md) | _insert a module into the kernel_ |  | _installed_ |
| [journalctl](man/man_journalctl.md) | outil d'accès aux logs systemd | [systemctl](linux_cmds_list_alpha.md#s) | _installed_ |
| [loginctl](man/man_loginctl.md) | _Control the systemd login manager_ | [systemctl](linux_cmds_list_alpha.md#s) | _installed_ |
| [lsmod](man/man_lsmod.md) | _show the status of modules in the kernel_ |  | _installed_ |
| [modinfo](man/man_modinfo.md) | _show information about a module_ |  | _installed_ |
| [modprobe](man/man_modprobe.md) | _add and remove modules from the kernel_ |  | _installed_ |
| [rmmod](man/man_rmmod.md) | _remove a module from the kernel_ |  | _installed_ |
| [strace](man/man_strace.md) | _trace system calls and signals_ |  | _installed_ |
| sysdig ([G](https://www.google.fr/search?q=linux+sysdig)) | _Cloud-Native Application Protection Platform_ | [falco](linux_cmds_list_alpha.md#f) | NI |
| [systemctl](man/man_systemctl.md) | gestion des services (CLI/systemd) |  | _installed_ |
| [uname](man/man_uname.md) | version noyau | [lsb_release](linux_cmds_list_alpha.md#l) | _installed_ |
| [zramctl](man/man_zramctl.md) | paramétrage et controle de la compression RAM |  | _installed_ |

## 18 - catégorie: Sécurité & Performance
<a name='cat17'></a>

11 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| aa-xxx ([G](https://www.google.fr/search?q=linux+aa-xxx)) | ensemble de commandes de gestion de <a href="https://apparmor.net/">`Apparmor`</a> |  | NI |
| [ab](man/man_ab.md) | _Apache's server benchmarking tool_ | [hey](linux_cmds_list_alpha.md#h) | _installed_ |
| auditd ([G](https://www.google.fr/search?q=linux+auditd)) | _Logging_ des actions système |  | NI |
| [cpupower](man/man_cpupower.md) | accès/édition paramètres de puissance CPU |  | _installed_ |
| falco ([G](https://www.google.fr/search?q=linux+falco)) | _kernel monitoring and detection agent_ | [sysdig](linux_cmds_list_alpha.md#s) | NI |
| hey ([G](https://www.google.fr/search?q=linux+hey)) | _HTTP load generator_ | [ab](linux_cmds_list_alpha.md#a) | NI |
| [logger](man/man_logger.md) | écriture dans un log système |  | _installed_ |
| [strace](man/man_strace.md) | _trace system calls and signals_ |  | _installed_ |
| stress ([G](https://www.google.fr/search?q=linux+stress)) | génération de charge CPU |  | NI |
| sysdig ([G](https://www.google.fr/search?q=linux+sysdig)) | _Cloud-Native Application Protection Platform_ | [falco](linux_cmds_list_alpha.md#f) | NI |
| [ufw](man/man_ufw.md) |  pilote CLI de Firewall  |  | _installed_ |

## 19 - catégorie: Interface avec bureau
<a name='cat18'></a>

10 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| display ([G](https://www.google.fr/search?q=linux+display)) | affichage d'une image sur serveur X |  | NI |
| evtest ([G](https://www.google.fr/search?q=linux+evtest)) | affichage évènements clavier+souris | [showkey,xev](linux_cmds_list_alpha.md#s) | NI |
| notify-send ([G](https://www.google.fr/search?q=linux+notify-send)) | Envoi de notification au bureau |  | NI |
| [showkey](man/man_showkey.md) | affichage codes claviers en temps réel | [xev](linux_cmds_list_alpha.md#x) | _installed_ |
| wl-paste ([G](https://www.google.fr/search?q=linux+wl-paste)) | copie presse-papier (Wayland) |  | NI |
| xclip ([G](https://www.google.fr/search?q=linux+xclip)) | transfert vers le presse-papier X |  | NI |
| [xdg-open](man/man_xdg-open.md) | ouverture fichier avec application GUI associée au type par défaut |  | _installed_ |
| xev ([G](https://www.google.fr/search?q=linux+xev)) | affichage évènements clavier+souris | [showkey,evtest](linux_cmds_list_alpha.md#s) | NI |
| xinput ([G](https://www.google.fr/search?q=linux+xinput)) | _utility to configure and test X input devices_ |  | NI |
| zenity ([G](https://www.google.fr/search?q=linux+zenity)) | génération de dialogues GUI via CLI |  | NI |

## 20 - catégorie: Compression
<a name='cat19'></a>

8 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [7z](man/man_7z.md) | compression/décompression |  | _installed_ |
| [bzip2](man/man_bzip2.md) | compression |  | _installed_ |
| [cpio](man/man_cpio.md) | manipulation d'archive |  | _installed_ |
| [gunzip](man/man_gunzip.md) | decompression zip | [gzip](linux_cmds_list_alpha.md#g) | _installed_ |
| [gzip](man/man_gzip.md) | compression zip | [zip,gunzip](linux_cmds_list_alpha.md#z) | _installed_ |
| [tar](man/man_tar.md) | utilitaire archivage | [zip](linux_cmds_list_alpha.md#z) | _installed_ |
| [unzip](man/man_unzip.md) | décompression zip | [zip](linux_cmds_list_alpha.md#z) | _installed_ |
| [zip](man/man_zip.md) | compression zip | [gzip,unzip](linux_cmds_list_alpha.md#g) | _installed_ |

## 21 - catégorie: Encodage/décodage & générateurs
<a name='cat20'></a>

13 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| banner ([G](https://www.google.fr/search?q=linux+banner)) | affichage bannière | [figlet](linux_cmds_list_alpha.md#f) | NI |
| [base64](man/man_base64.md) | encodage/décodage <a href="https://fr.wikipedia.org/wiki/Base64">base64</a> |  | _installed_ |
| cowsay ([G](https://www.google.fr/search?q=linux+cowsay)) | [lien](https://en.wikipedia.org/wiki/Cattle#/media/File:Cow_(Fleckvieh_breed)_Oeschinensee_Slaunger_2009-07-07.jpg) |  | NI |
| figlet ([G](https://www.google.fr/search?q=linux+figlet)) | affichage bannière | [toilet](linux_cmds_list_alpha.md#t) | NI |
| [jo](man/help_jo.md) | génération de JSON | [jq](linux_cmds_list_alpha.md#j) | NI |
| [md5sum](man/man_md5sum.md) | calcul de hash MD5 |  | _installed_ |
| pango-view ([G](https://www.google.fr/search?q=linux+pango-view)) | _convert text to image_ |  | NI |
| pwgen ([G](https://www.google.fr/search?q=linux+pwgen)) | génération de _password_ |  | NI |
| qrencode ([G](https://www.google.fr/search?q=linux+qrencode)) | génération de qrcodes |  | NI |
| [sha256sum](man/man_sha256sum.md) | calcul de hash SHA256 |  | _installed_ |
| [shasum](man/man_shasum.md) | calcul de hash SHA (256,512,...) | [sha256sum](linux_cmds_list_alpha.md#s) | _installed_ |
| toilet ([G](https://www.google.fr/search?q=linux+toilet)) | affichage bannière | [banner](linux_cmds_list_alpha.md#b) | NI |
| uuid ([G](https://www.google.fr/search?q=linux+uuid)) | génération de _Universally Unique IDentifier_ |  | NI |

## 22 - catégorie: Monitoring système
<a name='cat21'></a>

9 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| btop ([G](https://www.google.fr/search?q=linux+btop)) |  monitoring système | [htop,top](linux_cmds_list_alpha.md#h) | NI |
| [htop](man/man_htop.md) | top en mieux | [top,nmon](linux_cmds_list_alpha.md#t) | _installed_ |
| iftop ([G](https://www.google.fr/search?q=linux+iftop)) | monitoring réseau |  | NI |
| inxi ([G](https://www.google.fr/search?q=linux+inxi)) | informations système | [lstopo-htop-lsdev](linux_cmds_list_alpha.md#l) | NI |
| iotop ([G](https://www.google.fr/search?q=linux+iotop)) | liste process avec leur utilisation I/O disque |  | NI |
| nmon ([G](https://www.google.fr/search?q=linux+nmon)) | _dashboard_ système | [htop](linux_cmds_list_alpha.md#h) | NI |
| [ps](man/man_ps.md) | snapshot des process | [top-pstree](linux_cmds_list_alpha.md#t) | _installed_ |
| [pstree](man/man_pstree.md) | arborescence des process | [ps](linux_cmds_list_alpha.md#p) | _installed_ |
| [top](man/man_top.md) | _dashboard_ système & process | [htop](linux_cmds_list_alpha.md#h) | _installed_ |

## 23 - catégorie: Mémoire
<a name='cat22'></a>

5 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [free](man/man_free.md) | état RAM utilisée/libre | [vmstat](linux_cmds_list_alpha.md#v) | _installed_ |
| lstopo ([G](https://www.google.fr/search?q=linux+lstopo)) | architecture CPU (coeurs, RAM cache, ...) |  | NI |
| [swapoff](man/man_swapoff.md) | gestion mémoire _swap_ | [swapon](linux_cmds_list_alpha.md#s) | _installed_ |
| [swapon](man/man_swapon.md) | gestion mémoire _swap_ | [swapoff](linux_cmds_list_alpha.md#s) | _installed_ |
| [vmstat](man/man_vmstat.md) | état mémoire virtuelle | [free](linux_cmds_list_alpha.md#f) | _installed_ |

## 24 - catégorie: Référence & aide des commandes
<a name='cat23'></a>

7 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| [apropos](man/man_apropos.md) | recherche dans les pages de manuel | [man](linux_cmds_list_alpha.md#m) | _installed_ |
| [help](man/help_help.md) | liste commandes "_builtin_" et aide | [man](linux_cmds_list_alpha.md#m) | _builtin_ |
| [info](man/man_info.md) | aide sur commande | [man](linux_cmds_list_alpha.md#m) | _installed_ |
| [man](man/man_man.md) | manuel | [help](linux_cmds_list_alpha.md#h) | _installed_ |
| tldr ([G](https://www.google.fr/search?q=linux+tldr)) | `man` en mieux | [man](linux_cmds_list_alpha.md#m) | NI |
| [whatis](man/man_whatis.md) | que fait cette commande? |  | _installed_ |
| [whereis](man/man_whereis.md) | indique la localisation d'une commande |  | _installed_ |

## 25 - catégorie: Multimédia
<a name='cat24'></a>

8 commandes - <a href='#top'>Haut de page</a> - [Liste alphabétique](linux_cmds_list_alpha.md)

| Nom | Description | Voir aussi | Statut |
|-----|-----|-----|-----|
| aplay ([G](https://www.google.fr/search?q=linux+aplay)) | écoute de fichier audio |  | NI |
| asciinema ([G](https://www.google.fr/search?q=linux+asciinema)) | _screencast_ console | [ffmpeg](linux_cmds_list_alpha.md#f) | NI |
| ffmpeg ([G](https://www.google.fr/search?q=linux+ffmpeg)) | édition vidéo généraliste | [melt](linux_cmds_list_alpha.md#m) | NI |
| melt ([G](https://www.google.fr/search?q=linux+melt)) | édition vidéo | [ffmpeg](linux_cmds_list_alpha.md#f) | NI |
| sox ([G](https://www.google.fr/search?q=linux+sox)) | couteau suisse audio |  | NI |
| soxi ([G](https://www.google.fr/search?q=linux+soxi)) | détails sur fichier audio |  | NI |
| spd-say ([G](https://www.google.fr/search?q=linux+spd-say)) | synthétiseur vocal |  | NI |
| yt-dlp ([G](https://www.google.fr/search?q=linux+yt-dlp)) | téléchargement vidéos |  | NI |


_MAJ: 2026-06-04T07:34:17+0000_,
_OS: Ubuntu - 24.04.4 LTS (Noble Numbat)_
