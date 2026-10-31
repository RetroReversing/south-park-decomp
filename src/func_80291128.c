typedef struct Node { struct Node *next; u16 start; u16 len; } Node;
extern Node D_800F5FF0;
Node *func_80291128(u32 arg0) {
 Node *p=&D_800F5FF0;
 if(p) {
  do {
   u16 start=p->start;
   if(arg0 < start || arg0 >= (u32)(start+p->len)) {
    p=p->next;
    if(p) continue;
   }
   break;
  } while(1);
 }
 return p;
}
