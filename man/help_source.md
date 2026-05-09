# Manuel de `source`

[alpha list](../linux_cmds_list_alpha.md) - [cat list](../linux_cmds_list_cat.md)

<a href='https://www.google.fr/search?q=linux+source'>Google search</a>

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
