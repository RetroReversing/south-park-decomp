typedef struct{char pad[0x14]; void *p;} A; typedef struct{char pad[0x2c];s32 x;} B; s32 func_8024CEF0(A*a){B*b=a->p;return b->x;}
void func_8024D024(void*a,void*b){
char *__repair_addr;
s32 *p; s32 f,x; p=*(s32**)((char*)a+0x14);
__repair_addr = (char *)((char*)p+0x14);
 f=*(s32*)(__repair_addr); if(*(s8*)((char*)b+0xb3)==0)return; if((f&4)==0)return; x=*(s32*)((char*)a+0xf4); x &= 0xffefffff; x &= 0xffff7fff; *(s32*)((char*)a+0xf4)=x;}
s32 func_8024D06C(A*a){B*b=a->p;return *(s32*)((char*)b+0x3c);}
void func_8024D180(void*a,void*b){s32*p;s32 f,x;p=*(s32**)((char*)a+0x14);f=*(s32*)((char*)p+0x14);if(*(s8*)((char*)b+0xb3)==0)return;if((f&0x20)==0)return;x=*(s32*)((char*)a+0xf4);x &= 0xffefffff;x &= 0xffff7fff;*(s32*)((char*)a+0xf4)=x;}
