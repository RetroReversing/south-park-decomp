extern f32 D_800A9B90,D_800A9B94;
extern s32 D_800CCA80,D_800EDFE8;
extern s32 D_8020535C(void*,void*,s32,s32,s32,s32,f32,f32);
void func_802643F4(void *a0,void *a1,s32 a2,s32 a3,s32 a4,s32 a5,s16 x) {
    void *out;
    if (*(u8*)a0==1 && (*(s32*)((u8*)a0+0xF4)&0x18000000)) {
        out=(u8*)*(u8**)((u8*)*(void**)((u8*)a1+0x1CC)+0xAF4)+0x14C;
        *(s32*)((u8*)&a3)=0;
        *(s32*)((u8*)&a4)=0;
        *(s32*)((u8*)&a5)=0;
    } else out=&D_800EDFE8;
    D_8020535C(&D_800CCA80,out,a5,a3,a4,a5,(f32)x*D_800A9B90,(f32)(u8)x*D_800A9B94);
}
