extern u32 D_800AAE10[];
extern f32 D_800AAE50;
extern f64 D_800AAE58[2];
extern f64 D_800AAE60[2];
extern f64 D_800AAE68[2];
extern f64 D_800AAE70[2];
extern f64 D_800AAE78[2];
extern f64 D_800AAE80[2];
extern f64 D_800AAE88[2];
extern f64 D_800AAE90[2];
extern f64 D_800AAE98[2];
extern f64 D_800AAEA0[2];
extern f64 D_800AAEA8[2];
extern f64 D_800AAEB0[2];
extern f64 D_800AAEB8[2];

f64 fabs(f64 x);

typedef struct {
    f64 d[4];
    f32 f;
    f32 pad;
} Local;

typedef struct {
    u32 w[4];
} Quad;

s16 func_80298510(f64 arg0, f64 arg1, s32 arg4, s16 *arg5) {
    f32 base;
    f64 temp_fa1;
    f64 temp_fa0;
    f64 rat;
    f64 var_fv0;
    Local local;
    s32 is;
    Quad *src;
    Quad *dst;

    base = D_800AAE50;
    rat = base / (f32)arg4;

    if (arg4 == 0) {
        if (arg0 <= arg1) {
            *arg5 = 0xFFFF;
            return 0x7FFF;
        }
        *arg5 = 0;
        return 0;
    }

    if (arg1 < D_800AAE58[0]) {
        arg1 = D_800AAE58[0];
    }
    if (arg0 <= D_800AAE60[0]) {
        arg0 = arg1;
    }

    src = (Quad *)D_800AAE10;
    dst = (Quad *)local.d;
    do {
        *dst++ = *src++;
    } while (src != (Quad *)D_800AAE10 + 4);

    is = (s32)(D_800AAE68[0] * rat);
    temp_fa0 = arg1 / arg0;
    local.f = 0.0f;

    if (temp_fa0 != D_800AAE70[0]) {
        var_fv0 = fabs(temp_fa0);
        if (D_800AAE78[0] <= var_fv0) {
            do {
                var_fv0 *= D_800AAE80[0];
                local.f += 1.0f;
            } while (D_800AAE78[0] <= var_fv0);
        }
        if (var_fv0 < D_800AAE88[0]) {
            do {
                var_fv0 += var_fv0;
                local.f -= 1.0f;
            } while (var_fv0 < D_800AAE88[0]);
        }
        if (D_800AAE90[0] < temp_fa0) {
            temp_fa0 = var_fv0;
        } else {
            temp_fa0 = -var_fv0;
        }
    }

    {
        f64 a;
        f64 m;
        f64 x;
        s32 n;

        x = D_800AAE98[0] * temp_fa0;
        a = local.d[(s32)x - 8];
        a = a + (f64)local.f;
        a = a * D_800AAEA0[0];
        a = a / D_800AAEA8[0];
        a = a + D_800AAEB0[0];
        m = D_800AAE98[0];
        n = is;
        while (n != 0) {
            if (n & 1) {
                m *= a;
            }
            n >>= 1;
            a *= a;
        }
        a = m * m;
        a = a * a;
        a = a * a;
        *arg5 = (s16)(s32)(a * D_800AAEB8[0]);
        return (s16)(s32)(a * D_800AAEB8[0]);
    }
}
