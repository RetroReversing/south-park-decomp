extern f32 D_800AA0F8;
extern void D_802131C4(void *,void *,void *);
extern void D_80213224(void *,void *,void *,u32);
extern f32 func_8029AA80(f32);
s32 func_80277EF8(u8 *obj, f32 *invec, u32 a2, s32 a3, s32 state, f32 a5, s32 a6) {
int __repair_literal;

 f32 dot, dist, mag;
 u8 *base=*(u8**)obj;
 f32 *dir=(f32*)(obj+0x58);
 if (!state) return 0;
 if (*(s32 *)(obj+0x84)==1 && *(f32 *)(obj+0x64)==invec[0] && *(f32 *)(obj+0x68)==invec[1] && *(f32 *)(obj+0x6c)==invec[2]) return 0;
 dot=dir[0]*invec[0]+dir[1]*invec[1]+dir[2]*invec[2];
__repair_literal = 0;

 if (dot==0 || (a3 && dot>__repair_literal)) return 0;
 dist=dot/(*(f32*)(obj+8));
 if (*(f32*)(obj+8)<=dist || (dist<0 && !a6)) return 0;
 if(dist<D_800AA0F8)dist=D_800AA0F8;
 *(f32*)(obj+8)=dist;
 D_802131C4(base+0x18,base+4,obj+0x4c);
 mag=func_8029AA80((*(f32*)(base+4))*(*(f32*)(base+4))+(*(f32*)(base+8))*(*(f32*)(base+8))+(*(f32*)(base+12))*(*(f32*)(base+12)));
 D_80213224(obj+0x28,base+4,obj+0x4c,a2);
 return 1;
}
