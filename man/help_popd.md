# Documentation de `popd`, générée via `help`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md)

[Recherche Google](https://www.google.fr/search?q=linux+popd)

---
popd: popd [-n] [+N | -N]
    Remove directories from stack.
    
    Removes entries from the directory stack.  With no arguments, removes
    the top directory from the stack, and changes to the new top directory.
    
    Options:
      -n	Suppresses the normal change of directory when removing
    		directories from the stack, so only the stack is manipulated.
    
    Arguments:
      +N	Removes the Nth entry counting from the left of the list
    		shown by `dirs', starting with zero.  For example: `popd +0'
    		removes the first directory, `popd +1' the second.
    
      -N	Removes the Nth entry counting from the right of the list
    		shown by `dirs', starting with zero.  For example: `popd -0'
    		removes the last directory, `popd -1' the next to last.
    
    The `dirs' builtin displays the directory stack.
    
    Exit Status:
    Returns success unless an invalid argument is supplied or the directory
    change fails.
