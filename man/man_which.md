# Documentation de `which`, générée via `man`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md)

[Recherche Google](https://www.google.fr/search?q=linux+which)

---

## NAME
       which - locate a command

## SYNOPSIS
       which [-as] filename ...

## DESCRIPTION
       which returns the pathnames of the files (or links) which would be exe‐
       cuted  in the current environment, had its arguments been given as com‐
       mands in a strictly POSIX-conformant shell.  It does this by  searching
       the  PATH for executable files matching the names of the arguments.  It
       does not canonicalize path names.

## OPTIONS
       -a     print all matching pathnames of each argument

       -s     silently return 0 if all of the executables were found or 1 oth‐
              erwise

## EXIT STATUS
       0      if all specified commands are found and executable

       1      if one or more specified commands is  nonexistent  or  not  exe‐
              cutable

       2      if an invalid option is specified

Debian                            29 Jun 2016                         WHICH(1)
