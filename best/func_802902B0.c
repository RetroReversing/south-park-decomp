#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
u8 func_802901F0();
s32 func_80291528();
extern u8 D_800F5C38[];
extern u8 D_800F5C43[];
extern u8 *D_800F5F08;
extern u8 *D_800F5F0C;
extern u8 D_800F5F90[];
extern u8 D_800F5F92[];
extern u8 D_800F5F93[];
extern u32 D_80110000;
void func_802902B0(u16 arg0, u8 *arg1, void *arg2, u8 *arg3) {
    s32 i, j, k;
    u8 *p;
    u32 t;
    u8 *q;
    u8 *n;
    u8 *prev;
    u8 *next;
    s32 a;
    s32 b;
    u32 addr;
    if (arg0 & 1) p = arg3 - 1; else p = arg3;
    i = p[0];
    if (i != 255 && D_800F5C43[i * 16] != 255) {
        t = *(volatile u8 *)(D_800F5C43 + i * 16);
        D_800F5F93[t * 4] = arg1[10];
    } else {
        i = p[1];
        if (i != 255 && D_800F5C43[i * 16] != 255) {
            t = *(volatile u8 *)(D_800F5C43 + i * 16);
            D_800F5F92[t * 4] = arg1[10];
        } else {
            t = func_802901F0(255);
            a = t << 16;
            if (arg0 & 1) {
                j = a >> 14;
                D_800F5F93[j] = arg1[10];
                i = p[0];
                if (i != 255) {
                    q = D_800F5C38 + i * 16;
                    D_800F5F92[j] = q[10];
                    next = *(u8 **)(q + 4);
                    q[11] = t;
                    if (next) *(u8 **)next = *(u8 **)q;
                    else {
                        D_800F5F08 = *(u8 **)q;
                        *(u8 **)(*(u8 **)q + 4) = 0;
                    }
                    prev = *(u8 **)q;
                    if (prev) *(u8 **)(prev + 4) = *(u8 **)(q + 4);
                    else {
                        D_800F5F0C = *(u8 **)(q + 4);
                        *(u8 **)(*(u8 **)(q + 4)) = 0;
                    }
                    *(u8 **)q = 0;
                    *(u8 **)(q + 4) = D_800F5F0C;
                    if (D_800F5F0C) *(u8 **)D_800F5F0C = q;
                    D_800F5F0C = q;
                    if (!D_800F5F08) D_800F5F08 = q;
                } else goto donealloc;
            } else {
                j = a >> 14;
                D_800F5F92[j] = arg1[10];
                i = p[1];
                if (i != 255) {
                    q = D_800F5C38 + i * 16;
                    D_800F5F93[j] = q[10];
                    next = *(u8 **)(q + 4);
                    q[11] = t;
                    if (next) *(u8 **)next = *(u8 **)q;
                    else {
                        D_800F5F08 = *(u8 **)q;
                        *(u8 **)(*(u8 **)q + 4) = 0;
                    }
                    prev = *(u8 **)q;
                    if (prev) *(u8 **)(prev + 4) = *(u8 **)(q + 4);
                    else {
                        D_800F5F0C = *(u8 **)(q + 4);
                        *(u8 **)(*(u8 **)(q + 4)) = 0;
                    }
                    *(u8 **)q = 0;
                    *(u8 **)(q + 4) = D_800F5F0C;
                    if (D_800F5F0C) *(u8 **)D_800F5F0C = q;
                    D_800F5F0C = q;
                    if (!D_800F5F08) D_800F5F08 = q;
                }
            }
donealloc:
            j = (t << 16) >> 14;
            *(u16 *)(D_800F5F90 + j) = arg0 & 0xFFFE;
        }
    }
    *(s16 *)(arg1 + 8) = arg0;
    arg1[11] = t;
    *arg3 = arg1[10];
    k = (s16)t * 4;
    b = D_800F5F92[k];
    if (b != 255) addr = (D_80110000 & 0x03ffffff) + (b << 12); else addr = -1;
    b = D_800F5F93[(t << 16) >> 14];
    if (b != 255) {
        a = (t << 16) >> 14;
        b = D_800F5F93[a];
        addr = addr; 
        func_80291528((s16)t, 0, *(u16 *)(D_800F5F90 + k) << 12, addr,
                      7);
    } else {
        func_80291528((s16)t, 0, *(u16 *)(D_800F5F90 + k) << 12, addr, 7);
    }
}
