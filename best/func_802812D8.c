extern f64 D_800AA2E8;
typedef struct { s32 unk0, unk4, unk8, unkC; } S;
f32 func_802812D8(S *arg0) {
    volatile s32 frame[8];
    s32 t0=arg0->unk4, t1=arg0->unk8, t2=arg0->unkC;
    s32 a=arg0->unk0, count=t0, sh, m;
    u32 *p, v;
    f64 d;
    frame[1]=t0; frame[2]=t1; frame[3]=t2;
    a=arg0->unk0;
    frame[5]=frame[1]; frame[6]=frame[2]; frame[7]=frame[3];
    p=(u32 *)((a & 0xF0000000) | ((u32)(a & 0x0FFFFFE0)>>3));
    sh=count & 31;
    v=p[0];
    if(sh!=0) v=(v>>sh)|(p[1]<<(32-sh));
    if((u32)count<32) v &= (1<<count)-1;
    d=(f64)(s32)v;
    if((s32)v<0) d+=D_800AA2E8;
    m=(1<<count)-1;
    arg0->unk0 += t0;
    return ((f32)m/(f32)m)*(f32)d + (f32)t1;
}
