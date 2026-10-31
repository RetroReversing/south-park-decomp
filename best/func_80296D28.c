s32 *func_80293970();
s32 alLink(s32 *, void *);
s32 func_8029748C(s32 *, s32, s32 *);
s32 func_80297954(s32 *, s32, s32);
s32 alMainBusNew(s32 *, s32 *, s32);
s32 alAuxBusNew(s32 *, s32 *, s32);
s32 func_80297ABC(s32 *, s32);
s32 alSaveNew(s32 *);
s32 func_80297B8C(s32 *, s32);
s32 func_80298760(s32 *, s32, s32 *);
s32 func_80298AE0(s32 *, s32, s32 *);
s32 func_80298CD0(s32 *, s32, s32 *);
s32 func_80299A18(s32 *, s32, s32 *);
s32 func_80299A50(void *, s32, void *, s32);
s32 func_802A2024(s32 *, s32, s32);
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
void func_80296D28(void *arg0, void *arg1) {
int __repair_literal;

    s32 *temp_s0,*temp_s0_2,*temp_s1,*temp_v0,*temp_v0_2,*temp_v0_3,*var_s2,*var_v1;
    s32 temp_s5,var_s3,var_s3_2;
    temp_s5=F(arg1,s32,0x14);
    F(arg0,s32,0)=0;
    F(arg0,s32,0x20)=0;
    F(arg0,s32,0x1C)=0;
    F(arg0,s32,0x3C)=F(arg1,s32,4);
    F(arg0,s32,0x48)=0xA0;
    F(arg0,s32,0x44)=F(arg1,s32,0x18);
    F(arg0,s32,0x24)=F(arg1,s32,0x10);
    temp_v0=func_80293970(0,0,temp_s5,1,0x1C);
    alSaveNew(temp_v0);
    F(arg0,s32*,0x38)=temp_v0;
    F(arg0,s32*,0x34)=func_80293970(0,0,temp_s5,1,0x4C);
    F(arg0,s32,0x40)=1;
    alAuxBusNew(F(arg0,s32*,0x34),func_80293970(0,0,temp_s5,F(arg1,s32,4),4),F(arg1,s32,4));
    F(arg0,s32*,0x30)=func_80293970(0,0,temp_s5,1,0x20);
    alMainBusNew(F(arg0,s32*,0x30),func_80293970(0,0,temp_s5,F(arg1,s32,4),4),F(arg1,s32,4));
    if(F(arg1,u8,0x1C))func_80299A50(arg0,0,arg1,temp_s5);
    else func_80298AE0(F(arg0,s32*,0x30),2,F(arg0,s32*,0x34));
    F(arg0,s32,4)=0; F(arg0,s32,8)=0; F(arg0,s32,0x14)=0; F(arg0,s32,0x18)=0; F(arg0,s32,0xC)=0; F(arg0,s32,0x10)=0;
    var_s3=0;
    temp_v0_2=func_80293970(0,0,temp_s5,F(arg1,s32,4),0xDC);
__repair_literal = 0;

    if(F(arg1,s32,4)>__repair_literal){
      var_s2=temp_v0_2;
      do{
        alLink(var_s2,(s32*)arg0+1);
        temp_s0=var_s2+4;
        F(var_s2,s32,8)=0; var_s3++;
        func_80297954(temp_s0,F(arg0,s32,0x24),temp_s5);
        func_802A2024(temp_s0,1,0);
        temp_s1=var_s2+0x16;
        func_80297ABC(temp_s1,temp_s5);
        func_80298CD0(temp_s1,1,temp_s0);
        temp_s0_2=var_s2+0x23;
        func_80297B8C(temp_s0_2,temp_s5);
        func_80298760(temp_s0_2,1,temp_s1);
        func_8029748C(F(arg0,s32*,0x34),2,temp_s0_2);
        F(var_s2,s32*,0xC)=temp_s0_2;
        var_s2+=0x37;
      }while(var_s3<F(arg1,s32,4));
    }
    var_s3_2=0;
    func_80299A18(temp_v0,1,F(arg0,s32*,0x30));
    temp_v0_3=func_80293970(0,0,temp_s5,F(arg1,s32,8),0x1C);
    F(arg0,s32*,0x2C)=0;
    if(F(arg1,s32,8)>0){
      var_v1=temp_v0_3;
      do{var_s3_2++; *var_v1=F(arg0,s32*,0x2C);F(arg0,s32*,0x2C)=var_v1;var_v1+=7;}while(var_s3_2<F(arg1,s32,8));
    }
    F(arg0,s32,0x28)=temp_s5;
}
