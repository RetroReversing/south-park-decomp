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
s32 func_80403914();

typedef struct {
    s8 count;          /* 0x00 */
    char pad[0x15];
    s8 idx;            /* 0x16 */
    char pad2[0x11];
} Ent;

extern Ent D_800D77EE;
extern u8 D_800ADDBA;
extern u8 D_800D7804[];

s32 func_80406464(Ent *arg0, s8 *arg1) {
    s32 counts[20];
    s32 i;
    s32 j;
    Ent *e;
    s32 v;

    D_800D77EE.count = func_80403914(arg1, D_800D77EE.count, 1, 2, D_800ADDBA, 1);
    i = 0x13;
    {
        s32 *p = &counts[19];
        do {
            *p = 0;
            i--;
            p--;
        } while (i >= 0);
    }
    if (D_800D77EE.count > 0) {
        e = &D_800D77EE;
        j = 0;
        do {
            i = 0;
            if (counts[e->idx] != 0) {
                s32 *p = counts;
                for (i = 0; i < 4; i++) {
                    if (*p == 0) {
                        D_800D7804[j] = i;
                        goto done;
                    }
                    p++;
                }
            }
        done:
            v = counts[e->idx] + 1;
            e->idx;
            counts[e->idx] = v;
            e = (Ent *)((u8 *)e + 0x12);
            j += 0x12;
            i = 0;
        } while (j < D_800D77EE.count);
    }
    return 0;
}
