typedef struct Node {
    char pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    char pad10[0x4];
    void *unk14;
    char pad18[0xDC];
    s32 unkF4;
    f32 unkF8;
    char padFC[4];
    s16 unk100;
    char pad102[38];
    s16 unk128;
    char pad12A[0x6];
    f32 unk130;
} Node;

typedef struct Node2 {
    char pad0[0xB3];
    s8 unkB3;
} Node2;

extern s32 D_80200528(void *arg0, Node *arg1);
extern void D_80203F74(void *arg0, Node *arg1, s32 arg2);
extern f32 D_800A92E4;
extern char D_800CCA80[];

void func_80263BAC(Node *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_8024C898(Node *arg0, Node2 *arg1) {
    s8 *temp_s1;
    f32 temp_fv0f;
    f32 var_fv0;
    f32 var_fv0f;
    s32 temp_v1_2;
    s8 temp_v1;

    temp_s1 = (s8 *)arg0->unk14 + 0x14;
    if ((D_80200528(&D_800CCA80, arg0) ^ 1) == 0) {
        temp_v1 = temp_s1[9];
        if (temp_v1 != -1) {
            temp_v1_2 = arg0->unk100;
            temp_fv0f = (f32) temp_v1 * D_800A92E4;
            if (temp_v1_2 < 3) {
                if (arg0->unkF4 & 0x20000) {
                    var_fv0 = (f32) arg0->unk128 * temp_fv0f;
                    var_fv0f = arg0->unk130;
                } else {
                    goto block_7;
                }
            } else {
                var_fv0 = (f32) temp_v1_2 * temp_fv0f;
                var_fv0f = arg0->unkF8;
            }
            if (var_fv0 <= var_fv0f) {
block_7:
                func_80263BAC(arg0, arg0, 7, arg0->unk4, arg0->unk8, arg0->unkC, 0, 0);
                D_80203F74(&D_800CCA80, arg0, 0);
            }
        }
    }
    if (arg1->unkB3 != 0) {
        if ((D_80200528(&D_800CCA80, arg0) ^ 1) == 0 && !(arg0->unkF4 & 0x20000)) {
            func_80263BAC(arg0, arg0, 7, arg0->unk4, arg0->unk8, arg0->unkC, 0, 0);
            D_80203F74(&D_800CCA80, arg0, 0);
        }
    }
}
