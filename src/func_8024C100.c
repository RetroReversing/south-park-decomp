typedef struct {
    u8 pad0[0x28];
    void *p28;
    u8 pad0_2[0xC4 - 0x2C];
    void *pC4;
    u8 pad0_3[0xD0 - 0xC8];
    void *pD0;
    void *pD8;
    u8 pad0_4[0x154 - 0xDC];
    s32 f154;
    s32 f158;
    s32 f15C;
} Obj;

extern u8 D_800B0CC0;
extern u8 D_24C208;
extern u8 D_24C15C;
extern u8 D_24BDF8;
extern u8 *D_800F4AC8;

void D_8023E95C(void *, void *, s32);
void D_802417F0(void *, void *, s32, f32, s32, s32);
void D_8024220C(void *, void *, void *);

s32 func_8024C0F4(s32 arg0, u8 *arg1) {
    return *(s32 *)(arg1 + 0x154);
}

void func_8024C100(s32 arg0, u8 *arg1, s32 arg2) {
    *(s32 *)(arg1 + 0x154) = arg2;
}

void func_8024C108(void *arg0, Obj *arg1) {
    arg1->p28 = &D_800B0CC0;
    arg1->pC4 = &D_24C208;
    arg1->pD0 = &D_24C15C;
    arg1->pD8 = &D_24BDF8;
    arg1->f158 = 0;
    arg1->f15C = 0;
    D_8023E95C(arg0, arg1, 0);
}

void func_8024C15C(void *arg0, Obj *arg1) {
    u8 buf[0x18];
    u8 *p;
    if (*(s8 *)((u8 *)arg1 + 0x30) == 2) {
        p = D_800F4AC8;
        if (p != NULL) {
            if (*p == 1) {
                D_802417F0(buf, arg0, 5, 25.6f, 0x80000, 0);
                D_8024220C(p, p + 0x168, buf);
                D_8023E95C(arg0, arg1, 0);
            }
        }
    }
}
