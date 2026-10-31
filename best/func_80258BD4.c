extern u32 D_800A96E0[]; extern u32 D_800D7CB0,D_800D7CB8; extern s32 func_8029CC68(void);
typedef struct {u8 pad[0x2E4];u32 p2e4,p2e8,p2ec,p2f0;u8 pad2[0xC];u32 f300;} S58;
s32 func_80258BD4(S58 *arg0, void **arg1, void **arg2, s32 arg3) {
 u32 *p=(u32*)arg0->p2e8; s32 old=arg3; u32 v;
 if(arg0->f300 && (arg3&2)) {
   v=arg0->p2e4;
   if(p==0) {*arg1=(void*)v; goto clr;}
   if(p[2]&0x10) {*arg1=p;arg3&=~2;goto finish;}
   *arg1=(void*)v;
 clr: arg0->f300=0; p=(u32*)arg0->p2e4; arg3&=~2; v=*p; arg0->p2e4=v; if(!v)arg0->p2ec=0; goto finish;
 }
 if(p) {
  v=p[3];
  if(v!=D_800D7CB8 && v== (u32)func_8029CC68()) {
   if(v==D_800D7CB0) {
    v=p[2]&7;
    if(v==1) {
     v=p[1];
     if(v&0x20) { if(arg3&2){*arg1=p;arg3&=~2;if(v&1){*arg2=p;arg3&=~1;}p=(u32*)arg0->p2e8;v=*p;arg0->p2e8=v;if(!v)arg0->p2f0=0;} }
     else if(arg3==3){*arg2=p;*arg1=p;p=(u32*)arg0->p2e8;v=*p;arg0->p2e8=v;arg3=0;if(!v)arg0->p2f0=0;}
    } else if(v==2) {
     v=p[1];if(v&2){if(arg3&2){*arg1=p;arg3&=~2;}}
     else if((v&1)&&(arg3&1)){*arg2=p;p=(u32*)arg0->p2e8;v=*p;arg0->p2e8=v;arg3&=~1;if(!v)arg0->p2f0=0;}
    }
   }
  }
 }
 finish: if(arg3!=old)arg3=func_80258BD4(arg0,arg1,arg2,arg3); return arg3;
}
