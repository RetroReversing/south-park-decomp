/* identical to func_8008DCAC in V-RALLY (matched), with its names changed by decompdecomp */
struct N { struct N *next; struct N **prev; };
void alLink(struct N *arg0, struct N **arg1) { arg0->next = *arg1; arg0->prev = arg1; if (*arg1) (*arg1)->prev = (struct N **)arg0; *arg1 = arg0; }
