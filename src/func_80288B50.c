extern f32 D_800AA69C; extern u8 D_288AB0[];
void func_80288B50(void *a0,void *a1){f32 v=D_800AA69C;*(u8 **)((u8*)a1+0xD0)=D_288AB0;*(s32*)((u8*)a1+0x180)=0;*(f32*)((u8*)a1+0x160)=v;}
void D_80241C54(void*,void*,s32,s32);
void func_80288E6C(void *a0,void *a1,void *a2){D_80241C54(a0,a1,*(s32*)((u8*)a1+0x160),*(s32*)((u8*)a2+0x4C));}
