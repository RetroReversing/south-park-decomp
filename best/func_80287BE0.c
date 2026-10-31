extern f32 D_802157FC(f32,f32,f32);
extern f32 D_80215964(f32,f32,s32);
extern s32 D_80241C54(void*,void*,s32,f32);
extern s32 D_80246A4C(void);
extern f32 D_800AA5E0,D_800AA5E4,D_800AA5E8,D_800AA5EC,D_800AA5F0,D_800AA5F4,D_800AA5F8,D_800AA5FC,D_800AA600;
void func_80287BE0(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 temp_fv0,var_fa1,var_fa1_2,var_fv0,var_fv0_2,var_fv0f;
    if (D_80246A4C()==1) {
        var_fa1=-*(f32*)((u8*)arg0+0x1C)*D_800AA5E0;
        var_fv0=D_800AA5E4;
        if ((var_fv0<var_fa1)||(var_fv0=D_800AA5E8,var_fa1<var_fv0)) var_fa1=var_fv0;
        *(f32*)((u8*)arg1+0x154)=D_80215964(*(f32*)((u8*)arg1+0x154),var_fa1,0x3DB2B8C4);
        var_fa1_2=*(f32*)((u8*)arg2+0x4C)*D_800AA5EC;
        var_fv0_2=D_800AA5F0;
        if ((var_fv0_2<var_fa1_2)||(var_fv0_2=D_800AA5F4,var_fa1_2<var_fv0_2)) var_fa1_2=var_fv0_2;
        *(f32*)((u8*)arg1+0x158)=D_80215964(*(f32*)((u8*)arg1+0x158),var_fa1_2,0x3E32B8C4);
        temp_fv0=D_802157FC(*(f32*)((u8*)arg0+0x1C),*(f32*)((u8*)arg2+0x60),*(f32*)((u8*)arg3+0x18)*D_800AA5F8);
        var_fv0f=D_800AA5FC;
        *(f32*)((u8*)arg0+0x1C)=temp_fv0;
        if ((var_fv0f<temp_fv0)||(var_fv0f=D_800AA600,temp_fv0<var_fv0f)) *(f32*)((u8*)arg0+0x1C)=var_fv0f;
    }
    D_80241C54(arg0,arg1,0x3E567751,*(f32*)((u8*)arg2+0x4C));
}
