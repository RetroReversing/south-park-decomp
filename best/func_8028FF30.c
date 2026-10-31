extern void D_8021EE94(void*,void*,void*,u32); extern void func_802910C8(void*,void*); extern void func_80291528(s32,s32,s32,u32,u32,s32); extern void func_8029D588(void*,void*,s32); extern void func_8029D5B0(void*,s32,void*,s32,void*,s32); extern void func_8029DDA0(void*,void*,s32); extern void func_8029DED0(s32,void*,void*); extern void func_802A07E0(void*,s32); extern u32 D_80000318; extern u32 D_800E6FC8,D_B00CE000,D_17188,D_290EA0; extern u8 D_800F5318,D_800F5C38,D_800F5C3C,D_800F5C42,D_800F5F10,D_800F5F90,D_800F5F92,D_800F5F93; extern u32 D_800F5F0C;
void func_8028FF30(void) {
int __repair_literal;

u32 s4; u8 *p; s32 i; void *s3,*s2,*s1,*s0;
s4=D_80000318+0x7ff80000; if(s4<=0x803fffff)s4=0;
p=&D_800F5318; i=0xcf7; do { *p++=0; } while(--i);
p=&D_800F5F10; i=0x7f; do { *p=0xff; p++; } while(i--);
p=&D_800F5C38; i=0x17f; do { *p=0xff; p++; } while(i--);
func_802A07E0(p,255);
s3=(u8*)&D_800F5F0C-4; s2=(u8*)&D_800F5F0C-0x2d4;
for(i=0;i<24;i++){ *(u16*)((u8*)&D_800F5F90+i*4)=0xffff; *((u8*)&D_800F5F92+i*4)=255; *((u8*)&D_800F5F93+i*4)=255; }
D_800F5F0C=0; *(u32*)((u8*)&D_800F5F0C-4)=0;
for(i=0;i<24;i++,s2=(u8*)s2+16){
__repair_literal = 16;
 *(u32*)((u8*)&D_800F5C38+i*__repair_literal)=0; *(u32*)((u8*)&D_800F5C3C+i*16)=0; func_802910C8(s3,s2); *((u8*)&D_800F5C42+i*16)=i; }
s1=(u8*)s3-0xbcc; func_8029D588(s1,(u8*)s3-0xbb4,0x21); s0=(u8*)s3-0x150; func_8029D588(s0,(u8*)s3-0x138,8); func_8029D588((u8*)s3-0x118,(u8*)s3-0x100,8);
*(u16*)((u8*)s1+0xcb8)=0x400; *(u16*)((u8*)s1+0xcba)=0x80; *(void**)((u8*)s1+0xcc4)=(u8*)s3+8; *(u16*)((u8*)s1+0xcce)=0; *(u32*)((u8*)s1+0xcb4)=0; *(u32*)((u8*)s1+0xcbc)=D_B00CE000|0xb0000000;
if(D_80000318>0x4fffff) D_8021EE94(&D_800E6FC8,&D_B00CE000,&D_17188,s4);
if(s4){func_80291528(0,0x7e000,0x400000,s4+0x80000000,s4+0x80040000,7); *(u16*)((u8*)s1+0xccc)=1; *(u16*)((u8*)s1+0xcce)=1;}
for(i=0;i<8;i++)func_8029DDA0(s0,(u8*)s3-0xe0+i*0x1c,1);
func_8029DED0(0xc,(u8*)s2-0xa7c,(u8*)s2-0xa80); *(u16*)((u8*)s2-0xa80)=0;
s0=(u8*)s2-0x9e0; func_8029D5B0(s0,0x63,&D_290EA0,0,(u8*)s2-0x5b0,0x93);
}
