#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern void *D_800A9B98; extern s16 *D_8022154C(s32,s32,s32,void*);
void func_80264A94(void *arg0, s32 arg1, s32 arg2) {
 s32 early=arg2+0x1303; u8*p=arg0; void *v=D_8022154C(0,0x8000,0x23,&D_800A9B98);
 *(void**)(p+0x14)=v;
 if(v){s32 i=0; s16 *base=*(s16**)v; *(s16**)(p+0x18)=base;
 do {s16*q=(s16*)((char*)base+(i<<4)); s32 t=i&3;
 switch(t){case 0:q[0]=-1;q[1]=1;q[4]=0;q[5]=0;break;case 1:q[0]=1;q[1]=1;q[4]=0x800;q[5]=0;break;case 2:q[0]=1;q[1]=-1;q[4]=0x800;q[5]=0x800;break;case 3:q[0]=-1;q[1]=-1;q[4]=0;q[5]=0x800;break;}
 i++; q[2]=-300;q[3]=0; ((u8*)q)[12]=255;((u8*)q)[13]=255;((u8*)q)[14]=255;((u8*)q)[15]=255;
 }while(i<0x800);}
}
