extern f32 D_800A77D0;extern u8 D_800B1338,D_800B133C,D_800B1344,D_800B1348;extern f32 func_8029AA80(f32,s32,void*);extern s32 D_802131F8(f32*,f32*,f32);void func_80412C0C(void*arg0){
char *__repair_addr;
s32 i;u8*base;f32 x,y,z,len;i=0;base=&D_800B1338;do{u8*src=*(u8**)((char*)arg0+0x174c)+i;u8 t=src[13];base[i]=t;*((u8*)&D_800B133C+i)=t;t=src[10];base[8+i]=t;*((u8*)&D_800B1344+i)=t;*((u8*)&D_800B1348+i)=src[17];i++;}while(i<3);x=(s8)(*(u8**)((char*)arg0+0x174c))[17];y=(s8)(*(u8**)((char*)arg0+0x174c))[18];z=(s8)(*(u8**)((char*)arg0+0x174c))[19];len=func_8029AA80(x*x+y*y+z*z,i,&D_800B1338);if(len!=0){D_802131F8(&x,&x,D_800A77D0/len);
__repair_addr = (char *)((char*)arg0+0x1750);
*(s16*)(__repair_addr)=(s32)x;*(s16*)((char*)arg0+0x1752)=(s32)y;*(s16*)((char*)arg0+0x1754)=(s32)z;}}
