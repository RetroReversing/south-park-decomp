extern void D_80210E30(void*,void*); extern void D_802132D8(s32*); extern void D_80213AF4(void*,void*,s32); extern void D_80213D94(void*,s32*,s32*); extern void func_8029A2CC(void*,s32); extern void *D_800F4AC8; extern s32 D_800F4AD0,D_800F4ADC; void func_8025721C(void *arg0,s32 *arg1,s32 arg2,s32 *arg3){
char *__repair_addr;
 s32 fallback[16],matrix[16],vals[3]; s32 *src; s32 *global=&D_800F4AD0; if(arg1==0){
__repair_addr = (char *)((char*)D_800F4AC8+0xB8);
func_8029A2CC(fallback,*(s32*)(__repair_addr)+(D_800F4ADC<<6));src=fallback;}else src=arg1; D_80210E30(matrix,src); D_80213AF4(matrix,global,arg2); vals[0]=*(s32*)((char*)global+0xCC); vals[1]=*(s32*)((char*)global+0xD0); vals[2]=*(s32*)((char*)global+0xD4); D_802132D8(vals); D_80213D94(matrix,vals,arg3); D_802132D8(arg3); *(s32*)((char*)arg0+0x40)|=0x10000; *(s32*)((char*)arg0+0x110)=*(s32*)((char*)global-8); *(u8*)((char*)arg0+0x1A9)=*((u8*)global+0xF);}
