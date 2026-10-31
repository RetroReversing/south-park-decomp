extern f32 D_800A9B88,D_800A9B8C; extern u8 D_800D64F8[]; extern u32 D_800CA490[];
void func_802641E4(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7){func_8026349C(a0,a1,a2,a3,a4,a5,1,0,0x100000);}
void func_8026423C(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7){func_8026349C(a0,a1,a2,a3,a4,a5,1,1,0x100000);}
void func_80264294(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7){func_8026349C(a0,a1,a2,a3,a4,a5,1,0,0x200000);}
void *D_802131C4(void*,void*,void*); void *D_80213274(void*,void*,void*); void *D_802132D8(void*);
void func_8026B1D8(f32 *a0,f32*a1,void*a2,void*a3){f32 x[4],y[4];D_802131C4(x,a2,a1);D_802131C4(y,a3,a2);D_80213274(a0,y,x);D_802132D8(a0);a0[3]=a0[0]*a1[0]+a0[1]*a1[1]+a0[2]*a1[2];}
