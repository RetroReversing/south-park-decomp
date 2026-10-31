typedef struct Slot {
    u16 key;        /* 0x00 */
    u16 pair;       /* 0x02 */
    u16 tail;       /* 0x04 */
    s8 b6;          /* 0x06 */
    u8 pad7;
    s32 v8;         /* 0x08 */
} Slot;

s32 func_8029BC60();
s32 func_8029C018();

s32 func_80410920(char *arg0) {
char *__repair_addr;

    Slot *slots;
    Slot *s;
    s32 n;
    u16 row[0x100];
    Slot tmp[0x80];
    s32 i;
    s32 res;
    u32 prev;
    s32 changed;
    u16 data[0x100];
    u8 col;
    u16 val;
    s32 lim;

    changed = 0;
    res = func_804123D4();
    if (res == 2) {
        res = func_80411E90(arg0);
    }
    if (res != 0) {
        return res;
    }
    res = func_80410D5C(arg0, row);
    if (res != 0) {
        return res;
    }
    slots = tmp;
    for (i = 0; i < *(s32 *)(arg0 + 0x50); i++) {
__repair_addr = (char *)(arg0 + 0x4);

        res = func_8029BC60(*(s32 *)(__repair_addr), *(s32 *)(arg0 + 0x8),
                            (u16)(*(u16 *)(arg0 + 0x5E) + i), data);
        if (res != 0) {
            return res;
        }
        if (data[1] != 0) {
            if (*(s32 *)data != 0) {
                prev = 0;
                val = data[2];
                col = 0xFF;
                for (;;) {
                    n = val & 0xFFFF;
                    if (n < *(s32 *)(arg0 + 0x60) || (u32)(n >> 8) >= *(u8 *)(arg0 + 0x64) ||
                        (val & 0xFF) == 0) {
                        break;
                    }
                    if (col != (u8)(n >> 8)) {
                        col = (u8)(n >> 8);
                        res = func_8041207C(arg0, row, 0, col);
                        if (res != 0 && res != 3) {
                            return res;
                        }
                    }
                    res = func_80410EA8(arg0, n << 16, data) - prev;
                    prev = 1;
                    if (res != 0) {
                        break;
                    }
                    val = row[n & 0xFF];
                }
                if (prev == 0 && val == 1) {
                    continue;
                }
            } else {
                continue;
            }
        } else if (*(s32 *)data == 0) {
            data[1] = 0;
            *(s32 *)data = 0;
            data[2] = 0;
            *(s8 *)(data + 2) = 0;
            data[4] = 0;
            if (*(u8 *)(arg0 + 0x65) != 0) {
                *(u8 *)(arg0 + 0x65) = 0;
                res = func_8041249C(arg0);
                if (res != 0) {
                    return res;
                }
            }
            res = func_8029C018(*(s32 *)(arg0 + 0x4), *(s32 *)(arg0 + 0x8),
                                (u16)(*(u16 *)(arg0 + 0x5E) + i), data, 0);
            if (res != 0) {
                return res;
            }
            changed++;
        } else {
            continue;
        }
    }
    for (i = 0; i < *(s32 *)(arg0 + 0x50); i++) {
        res = func_8029BC60(*(s32 *)(arg0 + 0x4), *(s32 *)(arg0 + 0x8),
                            (u16)(*(u16 *)(arg0 + 0x5E) + i), data);
        if (res != 0) {
            return res;
        }
        slots[i].key = 0;
        if (data[1] != 0 && *(s32 *)data != 0 &&
            !(data[2] < *(u16 *)(arg0 + 0x62))) {
            slots[i].key = data[2];
        }
    }
    for (col = 0; col < *(u8 *)(arg0 + 0x64); col++) {
        val = col;
        res = func_8041207C(arg0, row, 0, val);
        if (res != 0 && res != 3) {
            return res;
        }
        lim = 1;
        if (val == 0) {
            lim = *(s32 *)(arg0 + 0x60);
        }
        for (i = 0; i < lim; i++) {
            data[i] = row[i];
        }
        for (i = lim; i < 0x80; i++) {
            data[i] = 3;
        }
        for (i = 0; i < *(s32 *)(arg0 + 0x50); i++) {
            s = &slots[i];
            if (s->key == val) {
                for (;;) {
                    if (s->pair < *(u16 *)(arg0 + 0x62)) {
                        break;
                    }
                    s->pair = data[(u8)s->b6];
                    s->key = data[(u8)s->b6];
                    if (s->key != val) {
                        break;
                    }
                }
            }
        }
        res = func_8041207C(arg0, data, 1, val);
        if (res != 0) {
            return res;
        }
    }
    if (changed != 0) {
        *(s32 *)arg0 |= 2;
    } else {
        *(s32 *)arg0 &= ~2;
    }
    return 0;
}
