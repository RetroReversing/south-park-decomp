void D_802131C4(f32 *,void *); void D_80213E28(void *,f32 *,f32 *); void D_802132D8(f32 *); f32 D_80215738(f32); f32 func_8029A900(f32);
extern f32 D_800A9EF8,D_800A9EFC,D_800A9F00;
s16 func_80270B28(void *x,void *obj){
 f32 pos[4], dir[4], dot0,dot1,dot2; f32 turn,zero=0.0f;
 s16 result=0x40;
 D_802131C4(pos,obj+0x134);
 if(pos[0]*pos[0]+pos[2]*pos[2]>=D_800A9EF8) {
  D_80213E28(obj+0x16c,pos,dir);
  zero=0.0f;
  dot0=zero; dot1=zero; dot2=D_800A9EFC;
  D_802132D8(dir);
  turn=func_8029A900(D_80215738(dir[0]*dot0+dir[1]*dot1+dir[2]*dot2));
  if(dir[0]!=zero) {
   if(zero<dir[0]) { if(turn<zero) turn=-turn; }
   else turn=-fabsf(turn);
   result=(s16)(s32)(turn*D_800A9F00+D_800A9F00);
  }
 }
 return result;
}
