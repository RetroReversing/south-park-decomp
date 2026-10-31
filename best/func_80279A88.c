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
s32 func_80279A88(void *arg0, f32 arg1, f32 arg2){
 s32 t0=0,t1=1,a3=0; void *a1,*a2; f32 fv1,fv1f,fv0f,fv0;
 loop1:
 a2=(u8*)arg0+a3;
 if(*(f32*)((u8*)arg0+0x34)<0.0f){a1=(u8*)arg0+((t1&3)*12);}
 else {a1=(u8*)arg0+a3;a2=(u8*)arg0+((t1&3)*12);}
 fv1=*(f32*)((u8*)a2+8); fv1f=*(f32*)((u8*)a1+8); fv0f=*(f32*)a1;
 fv0=arg1-fv0f; fv1=*(f32*)((u8*)a2+8)-fv1f; fv1=fv1*fv0;
 fv1f=arg2-fv1f; fv0f=fv0f-*(f32*)a2; fv0f=fv0f*fv1f; fv1=fv1+fv0f;
 if(fv1<=0.0f)return 0; t1++;t0++;a3+=12;if(t0<4)goto loop1;
 t0=0;t1=1;a3=0;
 loop2:
 a2=(u8*)arg0+a3;
 if(*(f32*)((u8*)arg0+0x38)>0.0f){a1=(u8*)arg0+((t1&3)*12);}
 else {a1=(u8*)arg0+a3;a2=(u8*)arg0+((t1&3)*12);}
 fv1=*(f32*)((u8*)a2+4); fv1f=*(f32*)((u8*)a1+4); fv0f=*(f32*)a1;
 fv0=arg1-fv0f; fv1=*(f32*)((u8*)a2+4)-fv1f; fv1=fv1*fv0;
 fv1f=arg2-fv1f; fv0f=fv0f-*(f32*)a2; fv0f=fv0f*fv1f; fv1=fv1+fv0f;
 if(fv1<0.0f)return 0; t1++;t0++;a3+=12;if(t0<4)goto loop2; return 1;
}
