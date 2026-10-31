s32 func_8029BC60(s32,s32,s32,void*); s32 func_8041249C(s32); void func_8041238C(void*,u16*,u16*); s32 func_80411D20(void*,void*); s32 func_80411A38(void*,void*,void*);
s32 func_80411710(void *p){
int __repair_literal;
s32 r,v,a; u8 b; u16 x,y; char q[0x20],z[0x20]; if(((u8*)p)[0x65]){r=func_8041249C(1);((u8*)p)[0x65]=0;if(r)return r;}
r=func_8029BC60(*(s32*)((char*)p+4),*(s32*)((char*)p+8),1,q);if(r)return r;
func_8041238C(q,&x,&y);a=(s32)q; if(*(u16*)(q+0x1c)!=x||*(u16*)(q+0x1e)!=y){r=func_80411D20(p,q);if(r==10){a=(s32)q;r=func_80411A38(p,q,z);if(r)return r;a=(s32)z;}else if(r)return r;}
if((*(u16*)((char*)a+0x18)&1)==0){r=func_80411A38(p,(void*)a,z);if(r)return r;if((*(u16*)(z+0x18)&1)==0)return 11;a=(s32)z;}
for(v=0;v<32;v++)*((u8*)p+0xc+v)=*((u8 *)(v * 1 + (int)a));
*(s32*)((char*)p+0x4c)=*((u8*)a+0x1b); b=*((u8*)a+0x1a);*(s32*)((char*)p+0x50)=16;*(s32*)((char*)p+0x54)=8;*((u8*)p+0x64)=b;*(s32*)((char*)p+0x60)=2*b+3;*(s32*)((char*)p+0x58)=(b+1)*8;
__repair_literal = 8;
*(s32*)((char*)p+0x5c)=(b+1)*__repair_literal+b*8;r=func_8029BC60(*(s32*)((char*)p+4),*(s32*)((char*)p+8),7,(char*)p+0x2c);return r;}
