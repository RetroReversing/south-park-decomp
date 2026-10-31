void func_8026465C(void *a0, void *a1, s32 a2, s32 a3) {
    *(s32 *)((char *)a1 + 0x158)=0; *(s32 *)((char *)a1 + 0x15C)=0;
    *(s32 *)((char *)a1 + 0x160)=0; *(s32 *)((char *)a1 + 0x164)=0;
    *(s32 *)((char *)a1 + 0x168)=0; *(s32 *)((char *)a1 + 0x16C)=0;
}
extern s32 D_8024249C(s32,s32,s32,s32,s32);
void func_8026467C(void *a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6) {
    char *p=(char*)a0+0x168;
    if (*(s32*)(p+0xF4) && ((**(s32**)((char*)a0+0x10))&9)==0) {
        D_8024249C(a6,a1,a3,a4,a5);
        *(s32*)(p+0xF4)=0; *(s32*)(p+0x198)=3;
    }
}
extern void D_80242418(void*);
extern void D_80247034(void);
extern s32 D_800CE2FC;
void func_802646E4(void *a0,s32 a1,s32 a2,s32 a3) {
char *__repair_addr;

    D_80242418((char*)a0+0x168);
__repair_addr = (char *)((char*)a0+0xF4);

    *(s32*)(__repair_addr) &= 0xFF7FFFFF;
    *(s32*)((char*)a0+0xF4) &= 0xFFEFFFFF;
    if (**(s32**)((char*)a0+0x14)==12 && D_800CE2FC==500) D_80247034();
}
extern f32 func_8026D63C(void*,s32,s32,s32,s32,s32);
void func_802645C0(void *a0,void *a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6) {
    void *s1=*(void**)((char*)a1+0x108);
    char *s0=(char*)s1+0x168;
    if (((**(s32**)((char*)a0+0x10))&9)==0) {
        func_8026D63C(*(void**)((char*)a0+0x10),a5,a6,a5,a3,a4);
        *(s32*)(s0+0x188) |= 0x10;
        *(s32*)((char*)s1+0x24c)=a5;
        *(s32*)((char*)s1+0x250)=a6;
        *(s32*)((char*)s1+0x254)=a3;
        *(s32*)(s0+0x198)=3;
    }
}
