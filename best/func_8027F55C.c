f32 func_80280A14(f32, s32);
f32 func_80280A30(f32, f32, s32);
s32 func_80280B98(s32 *, s32);
f32 func_80280F60(s32 *, s32, f32, f32);
extern f64 D_800AA260;
extern f64 D_800AA268;
extern s32 D_800F4E18;
extern f32 D_800F4E1C;
extern s32 D_800F4E20;

void func_8027F55C(s32 *arg0, f32 *arg1, s32 arg2) {
int __repair_literal;

    s32 sp10;
    s32 pad[3];
    f32 sp14;
    f32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    f32 fs0;
    f32 fs0f;
    s32 i;
    s32 t;

    sp20 = *arg0;
    if (D_800F4E18 != 0) {
        sp24 = func_80280B98(&sp20, 0x20);
        fs0f = *(f32 *)&sp24;
        sp28 = func_80280B98(&sp20, 0x20);
        fs0 = *(f32 *)&sp28;
    } else {
        sp24 = func_80280B98(&sp20, 6);
        t = sp24;
        fs0f = func_80280A14((f32)(f64)t, 6);
        sp28 = func_80280B98(&sp20, 6);
        fs0 = func_80280A14((f32)(f64)sp28, 6);
        fs0f = func_80280A30(fs0f, D_800F4E1C, D_800F4E20);
        fs0 = func_80280A30(fs0, D_800F4E1C, D_800F4E20);
    }
    sp14 = fs0f;
    sp18 = fs0 - fs0f;
    sp10 = func_80280B98(&sp20, 6);
    i = 0;
__repair_literal = 0;

    if (arg2 > __repair_literal) {
        do {
            *arg1 = func_80280F60(&sp20, sp10, sp14, sp18);
            i++;
            arg1 += 4;
        } while (i < arg2);
    }
    *arg0 = sp20;
}
