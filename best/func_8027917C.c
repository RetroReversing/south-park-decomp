extern void *D_80203B70(void *, void *);
extern void *D_802131C4(void *, void *, s32);
extern s32 D_80229198(void *);
extern s32 D_802291AC(void *);
extern f32 D_80299AE8(f32);
extern s32 func_8026CB20(void *);
extern void func_8026D430(f32 *, void *);
extern f32 func_8026D63C(void *, f32, f32);
extern f32 func_8029A900(f32);
extern f32 func_8029AA80(f32);
extern u8 D_800CCA80;
void func_8027917C(void *arg0) {
char *__repair_addr;

    f32 sp[7];
    f32 t0,t1,t2,t3,t4,t5;
    s32 v0,s1;
    s8 v1;
    void *a0,*s0,*p;
    a0=*(void **)((u8*)arg0+4);
    if (*(u32*)a0 & 0x200000) {
__repair_addr = (char *)((u8*)arg0+0x94);
 *(s32*)(__repair_addr)=0; return; }
    s0=*(void**)arg0;
    if (*(s32*)((u8*)arg0+0x98)) {
        p=D_80203B70(&D_800CCA80,*(void**)((u8*)s0+0x10));
        if (!p || (*(u32*)((u8*)p+0x44)&0x4000)==0) v1=*(s8*)((u8*)a0+6); else v1=0;
    } else v1=*(s8*)((u8*)a0+6);
    if (!(*(u32*)a0&0x1000) || !v1) { *(s32*)((u8*)arg0+0x94)=0; return; }
    func_8026D430(&sp[0],*(void**)((u8*)s0+0x10));
    if (func_8026CB20(*(void**)((u8*)s0+0x10))) {
        if (D_80229198(s0)) {
            if (!(*(u16*)((u8*)*(void**)((u8*)s0+0x10)+2)&0x10) ||
               (*(u8*)s0==1 && ((sp[0]*-func_8029A900(*(f32*)((u8*)s0+0x70)))+
               (sp[2]*-D_80299AE8(*(f32*)((u8*)s0+0x70))))>=0.0f)) {
                *(s32*)((u8*)arg0+0x94)=0; return;
            }
        } else {
            s1=0;
            if ((*(u32*)a0&0x2000)||D_802291AC(s0)) s1=1;
            if (!s1) { *(s32*)((u8*)arg0+0x94)=0; return; }
        }
    }
    t0=func_8026D63C(*(void**)((u8*)s0+0x10),*(f32*)((u8*)s0+4),*(f32*)((u8*)s0+0xC));
    p=*(void**)((u8*)s0+0x10);
    t1=func_8026D63C(p,*(f32*)((u8*)arg0+0x4C),*(f32*)((u8*)arg0+0x54));
    if (p) D_802131C4(&sp[4],(u8*)arg0+0x4C,*(s32*)((u8*)p+4));
    else { sp[4]=*(f32*)((u8*)arg0+0x4C); sp[5]=*(f32*)((u8*)arg0+0x50); sp[6]=*(f32*)((u8*)arg0+0x54); }
    v0=1;
    if (!((sp[0]*sp[4]+sp[1]*sp[5]+sp[2]*sp[6])<=0.0f)) v0=0;
    *(s32*)((u8*)arg0+0x94)=v0;
    if (v0) {
        t2=t1-t0;
        t3=*(f32*)((u8*)arg0+0x4C)-*(f32*)((u8*)s0+4);
        t4=*(f32*)((u8*)arg0+0x54)-*(f32*)((u8*)s0+0xC);
        t5=t3*t3+t4*t4;
        v0=t5+t2*t2;
        if (v0==0.0f) { *(f32*)((u8*)arg0+0x50)=t0; return; }
        t2=func_8029AA80(t5/v0);
        *(f32*)((u8*)arg0+0x50)=t0+t2*(t1-t0);
        *(f32*)((u8*)arg0+0x4C)=*(f32*)((u8*)s0+4)+t2*(*(f32*)((u8*)arg0+0x4C)-*(f32*)((u8*)s0+4));
        *(f32*)((u8*)arg0+0x54)=*(f32*)((u8*)s0+0xC)+t2*(*(f32*)((u8*)arg0+0x54)-*(f32*)((u8*)s0+0xC));
    }
}
