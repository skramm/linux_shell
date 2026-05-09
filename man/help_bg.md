# Manuel de `bg`

[alpha list](../linux_cmds_list_alpha.md) - [cat list](../linux_cmds_list_cat.md)

<a href='https://www.google.fr/search?q=linux+bg'>Google search</a>

---
bg: bg [job_spec ...]
    Move jobs to the background.
    
    Place the jobs identified by each JOB_SPEC in the background, as if they
    had been started with `&'.  If JOB_SPEC is not present, the shell's notion
    of the current job is used.
    
    Exit Status:
    Returns success unless job control is not enabled or an error occurs.
