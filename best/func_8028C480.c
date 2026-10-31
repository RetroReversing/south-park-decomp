extern u8 D_800F5298[]; extern s16 D_800B2194; typedef struct {s32 f;} Q1; typedef struct {s32 f;} R1;
void func_8028C480(s32 a0){
int __repair_literal;
s32 i,off; for(i=0,off=i;i<4;i++){
__repair_literal = 4;
((Q1*)((u8*)D_800B3618+i*__repair_literal))->f=0;*(s32*)((u8 *)(off * 1 + (int)D_800F5298))=0;((R1*)((u8*)D_800F529C+off))->f=-1;((R1*)((u8*)D_800F52A0+off))->f=-1;off+=12;} ((Q1*)((u8*)D_800B3618+a0*4))->f=1; ((R1*)((u8*)D_800F529C+((a0<<1)+a0)*4))->f=D_800B2194;}
