# Linux Shell: liste de commandes par type

<a href='linux_cmds_list_alpha.md'>Liste alphabétique</a> - [Liste par catégorie](linux_cmds_list_cat.md)

<a name='top'></a>

## Commandes "_builtin_"

| Nom | Description | Catégorie | Voir aussi |
|------|------|------|------|------|
| alias | composition de commandes |
| bg | passage d'un _job_ en arrière plan (_BackGround_) |
| break | sortie de boucle "for" |
| case |  |
| cd | _Change Directory_ |
| echo | affichage de texte/variable |
| eval | exécute la commande passée en argument |
| exit | Terminaison du script et renvoi  d'une valeur à l'OS |
| export | exportation de variable dans un sous-shell |
| fg | passage d'un _job_ au premier plan (_ForeGround_) |
| for |  |
| function | définition d'une fonction Bash |
| help | liste commandes "_builtin_" et aide |
| history | historique des commandes |
| if |  |
| jobs | affichage des _jobs_ lancés |
| kill | stoppe un process par PID (envoi d'un signal POSIX) |
| popd | récupération dossier courant |
| printf | affichage de texte/variable formatté |
| pushd | chgt dossier courant avec sauvegarde |
| pwd | _print working directory_ |
| read | saisie ligne (clavier ou fichier) |
| return | fin de fonction |
| set | paramétrage du shell |
| shift | décalage paramètres positionnels ($1, $2, ...) |
| source | exécution d'un script dans le même shell |
| time | chronométrage de tâche |
| trap | interception de signal POSIX |
| type | indique si une commande est interne (_builtin_) ou externe |
| umask | permissions par défaut |
| unalias | suppression d'un alias |
| while |  |

## Commandes "_installed_"

| Nom | Description | Catégorie | Voir aussi |
|------|------|------|------|------|
| 7z | compression/décompression |
| ab | _Apache's server benchmarking tool_ |
| addgroup | création groupe d'utilisateurs |
| adduser | création utilisateur |
| apropos | recherche dans les pages de manuel |
| apt | gestion paquets Debian |
| apt-get | gestion paquets Debian (bas niveau) |
| arch | architecture processeur |
| awk | _pattern scanning and processing language_ |
| base64 | encodage/décodage <a href="https://fr.wikipedia.org/wiki/Base64">base64</a> |
| basename | extraction nom à partir d'un chemin |
| bc | calculatrice CLI |
| blkid | accès aux détails des _devices_ de type "bloc" |
| bzip2 | compression |
| cat | affiche et/ou concatene un/des fichiers |
| chage | _change user password expiry information_ |
| chgrp | chgt groupe propriétaire fichier |
| chmod | chgt permissions fichier |
| chown | chgt propriétaire fichier |
| chrt | manipulation attributs d'un process |
| clear | effacement terminal |
| cmake | outil de _build_ multi OS |
| cmp | comparaison de fichiers, par octet |
| column | transformation texte en colonnes |
| comm | comparaison de fichiers, par ligne |
| cp | copie fichier(s) |
| cpio | manipulation d'archive |
| cpupower | accès/édition paramètres de puissance CPU |
| cron | planification de tâches |
| curl | client multiprotocoles (wget en mieux) |
| cut | suppression de texte dans des lignes |
| date | affiche date & heure |
| dd | utilitaire de copie bas niveau |
| depmod | _generates modules.dep and map files_ |
| df | _disk free_ |
| diff | différences entre 2 fichiers, ligne par ligne |
| dig | requete DNS |
| dir | alias de ls |
| dmesg | affichage logs kernel (buffer circulaire) |
| dpkg | utilitaire paquets Debian (.deb) |
| du | _disk usage_ |
| env | exécution d'un programme en modifiant l'environnement |
| fc-list | _list available fonts_ |
| fdisk | _manipulate disk partition table_ |
| file | nature d'un fichier |
| find | _search for files, folders,_ ... |
| findmnt | _find a filesystem_ |
| fmt | text formatter |
| fold | ajustement longueur de ligne |
| free | état RAM utilisée/libre |
| fsck | Vérification et correction système de fichier |
| ftp | transfert de fichiers |
| g++ | compilation C++ |
| gcc | compilation C |
| getfacl | affichage des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) |
| git | **LE** gestionnaire de versions de fichiers source |
| grep | recherche de chaîne |
| groupadd | création groupe (bas niveau!) |
| groupmod | modification d'un groupe d'utilisateurs |
| groups | affiche les groupes existants |
| gunzip | decompression zip |
| gzip | compression zip |
| halt |  |
| hdparm | accès/édition paramètres des disques |
| head | premières lignes texte |
| host | requete DNS |
| hostname | nom de la machine |
| htop | top en mieux |
| id | affiche les infos sur un utilisateur |
| info | aide sur commande |
| insmod | _insert a module into the kernel_ |
| ip |  |
| journalctl | outil d'accès aux logs systemd |
| jq | traitement de chaines JSON |
| killall | stoppe tous les process par nom |
| last | historique des logins & boots |
| ld | _linker_ de binaires |
| ldconfig | _configure dynamic linker run-time bindings_ |
| less | filtre d'affichage |
| ln | création de lien, symbolique ou _hardlink_ |
| logger | écriture dans un log système |
| loginctl | _Control the systemd login manager_ |
| look | _display lines beginning with a given string_ |
| losetup | _set up and control loop devices_ |
| ls | _list directory content_ |
| lsb_release | version distribution |
| lsblk | liste périphs stockage "bloc" |
| lscpu | détails sur archi CPU |
| lshw | _list hardware_ |
| lsmod | _show the status of modules in the kernel_ |
| lsof | _list open files_ |
| lspci | _list all PCI devices_ |
| lsusb | liste périphs USB |
| make | construction d'une cible en fonction des dépendances |
| man | manuel |
| md5sum | calcul de hash MD5 |
| mkdir | _make directory_ |
| modinfo | _show information about a module_ |
| modprobe | _add and remove modules from the kernel_ |
| more | filtre d'affichage |
| mount | montage de partitions |
| mtr | affiche les étapes d'une requete réseau |
| mv | déplacement/renommage |
| nano | éditeur en mode "console" |
| nc | alias pour netcat |
| netcat | utilitaire TCP/UDP |
| netstat | infos/reseau, routage, etc. |
| npm | gestionnaire de paquets Javascript |
| nslookup | requete DNS (_deprecated_) |
| od | visualisation en hexa ou octal |
| passwd | changement pwd |
| paste | fusion de lignes de texte de plusieurs fichiers |
| pidof |  donne le PID d'un process |
| ping | envoi de trames ICMP |
| pip | gestionnaire de paquets Python (2 ou 3) |
| pip3 | gestionnaire de paquets Python3 |
| pkg-config | outil de paramétrage de compilation, renvoie les infos sur librairies installées |
| pkill | stoppe un process par nom |
| printenv | liste var. environnement |
| ps | snapshot des process |
| pstree | arborescence des process |
| reboot | reboot |
| rev | inversion de texte |
| rm | suppression fichier |
| rmdir | supression dossier |
| rmmod | _remove a module from the kernel_ |
| route | affiche ou édite la table de routage |
| rpm | gestion paquets Fedora |
| rsync | copie et synchronisation de fichiers entre machines |
| scp | tranfert de fichiers entre machines |
| screen | multiplexeur de terminal |
| sed |  _Stream EDitor_ |
| seq | _print a sequence of numbers_ |
| setfacl | modification des [ACL](https://linux.goffinet.org/administration/securite-locale/access-control-lists-acls-linux/) de fichiers/dossier |
| sha256sum | calcul de hash SHA256 |
| shasum | calcul de hash SHA (256,512,...) |
| showkey | affichage codes claviers en temps réel |
| shred | effacement en profondeur de fichier |
| shuf | permutation aléatoire de lignes |
| shutdown | Comme son nom l'indique... |
| sleep | attente |
| snap | utilitaire de controle des "snap" (Ubuntu) |
| sort | tri de texte |
| split | Découpage d'un fichier en plusieurs morceaux |
| ss | _socket statistics_ |
| ssh | Connection à une machine distante |
| ssh-add |  |
| ssh-copy-id |  |
| ssh-keygen | Génération de clés SSH |
| stat | détails complets sur un fichier |
| strace | _trace system calls and signals_ |
| strings | extraction de chaines dans des binaires |
| su | changement temporaire de _user_ |
| sudo | exécution d'une commande admin |
| swapoff | gestion mémoire _swap_ |
| swapon | gestion mémoire _swap_ |
| systemctl | gestion des services (CLI/systemd) |
| tac | affichage fichier à l'envers |
| tail | dernières lignes texte |
| tar | utilitaire archivage |
| tcpdump | capture trames réseau (Wireshark en CLI) |
| tee | modif redirection (stdout, stderr) |
| tmux | multiplexeur de terminal |
| top | _dashboard_ système & process |
| touch | création ou MAJ date d'un fichier |
| tr | _translate or delete characters_ |
| tree | affiche l'arborescence d'un dossier |
| tty | indique le terminal courant (`/dev/pts/XX`) |
| ufw |  pilote CLI de Firewall  |
| umount | démontage de partitions |
| uname | version noyau |
| uniq | suppression lignes identiques |
| unzip | décompression zip |
| uptime | durée fonctionnement système |
| useradd | création utilisateur (bas niveau!) |
| userdel | suppression compte |
| usermod | modification compte utilisateur |
| vmstat | état mémoire virtuelle |
| w | qui est loggé et que fait-il? |
| watch | exécution périodique d'une commande |
| wc | _word count_ |
| wget | client http CLI |
| whatis | que fait cette commande? |
| whereis | indique la localisation d'une commande |
| which | localisation (chemin) d'un programme |
| who | qui est loggé? |
| whoami | qui suis-je? |
| xargs |  |
| xdg-open | ouverture fichier avec application GUI associée au type par défaut |
| xxd | visualisation en hexa |
| yes | _output a string repeatedly until killed_ |
| zip | compression zip |
| zramctl | paramétrage et controle de la compression RAM |

## Commandes "NI"

| Nom | Description | Catégorie | Voir aussi |
|------|------|------|------|------|
| aa-xxx | ensemble de commandes de gestion de <a href="https://apparmor.net/">`Apparmor`</a> |
| acpi | details sur alimentation (batterie ou secteur) |
| aplay | écoute de fichier audio |
| asciinema | _screencast_ console |
| at | planification de tâches |
| auditd | _Logging_ des actions système |
| banner | affichage bannière |
| bat | cat en mieux |
| btop |  monitoring système |
| cal | affichage calendrier |
| cloc | _Count Lines Of Code_ |
| convert | conversion format d'image |
| cowsay | [lien](https://en.wikipedia.org/wiki/Cattle#/media/File:Cow_(Fleckvieh_breed)_Oeschinensee_Slaunger_2009-07-07.jpg) |
| display | affichage d'une image sur serveur X |
| evtest | affichage évènements clavier+souris |
| exiftool | manipulation métadonnées fichier image, audio, etc. |
| falco | _kernel monitoring and detection agent_ |
| ffmpeg | édition vidéo généraliste |
| figlet | affichage bannière |
| gdb | déboggage pas à pas |
| hey | _HTTP load generator_ |
| hwclock | accès horloge interne |
| ifdown | désactivation interface réseau |
| iftop | monitoring réseau |
| ifup | activation interface réseau |
| inxi | informations système |
| iotop | liste process avec leur utilisation I/O disque |
| jo | génération de JSON |
| locate | localise un programme dans le système |
| lsdev | infos générales sur _hardware_ |
| lstopo | architecture CPU (coeurs, RAM cache, ...) |
| melt | édition vidéo |
| ncdu | `du` en mieux |
| nmap | exploration réseau |
| nmcli | pilote CLI des connexions réseau |
| nmon | _dashboard_ système |
| notify-send | Envoi de notification au bureau |
| pango-list | liste des polices de caractères installées |
| pango-view | _convert text to image_ |
| pv | _Pipe Viewer_ (monitoring de _pipe_ ou de copie) |
| pwgen | génération de _password_ |
| qrencode | génération de qrcodes |
| ripgrep | (rg) grep récursif |
| sensors | données capteurs (température, tension, etc.) |
| smartctl | accès aux données [SMART](https://fr.wikipedia.org/wiki/Self-Monitoring,_Analysis_and_Reporting_Technology) des disques |
| sox | couteau suisse audio |
| soxi | détails sur fichier audio |
| spd-say | synthétiseur vocal |
| stress | génération de charge CPU |
| sysdig | _Cloud-Native Application Protection Platform_ |
| tldr | `man` en mieux |
| toilet | affichage bannière |
| traceroute | affiche les étapes d'une requete réseau |
| updatedb | mise à jour BDD `locate` |
| uuid | génération de _Universally Unique IDentifier_ |
| whois | infos/domaine |
| wl-paste | copie presse-papier (Wayland) |
| xclip | transfert vers le presse-papier X |
| xev | affichage évènements clavier+souris |
| xinput | _utility to configure and test X input devices_ |
| yt-dlp | téléchargement vidéos |
| yum | gestion paquets RedHat |
| zenity | génération de dialogues GUI via CLI |



_MAJ: 2026-05-09T08:58:33+0000_,
