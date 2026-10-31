typedef struct Node { struct Node *next; struct Node *prev; u16 index; u16 padA; u32 padC; u8 *buffer; } Node;
extern Node *D_800F5F08;
extern Node *D_800F5F0C;
extern void func_80290600(Node *);
extern Node *func_80291128(u32);
Node *func_80291170(void) {
 Node *s=D_800F5F08;
 Node *prev=s->prev;
 if(prev!=0) {
  Node *next=s->next;
  prev->next=next;
 } else {
  Node *next=s->next;
  D_800F5F08=next;
  next->prev=0;
 }
 prev=s->next;
 if(prev!=0) {
  Node *next=s->prev;
  prev->prev=next;
 } else {
  Node *next=s->prev;
  D_800F5F0C=next;
  next->next=0;
 }
 func_80290600(s);
 if(s->index!=0xffff) {
  u16 id=s->index;
  Node *p=func_80291128(id);
  p->buffer[id-*(u16*)((char*)p+4)]=0xff;
  s->index=0xffff;
 }
 s->padC=0;
 return s;
}
