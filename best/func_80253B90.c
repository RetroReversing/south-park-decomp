extern void *D_800F1248; extern s16 D_800F1348[]; extern f32 D_800F1308; extern void D_8021E6F8(void*,s32,s32); extern void D_8021E76C(void*,s32); extern void D_802147B0(void*,u32); extern void func_8024D9AC();
void func_80253B90(void *a,s32 b){
char *__repair_addr;
s32 i;u8 *base,*q;s16 *p;base=*(u8**)((u8*)a+4);i=0;do{q=base+i*0x1f8;*(void**)(q+0x14)=&D_800F1248;q[0]=2;
__repair_addr = (char *)(q+0x40);
*(s32*)(__repair_addr)=0;i++;}while(i<128);D_8021E6F8((u8*)a+8,480,484);i=0;do{D_8021E76C((u8*)a+8,*(s32*)((u8*)a+4)+i*0x1f8);i++;}while(i<128);D_8021E6F8((u8*)a+0x1c,488,492);i=0;do{D_8021E6F8((u8*)a+0x30+i*20,480,484);i++;}while(i<3);D_8024D9AC(&D_800F1248);i=0;p=D_800F1348;do{switch(i){case 0:p[0]=-1;p[1]=1;p[4]=-32768;p[5]=-32768;break;case 1:p[0]=1;p[1]=1;p[4]=0;p[5]=-32768;break;case 2:p[0]=1;p[1]=-1;p[4]=0;p[5]=0;break;default:p[0]=-1;p[1]=-1;p[4]=-32768;p[5]=0;}p[2]=0;p[3]=0;p[6]=p[7]=-1;i++;p+=8;}while(i<4);D_802147B0(&D_800F1308,0x3fc90fdb);*(s32*)((u8*)a+108)=b;}
