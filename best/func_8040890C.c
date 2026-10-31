extern void D_8022D1F4(s32); extern void D_8022D248(void); extern void D_8022D220(void); extern s32 func_80410750(void*,void*,s32); extern s32 func_8029B780(void*,void*); extern void func_80410458(void*,s32*);
extern s32 D_800BC6E0[]; extern u8 D_800BF34B; extern char D_800EE468[]; extern char D_800EEDB8[]; extern s32 D_8010DE78[]; extern s8 D_8010DE8C[]; extern s32 D_8010E4E8;
s32 func_8040890C(void) {
char *__repair_addr;

 s32 i,j,k,ret; s8 code; s32 *g;
 g=D_8010DE78;i=0;ret=-3;D_800BF34B=0;g[0]=0;
 do {
 D_8022D1F4(1);
 D_8010DE8C[g[0]]=0; D_8022D248();
 j=func_80410750(D_800EEDB8,g+0x30,g[0]);
 if(j==10) {
  s32 n; n=g[0];
__repair_addr = (char *)(D_800EE468+n*0x24c+0xd4);

  if(func_8029B780(D_800EEDB8,D_800EE468+n*0x24c+0xe4)) *(s32*)(__repair_addr)=0;
  else {*(s32*)(D_800EE468+n*0x24c+0xd4)=1;j=1;}
 }
 if(j<12) code=D_800BC6E0[j];else code=-7;
 D_8010DE8C[g[0]]=code;
 func_80410458(g+0x30,g+0x10);
 k=g[0x10];if(k<0)k+=255;
 D_8022D220();g[0x10]=k>>8;
 g[0]++;i++;
 }while(i<4);
 i=0;j=0;
 do {
 code=D_8010DE8C[i]; k=(u8)code;
 if(code==-3) {i++;continue;}
 if(code==0) {
  if(i==0)D_800BF34B=1;
  g[0]=i;D_8010E4E8=i;ret=0;goto done;
 }
 j=1;D_8010E4E8=i;i++;
 }while(i<4);
 if(j)ret=(s8)(k<<24);
done:return ret;
}
