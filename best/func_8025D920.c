extern void *D_800D77BC; extern u8 D_800D77EA; extern s32 D_800F14D0; extern f32 D_800F14B0[4],D_800F14C0[4]; extern s32 D_800B2608; extern s32 D_800BEE18,D_800BEE1C; extern void D_8021E930(void*,void*); extern void D_8021E710(void*,void*); extern void func_8025D798(void*,s32,s32,s32,s32); extern void func_8025AFA0(void*); extern s32 func_8025AA28(void*);
typedef struct Node {struct Node *next; u8 rest[0x20];} Node;
typedef struct Thing {u8 pad[4]; struct Thing *next; u8 rest[0x330]; f32 bounds[8]; s32 flags;} Thing;
void func_8025D920(void *arg0) {
char *__repair_addr;

 u8 *p=arg0; Node *head=D_800D77BC,*node; s32 a,b,c; Thing *v,*cur;
 while(head){ node=*(Node**)((u8*)head+4); a=func_8025AA28((u8*)head+0x18); b=func_8025AA28((u8*)head+0x2c); c=func_8025AA28((u8*)head+0x40); if (a != 0 && c != 0 && (u32)c > (u32)b) { D_8021E930(p+0x12c4,head);D_8021E710(p+0x12b0,head);} head=node;}
__repair_addr = (char *)(p+0x2f0);

 *(s32*)(__repair_addr)=0; *(s32*)(p+0x2f4)=0;
 *(f32*)(p+0x2e8)=(f32)D_800BEE18; *(f32*)(p+0x2ec)=(f32)D_800BEE1C;
 a=*(s32*)(p+0x30); v=*(Thing**)(p+0x20);
 if(a==1){func_8025D798(v,D_800BEE18,D_800BEE1C,0,0);}
 else if(a==2){if(!D_800D77EA){func_8025D798(v,D_800BEE18,(D_800BEE1C+(u32)D_800BEE1C>>31)/2,0,0);v=v->next;func_8025D798(v,D_800BEE18,(D_800BEE1C+(u32)D_800BEE1C>>31)/2,0,0);}else{func_8025D798(v,(D_800BEE18+(u32)D_800BEE18>>31)/2,D_800BEE1C,0,0);v=v->next;func_8025D798(v,(D_800BEE18+(u32)D_800BEE18>>31)/2,D_800BEE1C,(D_800BEE18+(u32)D_800BEE18>>31)/2,0);}}
 else if(a==3){func_8025D798(v,D_800BEE18/2,D_800BEE1C/2,0,0);v=v->next;func_8025D798(v,D_800BEE18/2,D_800BEE1C/2,D_800BEE18/2,0);v=v->next;func_8025D798(v,D_800BEE18/2,D_800BEE1C/2,0,0);}
 else if(a==4){func_8025D798(v,D_800BEE18/2,D_800BEE1C/2,0,0);v=v->next;func_8025D798(v,D_800BEE18/2,D_800BEE1C/2,D_800BEE18/2,0);v=v->next;func_8025D798(v,D_800BEE18/2,D_800BEE1C/2,0,D_800BEE1C/2);v=v->next;func_8025D798(v,D_800BEE18/2,D_800BEE1C/2,D_800BEE18/2,0);}
 func_8025AFA0(p+0x40);
 D_800F14C0[0]=*(f32*)(p+0x378);D_800F14C0[1]=*(f32*)(p+0x37c);D_800F14C0[2]=*(f32*)(p+0x380);D_800F14C0[3]=*(f32*)(p+0x384);
 D_800F14B0[0]=*(f32*)(p+0x388);D_800F14B0[1]=*(f32*)(p+0x38c);D_800F14B0[2]=*(f32*)(p+0x390);D_800F14B0[3]=*(f32*)(p+0x394);D_800F14D0=D_800B2608;
 cur=*(Thing**)(p+0x20); if(cur){func_8025AFA0(cur);D_800F14C0[0]=cur->bounds[0];D_800F14C0[1]=cur->bounds[1];D_800F14C0[2]=cur->bounds[2];D_800F14C0[3]=cur->bounds[3];D_800F14B0[0]=cur->bounds[4];D_800F14B0[1]=cur->bounds[5];D_800F14B0[2]=cur->bounds[6];D_800F14B0[3]=cur->bounds[7];D_800F14D0=cur->flags;cur=cur->next;while(cur){func_8025AFA0(cur);if(cur->bounds[0]<D_800F14C0[0])D_800F14C0[0]=cur->bounds[0];if(cur->bounds[2]>D_800F14C0[2])D_800F14C0[2]=cur->bounds[2];if(cur->bounds[1]<D_800F14C0[1])D_800F14C0[1]=cur->bounds[1];if(cur->bounds[3]>D_800F14C0[3])D_800F14C0[3]=cur->bounds[3];if(cur->bounds[4]<D_800F14B0[0])D_800F14B0[0]=cur->bounds[4];if(cur->bounds[6]>D_800F14B0[2])D_800F14B0[2]=cur->bounds[2];if(cur->bounds[5]<D_800F14B0[1])D_800F14B0[1]=cur->bounds[5];if(cur->bounds[7]>D_800F14B0[3])D_800F14B0[3]=cur->bounds[7];D_800F14D0|=cur->flags;cur=cur->next;}}
 if(*(s32*)(p+0x34)!=*(s32*)(p+0x30)){*(s32*)(p+0x38)=127;*(s32*)(p+0x34)=*(s32*)(p+0x30);}else if(*(s32*)(p+0x38)) --*(s32*)(p+0x38);
}
