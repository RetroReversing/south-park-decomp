typedef struct S760 {
    char pad00[0x34];
    f32 x;        /* 0x34 */
    f32 y;        /* 0x38 */
    f32 z;        /* 0x3C */
    char pad40[0x9F8];
    f32 ax;       /* 0xA38 */
    f32 ay;       /* 0xA3C */
    f32 az;       /* 0xA40 */
    f32 ang;      /* 0xA44 */
    char padA48[0x80];
    f32 t1;       /* 0xAC8 */
    f32 t2;       /* 0xACC */
    f32 t3;       /* 0xAD0 */
    f32 t4;       /* 0xAD4 */
    s32 flag;     /* 0xAD8 */
    s8 c0;        /* 0xADC */
    s8 c1;        /* 0xADD */
    s8 c2;        /* 0xADE */
    s8 c3;        /* 0xADF */
    u8 lo0;       /* 0xAE0 */
    u8 lo1;       /* 0xAE1 */
    u8 lo2;       /* 0xAE2 */
    char padAE3;
    u8 hi0;       /* 0xAE4 */
    u8 hi1;       /* 0xAE5 */
    u8 hi2;       /* 0xAE6 */
} S760;

extern f32 D_800AA068;
extern f32 D_800AA06C;
extern f32 D_800AA070;
extern f32 D_800AA074;
extern f32 D_800AA078;
extern f64 D_800AA080;
extern f32 D_800AA088;
extern f32 D_800AA08C;
extern f32 D_800AA090;
extern f32 D_800AA094;
extern f32 D_800AA098;
extern f32 D_800AA09C;
extern f32 D_800AA0A0;
extern f32 D_800AA0A4;
extern f32 D_800AA0A8;
extern f32 D_800AA0AC;
extern f32 D_800AA0B0;
extern f32 D_800AA0B4;
extern f32 D_800AA0B8;
extern f32 D_800AA0BC;
extern f32 D_800AA0C0;
extern f32 D_800AA0C4;
extern s32 D_800AB9F8;
extern f32 D_800ABA00;

f32 func_8029A900(f32);
f32 D_80299AE8(f32);
void D_80213224(f32 *, f32, f32 *, f32 *);
void D_802131C4(f32 *, f32 *, f32 *);

void func_802760F8(S760 *a) {
    f32 sp[4];
    f32 f;
    f32 x;
    f32 fs;
    f32 rate;
    f32 lo;
    f32 hi;
    f64 d;
    s32 v;

    f = a->t1;
    a->flag = 0;
    if (f != 0.0f) {
        f = f - D_800ABA00;
        a->t1 = f;
        if (f > 0.0f) {
            fs = func_8029A900(a->ang * D_800AA068);
            fs = fs * D_800AA06C;
            x = fs + D_800AA070;
            a->flag = 1;
            a->x = a->ax * x;
            a->y = a->ay * x;
            a->z = a->az * x;
            fs = a->ang;
            x = D_800ABA00 * D_800AA074;
            fs = fs + x;
            a->ang = fs;
            return;
        }
        D_80213224(&a->x, 0.3f, &a->x, &a->ax);
        D_802131C4(sp, &a->x, &a->ax);
        if (sp[0] * sp[0] + sp[1] * sp[1] + sp[2] * sp[2] < D_800AA078) {
            a->x = a->ax;
            a->y = a->ay;
            a->z = a->az;
            a->t1 = 0.0f;
        }
    }
    f = a->t2;
    if (f != 0.0f) {
        f = f - D_800ABA00;
        a->t2 = f;
        if (f > 0.0f) {
            a->flag = 1;
        } else {
            a->t2 = 0.0f;
        }
    }
    f = a->t3;
    if (f != 0.0f) {
        f = f - D_800ABA00;
        a->t3 = f;
        if (f <= 0.0f) {
            a->t3 = 0.0f;
        } else {
            a->flag = 1;
        }
    }
    f = a->t4;
    if (f != 0.0f) {
        f = f - D_800ABA00;
        a->t4 = f;
        if (f <= 0.0f) {
            a->t4 = 0.0f;
        } else {
            a->flag = 1;
        }
    }
    if (a->flag != 0) {
        d = (f64)D_800AB9F8;
        d = (f32)d;
        if (D_800AB9F8 < 0) {
            d = (f64)d + D_800AA080;
            d = (f32)d;
        }
        fs = D_800AA090;
        f = func_8029A900((f32)d * D_800AA088 * D_800AA08C) + fs;
        rate = fs - f;
        lo = (f32)a->lo0;
        hi = (f32)a->hi0;
        x = lo + (D_80299AE8(rate * D_800AA094) + fs) * ((hi - lo) * D_800AA098);
        fs = D_800AA0A0;
        if (x > D_800AA09C) {
            v = (s32)(x - D_800AA09C) | (s32)0x80000000;
        } else {
            v = (s32)x;
        }
        a->c0 = v;
        rate = fs - f;
        lo = (f32)a->lo1;
        hi = (f32)a->hi1;
        x = lo + (D_80299AE8(rate * D_800AA0A4) + fs) * ((hi - lo) * D_800AA0A8);
        if (x > D_800AA0AC) {
            v = (s32)(x - D_800AA0AC) | (s32)0x80000000;
        } else {
            v = (s32)x;
        }
        a->c1 = v;
        fs = D_800AA0B0;
        rate = fs - f;
        lo = (f32)a->lo2;
        hi = (f32)a->hi2;
        x = lo + (D_80299AE8(rate * D_800AA0B4) + fs) * ((hi - lo) * D_800AA0B8);
        if (x > D_800AA0BC) {
            v = (s32)(x - D_800AA0BC) | (s32)0x80000000;
        } else {
            v = (s32)x;
        }
        a->c2 = v;
        x = f * D_800AA0C0;
        if (x > D_800AA0C4) {
            v = (s32)(x - D_800AA0C4) | (s32)0x80000000;
        } else {
            v = (s32)x;
        }
        a->c3 = v;
    }
}
