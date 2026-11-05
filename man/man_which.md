# Documentation de `which`, générée via `man`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md) - [Liste par type](../linux_cmds_list_type.md)

[Recherche Google](https://www.google.fr/search?q=linux+which)

---

## NAME
       which - locate a command

## SYNOPSIS
       which [-a] filename ...

## DESCRIPTION
       which  returns  the  pathnames  of  the  files (or links) which would be executed in the current environment, had its arguments been given as commands in a strictly
       POSIX-conformant shell.  It does this by searching the PATH for executable files matching the names of the arguments.  It does not canonicalize path names.

## OPTIONS
       -a     print all matching pathnames of each argument

## EXIT STATUS
       0      if all specified commands are found and executable

       1      if one or more specified commands is nonexistent or not executable

       2      if an invalid option is specified

Debian                                                                          29 Jun 2016                                                                        WHICH(1)
