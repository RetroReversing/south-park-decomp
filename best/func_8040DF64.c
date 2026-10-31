extern f32 D_800BE358; extern s32 D_800BE330,D_800BE334,D_800D784C,D_800F14F0,D_800F1508,D_800F150C;
extern void func_80402948(void); extern void func_80266380(void); extern void func_80268FF8(s32,s32,s32); extern void func_802A08B8(void*,void*,s32); extern void func_80266D74(void*,s32,s32,s32);
void func_8040DF64(void *arg0){
s32 sp10; s32 i,j,k,n; s32 *p; f32 f;
func_80402948();func_80266380();D_800F150C=3;func_80268FF8(30,20,30);
f=*(f32*)((char*)arg0+0x38)*D_800BE358; f=f**(f32*)((char*)arg0+0x34);n=(s32)f;
D_800F14F0=0;D_800F1508=0;i=0;
do {j=i*20;if(i>=2)j+=0x52;else j+=0x48;k=i+1;
func_802A08B8(&sp10,&D_800BE330,k);func_80266D74(&sp10,-102,j,n);
p=(s32*)((char*)&D_800D784C+i*16);func_80266D74(p,-74,j,n);
func_802A08B8(&sp10,&D_800BE334,p[3]);i=k;
func_80266D74(&sp10,45,j,n);
}while(i<10);
}
