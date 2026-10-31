extern s32 D_8029E1A0(s32, void *); extern s32 D_802A0520(s32); extern s32 func_8029EE40(void *); extern s32 func_802A0500(void); extern void *D_800B493C; extern void *D_800B4940;
void func_802A0328(void *arg0) {
s32 __repair_argument;
 s32 keep; void *node; void *prev; s32 end; void **head;
 node=arg0; keep=func_802A0500(); if(!node) node=D_800B4940; else if(*(u16*)((u8*)node+16)!=1) D_8029E1A0(*(s32*)((u8*)node+8),node);
 head=&D_800B493C; prev=*head;
 if(prev==node) *head=*(void**)((u8*)node+12);
 else { end=*(s32*)((u8*)prev+4); if(end!=-1) { end=-1; for(;;) { void *next=*(void**)((u8*)prev+12); if(next==node) { *(void**)((u8*)prev+12)=*(void**)((u8*)node+12); break; } __repair_argument = *(s32*)((u8*)prev+4)!=end;
prev=next; if(__repair_argument) continue; break; } } }
 if(node==D_800B4940) func_8029EE40(prev); D_802A0520(keep); }
