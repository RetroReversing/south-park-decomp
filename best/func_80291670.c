u8 func_80291B40(void *a, s32 b);
s32 func_8029206C(void *a, s32 b);

s32 func_80291670(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_s0;
    s32 temp_s4;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_a2;
    void *temp_a3;
    void *var_v0;

    temp_s0 = func_80291B40(arg0, arg1);
    temp_s4 = temp_s0 & 0xFF;
    if (temp_s4 == 0xFF) {
        temp_v0_2 = func_80291B40(arg0, arg1);
        temp_v1 = temp_v0_2 & 0xFF;
        if (temp_v1 == 0x51) {
            *(s16 *)arg2 = 3;
            *(u8 *)(arg2 + 8) = temp_s0;
            *(u8 *)(arg2 + 9) = temp_v0_2;
            temp_v0_3 = func_80291B40(arg0, arg1);
            *(u8 *)(arg2 + 0xB) = temp_v0_3;
            *(u8 *)(arg2 + 0xC) = func_80291B40(arg0, arg1);
            *(u8 *)(arg2 + 0xD) = func_80291B40(arg0, arg1);
            *(u8 *)(arg0 + arg1 + 0xA8) = 0;
        } else if (temp_v1 == 0x2F) {
            temp_v1 = *(u32 *)(arg0 + 4);
            temp_v1 = temp_v1 ^ (1 << arg1);
            *(u32 *)(arg0 + 4) = temp_v1;
            if (temp_v1 != 0) {
                *(s16 *)arg2 = 0x12;
            } else {
                *(s16 *)arg2 = 4;
            }
        } else if (temp_v1 == 0x2E) {
            func_80291B40(arg0, arg1);
            func_80291B40(arg0, arg1);
            *(u8 *)(arg0 + arg1 + 0xA8) = 0;
            *(s16 *)arg2 = 0x13;
        } else if (temp_v1 == 0x2D) {
            temp_a3 = arg0 + (arg1 * 4);
            temp_a2 = *(void **)(temp_a3 + 0x18);
            temp_v0_3 = *(u8 *)temp_a2;
            temp_a2++;
            temp_v0_4 = *(u8 *)temp_a2;
            temp_v1_3 = temp_v0_4 & 0xFF;
            if (temp_v1_3 == 0) {
                var_v0 = temp_a2 + 5;
                *(u8 *)temp_a2 = temp_v0_3;
            } else {
                if (temp_v1_3 != temp_s4) {
                    *(u8 *)temp_a2 = temp_v0_4 - 1;
                }
                temp_a2++;
                temp_v0_3 = *(u8 *)temp_a2;
                temp_a2++;
                temp_v1_3 = *(u8 *)temp_a2;
                temp_a2++;
                temp_s4 = *(u8 *)temp_a2;
                temp_a2++;
                var_v0 = temp_a2 - ((temp_v0_3 << 24) + (temp_v1_3 << 16) + (temp_s4 << 8) + *(u8 *)temp_a2);
            }
            *(void **)(temp_a3 + 0x18) = var_v0;
            *(u8 *)(arg0 + arg1 + 0xA8) = 0;
            *(s16 *)arg2 = 0x14;
        }
    } else {
        *(s16 *)arg2 = 1;
        if (temp_s0 & 0x80) {
            *(u8 *)(arg2 + 8) = temp_s0;
        } else {
            *(u8 *)(arg2 + 9) = temp_s0;
        }
        if (temp_s0 & 0x80) {
            *(u8 *)(arg2 + 9) = func_80291B40(arg0, arg1);
            *(u8 *)(arg0 + arg1 + 0xA8) = temp_s0;
        } else {
            *(u8 *)(arg2 + 8) = *(u8 *)(arg0 + arg1 + 0xA8);
        }
        temp_v1_4 = *(u8 *)(arg2 + 8) & 0xF0;
        if ((temp_v1_4 != 0xC0) && (temp_v1_4 != 0xD0)) {
            *(u8 *)(arg2 + 0xA) = func_80291B40(arg0, arg1);
            if ((*(u8 *)(arg2 + 8) & 0xF0) == 0x90) {
                *(s32 *)(arg2 + 0xC) = func_8029206C(arg0, arg1);
            }
        } else {
            *(u8 *)(arg2 + 0xA) = 0;
        }
    }
    return 1;
}
