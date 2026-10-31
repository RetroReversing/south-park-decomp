typedef struct {
    s32 v0;      /* 0x0 */
    char pad0[4];
    s32 v8;      /* 0x8 */
    char pad1[4];
    s32 v10;     /* 0x10 */
} T95914;

typedef struct Elem {
    struct Elem *next;
    char pad[4];
    s32 count;   /* 0x8 */
    char pad2[4];
    s32 id;      /* 0x10 */
} Elem;

s32 func_802A0728(s32);
void alUnlink(void *);
void alLink(void *, void *);
s32 func_80296D28(void);
s32 func_8029597C(void);

extern s32 D_800B37B0;

void func_80295AB8(s32 arg0) {
    s32 *p = &D_800B37B0;
    if (*p == 0) {
        *p = arg0;
        func_80296D28();
    }
}

s32 func_80295914(T95914 *arg0, s32 *arg1) {
    u32 temp_s1;
    s32 tmp;
    s32 ret;

    temp_s1 = arg0->v8;
    tmp = arg0->v0 + arg0->v10;
    ret = 0;
    if (temp_s1 < (u32)tmp) {
        *arg1 = func_8029597C();
        arg0->v8 = temp_s1;
        ret = 1;
    }
    return ret;
}

void func_80296248(void *arg0, s32 arg1) {
    s32 temp_s3;
    Elem *temp_s1;
    Elem *var_s0;

    var_s0 = ((Elem **)arg0)[2];
    temp_s3 = func_802A0728(1);
    if (var_s0 != 0) {
        do {
            temp_s1 = var_s0->next;
            if (var_s0->id == arg1) {
                if (temp_s1 != 0) {
                    temp_s1->count = temp_s1->count + var_s0->count;
                }
                alUnlink(var_s0);
                alLink(var_s0, arg0);
            }
            var_s0 = temp_s1;
        } while (var_s0 != 0);
    }
    func_802A0728(temp_s3);
}
