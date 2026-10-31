extern s32 D_800F150C; extern void *D_800A9BC8; extern s8 D_800CE80F[],D_800CE611[],D_800CE413[],D_800CEA0D[],D_800CEC0B[];
s32 func_802665C4(u8 *arg0){
int __repair_literal;
u8 a; s32 sum=0; s32 mode; if((a=arg0[0])==0)return 0; mode=D_800F150C; do {switch(mode){
__repair_literal = 2;
case 0: sum+=D_800CE80F[(u32)a*__repair_literal];break;case 1:sum+=D_800CE611[(u32)a*2];break;case 2:sum+=D_800CE413[(u32)a*2];break;case 3:sum+=D_800CEA0D[(u32)a*2];break;case 4:sum+=D_800CEC0B[(u32)a*2];break;} a=*++arg0;}while(a);return sum;}
