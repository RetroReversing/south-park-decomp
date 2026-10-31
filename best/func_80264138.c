void *D_80225B48(void *, void *, s32); extern f32 D_800A9B88; extern f32 D_800A9B8C; extern u8 D_800D64F8[]; extern u32 D_800CA490[]; s32 func_8025FA38(void *,f32,f32,f32,f32,s32,s32,s32,s32); s32 func_8025FCE8(void *,void *,s32);
void func_80263FD0(void *a0,void *a1,s32 a2,s32 a3,s32 a4,s32 a5) {void *p=*(void**)((u8*)a1+0x1cc); *(s32*)((u8*)p+0xba0)=a3; *(s32*)((u8*)p+0xba4)=a4; *(s32*)((u8*)p+0xba8)=a5; D_80225B48(a1,(u8*)a1+0x168,a2);}
void func_80264014(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s16 a6,s16 a7,s16 a8,s16 a9) {func_8025FA38(D_800D64F8,(f32)a6,(f32)a7,(f32)a8,(f32)a9*D_800A9B88,1,a3,a4,a5);}
void func_802640A8(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s16 a6,s16 a7,s16 a8,s16 a9) {func_8025FA38(D_800D64F8,(f32)a6,(f32)a7,(f32)a8,(f32)a9*D_800A9B8C,0,a3,a4,a5);}
void func_80264138(void *a0,void *a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 index) {
char *__repair_addr;
s32 value; void *ptr; if (*(u8*)a1==1 && (*(s32*)((u8*)a1+0xf4)&0x18000000)) {ptr=*(void**)((u8*)*(void**)((u8*)a1+0x1cc)+0xa54); value=*(s32*)(*(u32*)((u8*)D_800CA490+index*8)+D_800D64F8[0x12ee]*4);} else {
__repair_addr = (char *)(*(u32*)((u8*)D_800CA490+index*8)+D_800D64F8[0x12ee]*4);
value=*(s32*)(__repair_addr); ptr=D_800D64F8+0x40;} func_8025FCE8(D_800D64F8,ptr,value);}
