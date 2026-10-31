typedef struct { s32 a, b, c, d, e; } Sub;

typedef struct {
    u8 pad0[0x18];
    Sub s1;     /* 0x18 */
    Sub s2;     /* 0x2C */
    Sub s3;     /* 0x40 */
} Big;

s32 func_8025AA28(void *p);

s32 func_80260384(Big *p) {
    s32 r1 = func_8025AA28(&p->s1);
    s32 r2 = func_8025AA28(&p->s2);
    s32 r3 = func_8025AA28(&p->s3);
    s32 v = 0;
    if (r2 != 0) {
        if (r3 != 0) {
            v = (u32)r1 < (u32)r3;
        }
    }
    return v;
}
