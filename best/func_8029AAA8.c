extern f64 D_800AB0C8;
extern f32 D_800AB0D0;
extern f32 D_800AB0D4;
extern s32 D_800B4920;
s32 func_8029AAA8(s32 arg0) {
int __repair_literal;

    f64 d=(f64)arg0;
    f32 numerator=(f32)D_800B4920;
    f32 q;
    u32 a2;
    s32 a3;
__repair_literal = 0;

    if(arg0<__repair_literal) d+=D_800AB0C8;
    q=numerator/(f32)d+D_800AB0D0;
    if(D_800AB0D4<=q) a2=((s32)(q-D_800AB0D4))|0x80000000;
    else a2=(s32)q;
    if(a2<0x84U) return -1;
    a3=a2/66;
    if((u32)(a3&255)>=0x11U)a3=0x10;
    *(vu32*)0xA4500010=a2-1;
    *(vu32*)0xA4500014=(a3&255)-1;
    *(vu32*)0xA4500008=1;
    return D_800B4920/(s32)a2;
}
