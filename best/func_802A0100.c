typedef struct { u32 unk0; u8 unk4; u8 unk5; u8 unk6; u8 unk7; u8 unk8; u8 unk9; char padA[2]; u32 unkC; } S;
extern S *D_800B4988[4];
extern volatile s32 D_A0000000;

typedef struct { u32 unk0; u8 unk4; u8 unk5; } S2;

void func_802A0100(S *arg0, u32 arg1, u32 arg2) {
    S *a3;
    u32 t0;

    if (*(vs32 *)0xA4600010 & 3) {
        do {
        } while (*(vs32 *)0xA4600010 & 3);
    }
    t0 = arg0->unk9;
    a3 = D_800B4988[t0];
    if (a3 != arg0) {
        if (t0 == 0) {
            if (((S2 *)a3)->unk5 != arg0->unk5) {
                *(vs32 *)0xA4600014 = arg0->unk5;
            }
            if (a3->unk6 != arg0->unk6) {
                *(vs32 *)0xA460001C = arg0->unk6;
            }
            if (a3->unk7 != arg0->unk7) {
                *(vs32 *)0xA4600020 = arg0->unk7;
            }
            if (a3->unk8 != arg0->unk8) {
                *(vs32 *)0xA4600018 = arg0->unk8;
            }
        } else {
            if (((S2 *)a3)->unk5 != arg0->unk5) {
                *(vs32 *)0xA4600024 = arg0->unk5;
            }
            if (a3->unk6 != arg0->unk6) {
                *(vs32 *)0xA460002C = arg0->unk6;
            }
            if (a3->unk7 != arg0->unk7) {
                *(vs32 *)0xA4600030 = arg0->unk7;
            }
            if (a3->unk8 != arg0->unk8) {
                *(vs32 *)0xA4600028 = arg0->unk8;
            }
        }
        D_800B4988[t0] = arg0;
    }
    *(volatile u32 *)(arg0->unkC | arg1 | 0xA0000000) = arg2;
}
