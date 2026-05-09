# Manuel de `case`

[alpha list](../linux_cmds_list_alpha.md) - [cat list](../linux_cmds_list_cat.md)

<a href='https://www.google.fr/search?q=linux+case'>Google search</a>

---
case: case WORD in [PATTERN [| PATTERN]...) COMMANDS ;;]... esac
    Execute commands based on pattern matching.
    
    Selectively execute COMMANDS based upon WORD matching PATTERN.  The
    `|' is used to separate multiple patterns.
    
    Exit Status:
    Returns the status of the last command executed.
