typedef struct {s16 f0; s16 f2; u8 pad[0x14]; s16 f18; s16 vals[12];} A; extern double D_800AADA8,D_800AADB0;
void func_80297C84(A *a,s16 arg3){s32 n; s16 *p; double f0,f1,f2;
 f0=(double)(s16)(a->f0>>1)*D_800AADA8; n=9; p=(s16*)((char*)a+0x12); a->f18=arg3; f1=f0;
 do {f0=f0*f1; f2=f0*D_800AADB0; n++; *p++=(s16)f2;}while(n<16);
}
