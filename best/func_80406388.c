typedef struct {u8 a,b;s8 c,d;u8 e,f,g,h;s8 cnt;u8 lo,hi,pad,unk[5];} Rec;
extern u8 D_800D77E8[]; extern Rec D_800D77EE[]; extern u8 D_800EE468[0x100000]; extern u8 D_800D7801[0x100000];
void func_80406388(void){s32 sp[4];s32 i,j;s32 *dst;u8 *q;
i=3;j=0x36;*(volatile u8*)&D_800D77E8[0]=1;*(volatile u8*)&D_800D77E8[1]=4;
do{D_800D7801[j]=0;i--;j-=0x12;}while(i>=0);
i=3;dst=sp+3;do{*dst=0;i--;dst--;}while(i>=0);
for(i=0,j=i,dst=sp;i<4;i++,j+=0x230){if(*(s32*)(D_800EE468+j)!=0)*dst++=i;}
i=0;if(D_800D77EE[1].c>0){q=(u8*)D_800D77EE;do{q[0x14]=1;q[0x15]=((u8*)sp)[i*4+3];i++;q+=0x12;}while(i<D_800D77EE[1].c);}}
