typedef struct {u16 cur,limit;} FreeList;extern FreeList D_800F6008;extern u8 D_800F5F92[],D_800F5F93[],D_800F5C43[];
s32 func_802901F0(void){
int __repair_literal;
s16 v;u8 *p;v=D_800F6008.cur+1;D_800F6008.cur=v;if(v>=0x18)D_800F6008.cur=D_800F6008.limit;v--;
__repair_literal = 4;
p=&D_800F5F92[(s32)v*__repair_literal];if(p[0]!=0xFF){D_800F5C43[(s32)p[0]*0x10]=0xFF;p[0]=0xFF;}p=&D_800F5F93[(s32)v*4];if(p[0]!=0xFF){D_800F5C43[(s32)p[0]*0x10]=0xFF;p[0]=0xFF;}return v;}
