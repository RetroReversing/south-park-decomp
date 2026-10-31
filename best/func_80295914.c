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

s32 func_802A0728();
void alUnlink();
void alLink();
s32 func_8029597C();

s32 func_80295914(T95914 *arg0, s32 *arg1) {
    u32 temp_s1;
    s32 ret;

    temp_s1 = arg0->v8;
    if (temp_s1 < (u32)(arg0->v0 + arg0->v10)) {
        *arg1 = func_8029597C();
        arg0->v8 = temp_s1;
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

void func_80296248(void *arg0, s32 arg1) {
    s32 saved;
    Elem *next;
    Elem *cur;

    cur = ((Elem **)arg0)[2];
    saved = func_802A0728(1);
    while (cur != 0) {
        next = cur->next;
        if (cur->id == arg1) {
            if (next != 0) {
                next->count += cur->count;
            }
            alUnlink(cur);
            alLink(cur, arg0);
        }
        cur = next;
    }
    func_802A0728(saved);
}
