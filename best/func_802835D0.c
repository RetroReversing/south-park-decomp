extern s32 D_800CCA80;

typedef struct { s8 unk0; u8 unk1; s16 unk2; } T835D0;

s16 *D_80205708(s32 *arg0, u8 arg1);

void func_802835D0(T835D0 *arg0, u8 *arg1) {
char *__repair_addr;

    s16 *t;
    s16 v;

    t = D_80205708(&D_800CCA80, arg0->unk1);
__repair_addr = (char *)((u8 *)t + 2);

    v = *(s16 *)(__repair_addr);
    if (arg0->unk0 > 0) {
        if (arg0->unk0 < 3) {
            arg0->unk0 = 1;
            arg0->unk2 = arg0->unk2 + 1;
            if (arg0->unk2 == v) {
                switch (*(s16 *)t) {
                case 0:
                    arg0->unk2 = v - 2;
                    arg0->unk0 = 3;
                    break;
                case 1:
                    arg0->unk2 = 0;
                    break;
                }
            }
        } else if (arg0->unk0 < 5) {
            arg0->unk0 = 3;
            arg0->unk2 = arg0->unk2 - 1;
            if (arg0->unk2 < 0) {
                switch (*(s16 *)t) {
                case 0:
                    if (*(s8 *)(arg1 + 0x2DC) == 0xC) {
                        arg0->unk0 = 0;
                        *(s32 *)(arg1 + 0x2F0) |= 0x20;
                    } else {
                        arg0->unk2 = 1;
                        arg0->unk0 = 1;
                    }
                    break;
                case 1:
                    arg0->unk2 = v - 1;
                    break;
                }
            }
        }
    }
}
