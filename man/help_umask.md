# Manuel de `umask`

[alpha list](../linux_cmds_list_alpha.md) - [cat list](../linux_cmds_list_cat.md)

<a href='https://www.google.fr/search?q=linux+umask'>Google search</a>

---
umask: umask [-p] [-S] [mode]
    Display or set file mode mask.
    
    Sets the user file-creation mask to MODE.  If MODE is omitted, prints
    the current value of the mask.
    
    If MODE begins with a digit, it is interpreted as an octal number;
    otherwise it is a symbolic mode string like that accepted by chmod(1).
    
    Options:
      -p	if MODE is omitted, output in a form that may be reused as input
      -S	makes the output symbolic; otherwise an octal number is output
    
    Exit Status:
    Returns success unless MODE is invalid or an invalid option is given.
