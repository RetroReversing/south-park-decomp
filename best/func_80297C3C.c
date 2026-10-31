typedef struct { s16 f0; s16 f2; u8 pad[0x28]; s32 f2c; } A;
extern double D_800AADA8;
void func_80297C3C(A *a){s32 i; s32 t; s16 *p; s32 v;
 a->f2c=1; t=a->f0>>1; a->f2=0x4000-t; p=(s16*)((u8*)a+0x1e); for(i=0;i<8;i++)*p--=0;
}
