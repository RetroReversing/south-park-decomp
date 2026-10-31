typedef struct {
    u32 w[3];
} Vec3w;

typedef struct ObjB ObjB;
typedef struct Ty Ty;

struct ObjB {
    u32 flags;          /* 0x0 */
    char pad04[0x18];
    f32 f1C, f20;       /* 0x1C, 0x20 */
    s32 unk28;          /* 0x28 */
    char pad2C[0x84];
    u8 bA;              /* 0xB0 */
};

struct Ty {
    char pad00[0x10];
    s32 f18;            /* 0x10 */
    char pad14[0x24];
    s32 f38;            /* 0x38 */
    char pad3C[0x4];
};

extern void func_8029A2CC(s32 dst, s32 arg1);
extern void D_80214218(s32 dst, s32 src);
extern void D_80213AF4(s32 dst, s32 src, s32 out);
extern void D_80213D94(s32 dst, s32 src, s32 out);
extern void D_802132D8(s32 v);
extern void D_802281F4(s32 arg0);
extern void func_8029A900(f32 a0);
extern void D_80213274(s32 dst, s32 src, s32 out);
extern void D_802131F8(s32 dst, s32 src, f32 a2);
extern void D_80213190(s32 dst, s32 src, s32 out);
extern void D_80214098(s32 out, f32 a1, s32 a2, s32 a3);
extern void D_802148C8(s32 out, s32 a1);
extern void D_8021451C(s32 a0, f32 a1, f32 a2, f32 a3);
extern void D_802145B0(s32 a0, f32 a1, f32 a2, f32 a3);
extern void D_80213A34(s32 out);
extern void D_80211240(s32 a0, s32 a1, s32 a2);
extern void D_802145E4(s32 a0, f32 a1, f32 a2, f32 a3);
extern void D_80214ED4(s32 a0);
extern void D_802137A8(s32 a0, f32 a1);
extern void D_80211B2C(s32 a0, s32 a1);
extern s32 func_80251BA4(s32 a0, s32 a1);
extern f32 func_8026D63C(s32 a0, f32 a1, f32 a2);
extern f32 func_8026B79C(s32 a0, f32 a1, f32 a2);

extern f32 D_800A94C8;
extern f32 D_800A94CC;
extern f32 D_800A94D0;
extern f32 D_800A94D4;
extern f32 D_800A94D8;
extern f32 D_800A94DC;
extern f32 D_800A94E0;
extern u32 D_800A94E8[];
extern f32 D_800A9514;
extern f32 D_800A9518;
extern f32 D_800A951C;
extern f32 D_800A9520;
extern f32 D_800A9524;
extern f32 D_800A9528;
extern f32 D_800A952C;
extern f32 D_800A9530;
extern f32 D_800A9534;
extern f32 D_800A9538;
extern f32 D_800A953C;
extern f32 D_800A9540;
extern f32 D_800A9544;
extern f32 D_800A9548;
extern f32 D_800A954C;

