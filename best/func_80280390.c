s32 func_80280154(void *);
f32 func_80280A14(f32, s32);
f32 func_80280A30(f32, f32, s32);
s32 func_80280B98(s32 *, s32);
extern f64 D_800AA2A0;
extern f64 D_800AA2A8;
extern s32 D_800F4E18;
extern f32 D_800F4E1C;
extern s32 D_800F4E20;
#define FIELD(p,t,o) (*(t *)((char *)(p)+(o)))
void func_80280390(void *arg0, s32 *arg1) {
int __repair_literal;

    s32 sp10, sp14, sp18;
    f32 temp_fs0, temp_fs0f, var_fv0;
    f64 var_fa0, var_fa0_2;
    s32 var_fs0f;
    sp10=*arg1;
    FIELD(arg0,s32,0x2C)=func_80280B98(&sp10,6);
    if(D_800F4E18!=0){
        sp14=func_80280B98(&sp10,0x20);
        var_fs0f=sp14;
        sp18=func_80280B98(&sp10,0x20);
        var_fv0=*(f32*)&sp18-*(f32*)&var_fs0f;
    } else {
        sp14=func_80280B98(&sp10,6);
        var_fa0=(f64)sp14;
        sp18=func_80280B98(&sp10,6);
__repair_literal = 0;

        if(sp14<__repair_literal)var_fa0+=D_800AA2A0;
        var_fa0_2=(f64)sp18;
        temp_fs0f=func_80280A14((f32)var_fa0,6);
        if(sp18<0)var_fa0_2+=D_800AA2A8;
        temp_fs0=func_80280A14((f32)var_fa0_2,6);
        var_fs0f=(s32)func_80280A30(temp_fs0f,D_800F4E1C,D_800F4E20);
        var_fv0=func_80280A30(temp_fs0,D_800F4E1C,D_800F4E20)-*(f32*)&var_fs0f;
    }
    FIELD(arg0,s32,4)=var_fs0f;
    FIELD(arg0,f32,8)=var_fv0;
    FIELD(arg0,s32,0)=func_80280B98(&sp10,6);
    FIELD(arg0,s32,0x28)=0;
    FIELD(arg0,s32,0x24)=0;
    FIELD(arg0,s32,0xC)=sp10;
    func_80280154(arg0);
    *arg1=sp10;
}
