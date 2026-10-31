s32 func_8029C3D0(u32 arg0) {
 s32 a1=0,a2,a3=15,v0; u32 v1;
 do { a2=0; if(a1&16)a2=21;
 v1=arg0>>10; arg0<<=1; a1=( ((a1<<1)&255)|(v1&1))^a2; a3--;
 }while(a3>=0); v0=a1; return v0&31;
}
s32 func_8029C418(u8 *arg0) {
 s32 v1=0,t0=0,t1=32,a2,a3,v0,a1;
 do { a2=7; do { a3=0; if(v1&128)a3=133;
 a1=v1<<1; v1=a1; if(t0!=t1) {v0=*arg0; v0>>=a2; v0&=1; v1=a1|v0;}
 a2--; v1^=a3;
 }while(a2>=0); t0++; arg0++;
 }while(t0<33); return v1&255;
}
s32 func_8029C6F0(void); extern u8 D_800AB130,D_800AB134;
s32 func_8029D580(u8*,u8*,s32);
s32 func_8029DA40(s32 arg0,s32 *arg1) {
 s32 result;
 if(arg0&3)func_8029D580(&D_800AB130,&D_800AB134,51);
 if(!arg1)func_8029D580(&D_800AB130,&D_800AB134,52);
 result=-1;
 if(func_8029C6F0()) return result;
 result=0; *arg1=*(s32*)(arg0|0xA0000000); return result;
}
s32 func_80295A68(void*); s32 func_80295A98(void*,void*);
s32 func_80296718(void *arg0, void **arg1, s16 arg2) {
 s16 var_a2;
 s32 var_s2;
 s32 var_v0;
 void *var_s0,*var_s0_2;
 var_a2=arg2; var_s0=*(void**)((u8*)arg0+20); var_s2=0;
 if(var_s0!=NULL || (var_s0=*(void**)((u8*)arg0+4),var_s0!=NULL)){
 *arg1=var_s0; func_80295A68(var_s0); func_80295A98(var_s0,(u8*)arg0+12); return 0;
 }
 var_s0_2=*(void**)((u8*)arg0+12); var_v0=0;
 if(var_s0_2!=NULL) do {
 if(var_a2 < *(s16*)((u8*)*(void**)((u8*)var_s0_2+8)+22)) goto next;
 if(*(s32*)((u8*)var_s0_2+216)!=0) goto next;
 *arg1=var_s0_2; var_s2=1; var_a2=(s16)(u16)*(u16*)((u8*)*(void**)((u8*)var_s0_2+8)+22);
 next: var_s0_2=*(void**)var_s0_2; var_v0=var_s2;
 }while(var_s0_2!=NULL);
 return var_v0;
}
