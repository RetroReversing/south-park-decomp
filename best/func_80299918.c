extern u8 D_800AAF90[]; extern u8 D_800AAF94[];
typedef struct {void *builder;s32 unk4; s32 pad8;s32 padc;u32 unk10;s32 unk14;} S999;
typedef struct {u32 w0,w1;} Acmd; extern void func_8029D580(void*,void*,s32);
void *func_80299918(S999 *a,s32 x,s32 y,s32 z,s32 n){
 Acmd *o,*p,*q,*r,*end; void *child=a->builder;
 if(!child)func_8029D580(&D_800AAF90,&D_800AAF94,0x22);
 end=((void *(*)(void*,s32,s32,s32,s32))(*(u32*)((u8*)child+4)))(child,x,y,z,n);
 o=end;p=o+1;q=p+1;r=q+1;
 o->w0=0x08000000;o->w1=(y*2)&0xffff;p->w0=0x0D000000;p->w1=0x04400580;q->w0=0x08000000;q->w1=(y*4)&0xffff;r->w0=0x06000000;r->w1=a->unk14;
 return r+1;
}
