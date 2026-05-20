# Documentation de `cal`, générée via `help`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md)

[Recherche Google](https://www.google.fr/search?q=linux+cal)

---
caller: caller [expr]
    Return the context of the current subroutine call.
    
    Without EXPR, returns "$line $filename".  With EXPR, returns
    "$line $subroutine $filename"; this extra information can be used to
    provide a stack trace.
    
    The value of EXPR indicates how many call frames to go back before the
    current one; the top frame is frame 0.
    
    Exit Status:
    Returns 0 unless the shell is not executing a shell function or EXPR
    is invalid.
