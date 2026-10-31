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
void func_80258180();
void func_8025841C();
void func_80258900();
void func_802593D8();
void func_8029DC78();
void func_8029DDA0();

typedef struct Node {
    struct Node *next;
    void *unk4;
} Node;

void func_80259020(void *arg0) {
    void *node;
    s32 msg;

    for (;;) {
        while (1) {
            func_8029DC78((char *)arg0 + 0x40, &msg, 1);
            switch (msg) {
            case 6:
                func_802593D8(arg0);
                break;
            case 0x29A:
                func_80258180(arg0);
                break;
            case 0x29B:
                func_8025841C(arg0);
                break;
            case 0x29C:
                func_80258900(arg0);
                break;
            case 0x29D:
                node = *(void **)((char *)arg0 + 0x2E0);
                if (node != NULL) {
                    do {
                        func_8029DDA0(*(void **)((char *)node + 4), (char *)arg0 + 0x20, 0);
                        node = *(void **)node;
                    } while (node != NULL);
                }
                break;
            }
        }
    }
}
