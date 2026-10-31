typedef struct S_arg1 {
    u8 unk_00;
    u8 pad01[3];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 pad24[0x10];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    u8 pad40[0x30];
    f32 unk_70;
    u8 pad74[0x64];
    u16 unk_D8;
} S_arg1;

typedef struct S_arg0 {
    u8 pad00[8];
    u8 *unk_08;
} S_arg0;

extern s32 D_800B2608;
extern u8 D_800CCA80[];
extern s32 D_80203A94(u8 *, s32);
extern void D_80216A68(s32, s32, s32, s32, s32, s32, s32, f32, s32, s32, s32,
                       s32, s32, s32, s32, s32, s32, s32, s32);
extern void D_8021E710(s32, s32);
extern void D_8021E930(s32, s32);

u8 *func_8025A7D0(S_arg0 *arg0, S_arg1 *arg1)
{
    u8 temp_s0;
    u8 temp_s0_2;
    u16 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    f32 temp_fs0;
    s32 var_s1;
    u8 *obj;

    temp_s0 = arg1->unk_00;
    temp_s3 = arg1->unk_D8;
    temp_s4 = arg1->unk_14;
    temp_s5 = arg1->unk_10;
    temp_fs0 = arg1->unk_70;

    var_s1 = temp_s0;
    if (var_s1 == -1) {
        var_s1 = D_80203A94(D_800CCA80, temp_s3);
        temp_s0_2 = temp_s0;
        if (var_s1 == temp_s0_2) {
            return NULL;
        }
    }

    obj = arg0->unk_08;
    if (obj != NULL) {
        D_8021E930((s32)arg0 + 8, (s32)obj);
        D_8021E710((s32)arg0 + 0x1C, (s32)obj);
        *(s32 *)(obj + 0x370) = 0;
    }
    if (obj == NULL) {
        return NULL;
    }

    D_80216A68((s32)obj, var_s1, temp_s3, D_800B2608, temp_s4, -1, temp_s5,
               temp_fs0, arg1->unk_04, arg1->unk_08, arg1->unk_0C, 0x04000000,
               arg1->unk_34, arg1->unk_38, arg1->unk_3C,
               arg1->unk_18, arg1->unk_1C, arg1->unk_20, 0);
    return obj;
}
