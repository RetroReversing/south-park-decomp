typedef struct Vec3 { f32 x, y, z; } Vec3;

typedef struct Obj78764 {
    char pad00[0x00];
    f32 *m;            /* 0x00 */
    char pad04[0x04];
    f32 unk08;         /* 0x08 */
    char pad0C[0x40];
    Vec3 unk4C;        /* 0x4C */
    f32 unk58;         /* 0x58 */
    f32 unk5C;         /* 0x5C */
    f32 unk60;         /* 0x60 */
    Vec3 unk64;        /* 0x64 */
    Vec3 unk70;        /* 0x70 */
    f32 unk7C;         /* 0x7C */
    f32 unk80;         /* 0x80 */
    s32 unk84;         /* 0x84 */
    s32 unk88;         /* 0x88 */
} Obj78764;

extern f32 D_800AA150;
extern void D_80213224(f32 *out, f32 a1, void *a2, void *a3);
extern f32 func_8029AA80(f32 x);
extern s32 func_80277EF8(void *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6);

s32 func_80278764(Obj78764 *arg0, Vec3 *arg1, f32 arg2, s32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, f32 arg8, s32 arg9) {
    f32 sp20, sp28, sp30, sp38, sp40, sp48;
    f32 sp50[4];
    f32 sp60, sp64, sp68;
    f32 dx, dz;
    f32 len, inv, ux, uz, rem;
    f32 lx, lz, disc, t;

    if (arg0->unk84 != 2 ||
        arg0->unk7C != arg2 ||
        arg0->unk64.x != arg1->x ||
        arg0->unk64.y != arg1->y ||
        arg0->unk64.z != arg1->z) {
        dx = arg1->x - arg0->m[1];
        dz = arg1->z - arg0->m[3];
        if (arg6 == 0 || !((dx * arg0->unk58 + dz * arg0->unk60) < 0.0f)) {
            len = func_8029AA80(arg0->unk58 * arg0->unk58 + arg0->unk60 * arg0->unk60);
            if (len != 0.0f) {
                inv = D_800AA150 / len;
                ux = arg0->unk58 * inv;
                uz = arg0->unk60 * inv;
                rem = dx * ux + dz * uz;
                lz = dz - uz * rem;
                lx = dx - ux * rem;
                disc = arg2 * arg2 - (lx * lx + lz * lz);
                if (disc > 0.0f) {
                    t = (rem - func_8029AA80(disc)) * inv;
                    if (!(t < 0.0f) || arg9 != 0) {
                        if (t < arg0->unk08) {
                            D_80213224(sp50, t, arg0->m + 1, &arg0->unk4C);
                            if (arg3 == 0 || (!(arg4 < sp50[1]) && !(sp50[1] < arg5))) {
                                sp64 = 0;
                                sp60 = sp50[0] - arg1->x;
                                sp68 = sp50[2] - arg1->z;
                                if (func_80277EF8(arg0, &sp60, sp50, 0, arg7, arg8, 1) != 0) {
                                    arg0->unk88 = 2;
                                    arg0->unk70 = *arg1;
                                    arg0->unk80 = arg2;
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
