extern f32 D_800A9B88,D_800A9B8C; extern u8 D_800D64F8[]; extern u32 D_800CA490[];
void func_80264014(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s16 x,s16 y,s16 z,s16 w){func_8025FA38(D_800D64F8,(f32)x,(f32)y,(f32)z,(f32)w*D_800A9B88,1,a0,a1,a2);}
void func_802640A8(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s16 x,s16 y,s16 z,s16 w){func_8025FA38(D_800D64F8,(f32)x,(f32)y,(f32)z,(f32)w*D_800A9B8C,0,a0,a1,a2);}
void func_80264138(void*a0,void*a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 index){s32 value;void*ptr;if(*(u8*)a1==1&&(*(s32*)((u8*)a1+0xf4)&0x18000000)){ptr=*(void**)((u8*)*(void**)((u8*)a1+0x1cc)+0xa54);value=*(s32*)(*(u32*)((u8*)D_800CA490+index*8)+D_800D64F8[0x12ee]*4);}else{value=*(s32*)(*(u32*)((u8*)D_800CA490+index*8)+D_800D64F8[0x12ee]*4);ptr=D_800D64F8+0x40;}func_8025FCE8(D_800D64F8,ptr,value);}
void func_802641E4(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7){func_8026349C(a0,a1,a2,a3,a4,a5,1,0,0x100000);}
void func_8026423C(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7){func_8026349C(a0,a1,a2,a3,a4,a5,1,1,0x100000);}
