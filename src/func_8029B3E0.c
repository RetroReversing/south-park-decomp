extern u32 D_800F604C; extern u32 D_800F6050; extern u32 D_800F6088; extern u32 D_800F608C;
s32 func_8029B3E0(void) { u32 x; x=*(volatile u32*)0xA410000C & 0x100; if(x) return 1; return 0; }
void func_8029B1D0(s8 arg0) { s32 i; s32 *p; u8 *q; u8 v; s8 sp0,sp1,sp2,sp3,sp4,sp5,sp6,sp7;
 i=14; p=&D_800F6088; do {*p=0; i--; p--;} while(i>=0);
 q=(u8*)&D_800F6050; *(s32*)(q+0x3c)=1; sp0=-1; sp1=1; sp2=3; sp3=arg0; sp4=-1;sp5=-1;sp6=-1;sp7=-1;
 i=0;v=*(u8*)&D_800F604C;while(i<v){*(u32*)(q+i*8)=*(u32*)&sp0;*(u32*)(q+i*8+4)=*(u32*)&sp4;i++;}q[i*8]=254;
}
void func_8029AFFC(void) { s32 i; u8 *p; p=(u8*)&D_800F6050; *(u32*)(p+0x3c)=1; i=3; do { *p++=253; i--; } while(i>=0); *p=254; }
void func_8029AE3C(void) { s32 i; s32 *p; u8 *q; u32 a; i=14; p=(s32*)((u8*)&D_800F6050+0x38); do {*p=0;i--;p--;}while(i>=0); q=(u8*)&D_800F6050; D_800F608C=1; q[0]=255;q[1]=1;q[2]=4;q[3]=1; *(u16*)(q+4)=65535;q[6]=255;q[7]=255; i=0;a=*(u8*)&D_800F604C; while((u32)i<a){*(u32*)(q+i*8)=*(u32*)q;*(u32*)(q+i*8+4)=*(u32*)(q+4);i++;} q[i*8]=254; }