void func_80251D00(s32 a0, s32 a1, s32 a2, f32 a3) {
    Vec3w sp110;
    Vec3w sp130;
    Vec3w sp190;
    Vec3w sp1A0;
    Vec3w sp120;
    Vec3w sp180;
    Vec3w sp170;
    Vec3w sp160;
    Vec3w sp150;
    Vec3w sp140;
    Vec3w sp90;
    Vec3w sp50, sp10;
    s32 s4;
    s32 s1;
    f32 fs1;
    f32 fs0;
    s32 flag;
    s32 idx;
    f32 f;
    u32 t;

#define FX(i) (*(f32 *)&sp110.w[i])
#define FY(i) (*(f32 *)&sp120.w[i])

    s4 = *(s32 *)(a0 + 0xF8);
    if (*(u32 *)s4 & 8) {
        fs1 = *(f32 *)(a0 + 0x12C) * *(f32 *)(a0 + 0x130);
    } else {
        fs1 = 0.0f;
    }
    sp110 = *(Vec3w *)(a0 + 0x4);
    sp130 = *(Vec3w *)(a0 + 0x18);
    flag = *(s32 *)(a0 + 0x40);
    if (flag & 0x10000) {
        s1 = *(s32 *)(a0 + 0x110);
        switch (*(u16 *)(a0 + 0x2)) {
        case 0x68: case 0x6B: case 0x70: case 0x802: case 0x808:
        case 0x810: case 0x814: case 0x818: case 0x82F: {
            s32 aa0 = 0;
            if (*(s32 *)(s1 + 0xBC)) {
                func_8029A2CC((s32)&sp90, *(s32 *)(s1 + 0xBC) + ((*(s8 *)(a0 + 0x1A9)) << 6));
            } else {
                s32 v1 = *(s32 *)(s1 + 0xF4);
                if (v1 & 0x18000000) {
                    aa0 = *(s32 *)(s1 + 0x1CC);
                }
                if (aa0 != 0 && *(s32 *)(aa0 + 0xA54) != 0) {
                    if (v1 & 0x18000000) {
                        D_80214218((s32)&sp90, *(s32 *)(aa0 + 0xA54) + 0x16C);
                    } else {
                        D_80214218((s32)&sp90, s1 + 0x78);
                    }
                } else {
                    D_80214218((s32)&sp90, s1 + 0x78);
                }
            }
            D_80213AF4((s32)&sp90, a0 + 0x34, (s32)&sp110);
            D_80213D94((s32)&sp90, a0 + 0x18, (s32)&sp130);
            *(Vec3w *)(a0 + 0x4) = sp110;
            *(Vec3w *)(a0 + 0x14C) = sp130;
            D_802132D8((s32)&sp130);
            if (*(u16 *)(a0 + 0x2) == 0x70) {
                D_802281F4(*(s32 *)(a0 + 0x110));
                *(f32 *)(a0 + 0x130) *= D_800A94C8;
                f = *(f32 *)(a0 + 0x130) * *(f32 *)(a0 + 0x130);
                f = FX(1) + f;
                sp110.w[1] = *(u32 *)&f;
            }
            break;
        }
        }
        *(s32 *)(a0 + 0x10) = *(s32 *)(s1 + 0x10);
    }
    if (flag & 0x200000) {
        s1 = *(s32 *)(a0 + 0x108);
        if (*(s32 *)(s1 + 0xF4) & 0x18000000) {
            D_80213AF4(*(s32 *)(s1 + 0x1CC) + 0x16C, a0 + 0x34, (s32)&sp110);
        } else {
            D_80213AF4(s1 + 0x78, a0 + 0x34, (s32)&sp110);
        }
        *(Vec3w *)(a0 + 0x4) = sp110;
    }
    if (!(flag & 0x10000) && *(f32 *)(a0 + 0x118) > 0.0f) {
        f32 f118 = *(f32 *)(a0 + 0x118);
        f32 f184 = *(f32 *)(a0 + 0x184);
        f32 f188 = *(f32 *)(a0 + 0x188);
        fs0 = 0.0f;
        idx = *(s8 *)(*(s32 *)(s4 + 0x28) + 0x18);
        if (f118 < (f32)idx) {
            fs0 = f118 / (f32)idx;
        }
        sp190 = *(Vec3w *)(a0 + 0x14C);
        if (f184 > fs0) {
            FX(0) = fs0;
            FX(1) = D_800A94D0;
            FX(2) = fs0;
            D_80213274((s32)&sp180, (s32)&sp120, (s32)&sp190);
            func_8029A900(*(f32 *)(a0 + 0x174));
            D_802131F8((s32)&sp1A0, (s32)&sp180, -f184 * f184 * fs0);
            D_80213190((s32)&sp110, (s32)&sp180, (s32)&sp1A0);
        }
        if (f188 < fs0) {
            FX(0) = fs0;
            FX(1) = D_800A94D4;
            FX(2) = fs0;
            D_80213274((s32)&sp170, (s32)&sp120, (s32)&sp190);
            D_80213274((s32)&sp180, (s32)&sp170, (s32)&sp190);
            func_8029A900(*(f32 *)(a0 + 0x178));
            D_802131F8((s32)&sp1A0, (s32)&sp180, -f188 * f188 * fs0);
            D_80213190((s32)&sp110, (s32)&sp180, (s32)&sp1A0);
        }
    }
    if (*(s32 *)(*(s32 *)(s4 + 0x28) + 0x10) != 0) {
        if (*(s8 *)(a0 + 0x1A8) == -7) {
            D_80214098((s32)&sp10, *(f32 *)(a0 + 0x158) + D_800A94D8,
                       *(s32 *)(a0 + 0x15C), *(s32 *)(a0 + 0x160));
            if ((*(f32 *)&sp130.w[0] == 0.0f && *(f32 *)&sp130.w[1] == 0.0f && *(f32 *)&sp130.w[2] == 0.0f) || (flag & 0x20000)) {
                sp160 = *(Vec3w *)(a0 + 0x14C);
            } else {
                sp160 = sp130;
            }
            D_802132D8((s32)&sp160);
            sp120.w[0] = 0;
            FX(1) = D_800A94DC;
            sp120.w[2] = 0;
            D_80213274((s32)&sp140, (s32)&sp120, (s32)&sp160);
            D_80213274((s32)&sp150, (s32)&sp140, (s32)&sp160);
            D_80213A34((s32)&sp50);
            sp50.w[0] = sp140.w[0];
            sp50.w[1] = sp140.w[1];
            sp50.w[2] = sp140.w[2];
            sp50.w[4] = sp150.w[0];
            sp50.w[5] = sp150.w[1];
            sp50.w[6] = sp150.w[2];
            sp50.w[8] = sp160.w[0];
            sp50.w[9] = sp160.w[1];
            sp50.w[10] = sp160.w[2];
            D_80211240((s32)&sp90, (s32)&sp10, (s32)&sp50);
        } else {
            D_80214098((s32)&sp90, *(f32 *)(a0 + 0x15C) + D_800A94E0,
                       *(s32 *)(a0 + 0x158), *(s32 *)(a0 + 0x160));
        }
    } else {
        s32 g = *(s32 *)(*(s32 *)(s4 + 0x28) + 0x10);
        f32 a, b;
        D_802148C8((s32)&sp90, *(s32 *)(a0 + 0x160));
        if (g == 0) {
            a = -*(f32 *)(a0 + 0x158);
        } else {
            a = 0.0f;
        }
        if (g == 0) {
            b = -*(f32 *)(a0 + 0x15C);
        } else {
            b = 0.0f;
        }
        D_8021451C((s32)&sp90, a, b, 0.0f);
    }
    fs0 = 0.0f;
    if (fs1 != 0.0f) {
        D_8021451C((s32)&sp90, 0.0f, fs1, 0.0f);
        D_802145B0((s32)&sp90, 0.0f, -fs1, 0.0f);
    }
    flag &= 0xFFBFFFFF;
    *(s32 *)(a0 + 0x40) = flag;
    idx = *(s8 *)(a0 + 0x1A8) + 8;
    switch (idx & 0xFF) {
    case 0:
        f = *(f32 *)(a0 + 0x14C) * D_800A9514;
        f = FX(0) + f;
        sp110.w[0] = *(u32 *)&f;
        f = *(f32 *)(a0 + 0x150) * D_800A9514;
        f = FX(1) + f;
        sp110.w[1] = *(u32 *)&f;
        f = *(f32 *)(a0 + 0x154) * D_800A9514;
        f = FX(2) + f;
        sp110.w[2] = *(u32 *)&f;
        break;
    case 1:
        if (!*(u8 *)(s4 + 0xA)) break;
        {
            f32 r;
            fs0 = D_800A9518;
            r = func_8026D63C(*(s32 *)(a0 + 0x10), FX(0), FX(2)) + fs0;
            if (r > FX(1)) {
                sp110.w[1] = *(u32 *)&r;
            } else {
                r = func_8026D63C(*(s32 *)(a0 + 0x10), FX(0), FX(2)) + fs0;
                sp110.w[1] = *(u32 *)&r;
            }
        }
        break;
    case 2:
        if (!*(u8 *)(s4 + 0xA)) break;
        {
            f32 r = func_8026D63C(*(s32 *)(a0 + 0x10), FX(0), FX(2));
            if (*(u32 *)s4 & 0x400) {
                if (FX(1) < r + D_800A951C) {
                    sp110.w[1] = *(u32 *)&r;
                    *(s32 *)(a0 + 0x40) |= 0x400000;
                }
            } else {
                if (r + D_800A9520 >= FX(1)) {
                    sp110.w[1] = *(u32 *)&r;
                }
            }
        }
        break;
    case 3:
    case 4:
        if (!*(u8 *)(s4 + 0xA)) break;
        {
            f32 r;
            fs0 = D_800A9524;
            r = func_8026B79C(*(s32 *)(a0 + 0x10), FX(0), FX(2)) - fs0;
            if (r < FX(1)) {
                sp110.w[1] = *(u32 *)&r;
            } else {
                r = func_8026B79C(*(s32 *)(a0 + 0x10), FX(0), FX(2)) - fs0;
                sp110.w[1] = *(u32 *)&r;
            }
        }
        break;
    default:
        f = FX(1) + fs1;
        sp110.w[1] = *(u32 *)&f;
        break;
    }
    D_802137A8((s32)&sp110, 50.0f);
    if (a2 != 0) {
        if (*(u32 *)s4 & 4) {
            s32 o = *(s32 *)(*(s32 *)(s4 + 0x28) + 0x20);
            f32 r = fs1 - D_800A9528;
            if (r < 0.0f) {
                fs0 = 0.0f;
            } else if (r * D_800A952C > D_800A9530) {
                fs0 = D_800A9530;
            } else if (r < 0.0f) {
                fs0 = 0.0f;
            } else {
                fs0 = r * D_800A9534;
            }
            fs0 = (*(f32 *)(o + 0x1C) + (*(f32 *)(o + 0x20) - *(f32 *)(o + 0x1C)) * fs0) * fs1 * D_800A9538;
        } else {
            fs0 = D_800A953C;
        }
    } else {
        fs0 = D_800A9540;
    }
    if (*(s32 *)(*(s32 *)(s4 + 0x28) + 0x10) != 0) {
        f32 s = fs0 * *(f32 *)(a0 + 0x130);
        D_802145E4((s32)&sp90, *(f32 *)(a0 + 0x128) * s * D_800A9544,
                   *(f32 *)(a0 + 0x12C) * s * D_800A9544, s * D_800A9548);
        D_80214ED4((s32)&sp90);
    } else {
        f32 s = fs0 * *(f32 *)(a0 + 0x130);
        D_802145E4((s32)&sp90, *(f32 *)(a0 + 0x128) * s, *(f32 *)(a0 + 0x12C) * s,
                   s * D_800A954C);
    }
    {
        s32 tmp = func_80251BA4(a0, a1);
        if (tmp) {
            D_80211240((s32)&sp90, (s32)&sp90, tmp);
        } else {
            D_80214218((s32)&sp90, (s32)&sp90);
        }
    }
    D_802145B0((s32)&sp90, FX(0), FX(1), FX(2));
    D_80211B2C((s32)&sp90, a1);
}
