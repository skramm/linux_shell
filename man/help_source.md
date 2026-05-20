# Documentation de `source`, générée via `help`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md)

[Recherche Google](https://www.google.fr/search?q=linux+source)

---
source: source filename [arguments]
    Execute commands from a file in the current shell.
    
    Read and execute commands from FILENAME in the current shell.  The
    entries in $PATH are used to find the directory containing FILENAME.
    If any ARGUMENTS are supplied, they become the positional parameters
    when FILENAME is executed.
    
    Exit Status:
    Returns the status of the last command executed in FILENAME; fails if
    FILENAME cannot be read.
