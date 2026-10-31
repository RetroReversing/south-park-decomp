extern void func_802131D0(V3 *dst, V3 *a, V3 *b);
extern s32 func_80277EF8(void *a0, V3 *a1, void *a2, void *a3, s32 a4, s32 a5, s32 a6);
extern s32 D_800AA198[];
extern void *D_800F4864;

typedef struct S_arg0 {
    char pad0[4];
    u8 *unk4;
    f32 unk8;
    char padC[0x28];
    void *unk34;
    void *unk38;
    void *unk3C;
    void *unk40;
    void *unk44;
    void *unk48;
    char pad4C[0xC];
    f32 unk58;
    f32 unk5C;
    f32 unk60;
} S_arg0;

s32 func_8027B970(S_arg0 *a0, u8 *arg1, void *arg2, V3 *arg3, V3 *a5, V3 *arg4, u8 *arg6) {
    V3 *e54 = (V3 *)((u8 *)a5 + 0x54);
    V3 *e48 = (V3 *)((u8 *)a5 + 0x48);
    V3 *e3C = (V3 *)((u8 *)a5 + 0x3C);
    V3 *e30 = (V3 *)((u8 *)a5 + 0x30);
    V3 *e0C = (V3 *)((u8 *)a5 + 0xC);
    V3 *e24 = (V3 *)((u8 *)a5 + 0x24);
    V3 *e18 = (V3 *)((u8 *)a5 + 0x18);
    V3 *tab[6];
    f32 zero = 0.0f;
    V3 v;
    V3 w;
    V3 t;
    V3 *src;
    V3 *p;
    f32 d;
    f32 cross;
    f32 l;
    s32 found = 0;
    s32 i;
    s32 j;

    tab[0] = e54;
    tab[1] = e48;
    tab[2] = e3C;
    tab[3] = e30;
    tab[4] = e0C;
    for (i = 0; i < 6; i++) {
        switch (i) {
        case 0:
            func_802131D0(&v, e30, a5);
            break;
        case 1:
            func_802131D0(&v, a5, e24);
            break;
        case 2:
            func_802131D0(&v, e24, e18);
            break;
        case 3:
            func_802131D0(&v, e18, e0C);
            break;
        case 4:
            func_802131D0(&v, e0C, a5);
            break;
        case 5:
            func_802131D0(&v, e24, e54);
            break;
        }
        d = v.x * a0->unk58 + v.y * a0->unk5C + v.z * a0->unk60;
        if (!(d < zero))
            continue;
        func_802131D0(&w, a5, arg3);
        cross = w.x * v.x + w.y * v.y + w.z * v.z;
        if (cross == zero)
            continue;
        l = -a0->unk8 / cross;
        if (l >= a5->x)
            continue;
        t.x = a5->x + l * a0->unk58;
        t.y = a5->y + l * a0->unk5C;
        t.z = a5->z + l * a0->unk60;
        found = 1;
        p = &t;
        for (j = 0; j < 4; j++) {
            func_802131D0(&v, j == 3 ? e30 : e30 + j + 1, &t);
            func_802131D0(&w, &t, &t);
            d = v.x * w.x + v.y * w.y + v.z * w.z;
            if (d < zero)
                break;
            p++;
        }
        if (d < zero)
            continue;
        if (!func_80277EF8(a0, &v, &t, 0, a0->unk4[4], 0, 0))
            continue;
        a0->unk40 = arg4;
        a0->unk48 = (void *)arg1;
        a0->unk34 = (u8 *)D_800F4864 + 8;
        a0->unk38 = (u8 *)D_800F4864 + 4;
        a0->unk3C = (u8 *)D_800F4864 + 0x14;
        a0->unk44 = D_800F4864;
        if (arg6) {
            s32 *s = (s32 *)(arg6 + 0x300);
            s32 *dd = (s32 *)((u8 *)D_800F4864 + 0x18);
            for (j = 0; j < 0x1B; j++) {
                *dd++ = *s++;
            }
        }
        return 1;
    }
    return found;
}
