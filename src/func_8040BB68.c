extern s32 D_8010E2EC; extern u16 D_8010E4EC; extern s32 D_8010E4F0; extern s32 D_8010E500;
extern s32 D_8022D104(s32); extern s32 D_8022D0EC(s32); void func_80273F04(s32,s32);
void func_8040BB68(void){
int __repair_literal;

 s32 s;
 switch(D_8010E2EC){case 0:s=2;break;case 1:s=3;break;case 2:s=2;break;}
 if(D_8022D104(D_8010E4F0)){func_80273F04(0x2EF,0);D_8010E500=0;D_8010E4EC++;if(s-1<(s16)D_8010E4EC)D_8010E4EC=s-1;}
 if(D_8022D0EC(D_8010E4F0)){func_80273F04(0x2EF,0);D_8010E500=0;D_8010E4EC--;
__repair_literal = 0;
if((s16)D_8010E4EC<__repair_literal)D_8010E4EC=0;}
}
