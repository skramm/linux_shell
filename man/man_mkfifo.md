# Documentation de `mkfifo`, générée via `man`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md)

[Recherche Google](https://www.google.fr/search?q=linux+mkfifo)

---

## NAME
       mkfifo - make FIFOs (named pipes)

## SYNOPSIS
       mkfifo [OPTION]... NAME...

## DESCRIPTION
       Create named pipes (FIFOs) with the given NAMEs.

       Mandatory  arguments  to  long  options are mandatory for short options
       too.

       -m, --mode=MODE
              set file permission bits to MODE, not a=rw - umask

       -Z     set the SELinux security context to default type

       --context[=CTX]
              like -Z, or if CTX is specified then set the  SELinux  or  SMACK
              security context to CTX

       --help display this help and exit

       --version
              output version information and exit

## AUTHOR
       Written by David MacKenzie.

## REPORTING BUGS
       GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
       Report any translation bugs to <https://translationproject.org/team/>

## COPYRIGHT
       Copyright  ©  2023  Free Software Foundation, Inc.  License GPLv3+: GNU
       GPL version 3 or later <https://gnu.org/licenses/gpl.html>.
       This is free software: you are free  to  change  and  redistribute  it.
       There is NO WARRANTY, to the extent permitted by law.

## SEE ALSO
       mkfifo(3)

       Full documentation <https://www.gnu.org/software/coreutils/mkfifo>
       or available locally via: info '(coreutils) mkfifo invocation'

GNU coreutils 9.4                 August 2026                        MKFIFO(1)
