extern f64 D_800BC290; extern f32 D_800BC2BC,D_800BC2C0,D_800BC2C4; extern s32 D_8022D0BC(s32); extern s32 D_8022D0D4(s32);
s32 func_80400F2C(void *a, void *b) {
 void *obj=*(void **)((u8*)a+0x14); s32 type;
 s32 raw; f32 value=0.0f; s32 out;
 raw=(*(s32 (**)(void*))((u8*)obj+0x18))(a); type=*(s32*)((u8*)obj+4);
 switch(type) {case 0:break;case 1:value=*(f32*)raw;break;case 2:value=(f32)*(s8*)raw;break;case 3:value=(f32)*(s16*)raw;break;case 4:value=(f32)*(s32*)raw;break;case 5:value=(f32)*(u8*)raw;break;case 6:value=(f32)*(u16*)raw;break;case 7:value=(f32)*(u32*)raw;break;case 8:value=(f32)*(u32*)raw;break;default:value=0.0f;break;}
 if(D_8022D0BC(*(s32*)((u8*)b+0x24))) {value-=*(f32*)((u8*)obj+0x10);if(value<*(f32*)((u8*)obj+8))value=*(f32*)((u8*)obj+8);}
 else if(D_8022D0D4(*(s32*)((u8*)b+0x24))) {value+=*(f32*)((u8*)obj+0x10);if(*(f32*)((u8*)obj+0xC)<value)value=*(f32*)((u8*)obj+0xC);}
 obj=*(void **)((u8*)a+0x14);
 out=(*(s32 (**)(void*))((u8*)obj+0x18))(a); type=*(s32*)((u8*)obj+4);
 switch(type) {case 0:*(f32*)out=value;break;case 1:*(f32*)out=value;break;case 2:*(s8*)out=(s8)value;break;case 3:*(s16*)out=(s16)value;break;case 4:*(s32*)out=(s32)value;break;case 5:*(u8*)out=(u8)value;break;case 6:*(u16*)out=(u16)value;break;case 7:*(u32*)out=(u32)value;break;case 8:*(u32*)out=(u32)value;break;}
 return 0;
}
