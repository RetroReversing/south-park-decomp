typedef struct{u8 pad0[0x50];s32 count;u8 pad54[0xa];u16 off5e;u16 lim60;u8 pad62[2];u8 lim64;u8 flag65;}Obj;
extern s32 func_804123D4(Obj*);extern s32 func_8041249C(Obj*);extern s32 func_8041207C(Obj*,void*,s32,s32);
extern s32 func_8029BC60(s32,s32,s32,void*);extern s32 func_8029C018(s32,s32,s32,void*,s32);
s32 func_804112D8(Obj *x,s32 y,s32 mode,s32 w,s32 h,s32 *out,s32 height){
 s32 r=5,meta[8],cache[64],rows,blocks,i,fmt=0xff, step=0, status; volatile s32 hold0,hold1;
 u8 *m=(u8*)meta,*c=(u8*)cache;
 if(y>=x->count)goto fail;
 if(y<0)goto fail;
 if(h<=0)goto fail;
 if(h&31)goto fail;
 if(w<0)goto fail;
 if(w&31)goto fail;
 if(!(*(s32*)x&1))goto fail;
 r=func_804123D4(x);if(r==2)return 2;
 if(x->flag65){x->flag65=0;r=func_8041249C(x);if(r)return r;}
 r=func_8029BC60(*(s32*)((u8*)x+4),*(s32*)((u8*)x+8),(x->off5e+y)&65535,meta);if(r)return r;
 if(!*(u16*)(m+4))goto fail;
 if(!*(s32*)m)goto fail;
 if(*(u16*)(m+6)>=x->lim60 && m[6]<x->lim64 && m[7] && !(m[7]&0x80)){
   if((mode&255)==0 && !(m[8]&2))return 6;
 } else return *(u16*)(m+6)==1?5:3;
 blocks=(w+31)>>5;*(u16*)( (u8*)cache+0x13a-0x38)=*(u16*)(m+6);
 if(blocks>=8){
  while(blocks>=8){
   if((u8)fmt!=c[0]){fmt=c[0];r=func_8041207C(x,cache,0,fmt);if(r)goto done;}
   i=c[1]*2;*(u16*)c=*(u16*)(c+i);
   if(*(u16*)c>=x->lim60 && c[0]<x->lim64&&c[1]&& (s8)c[1]>=0)goto done;
   if(*(u16*)c==1){r=3;goto done;} blocks-=8;
  }
 }
 rows=(height+31)>>5;i=0;
 while(rows-->0){
  if(i==8)i=0;
  if(i==0 || i==8){
   if(m[6]!=(u8)fmt){fmt=m[6];r=func_8041207C(x,cache,0,fmt);if(r)goto done;}
   if(m[6]!=x->flag65){x->flag65=m[6];r=func_8041249C(x);if(r)goto done;}
   step=((u32)m[7]<<3)+i;
   if(mode&255)r=func_8029C018(*(s32*)((u8*)x+4),*(s32*)((u8*)x+8),step,out,0);
   else r=func_8029BC60(*(s32*)((u8*)x+4),*(s32*)((u8*)x+8),step,out);
   if(r)goto done;
  }
  i++;
 }
 if((mode&255)==1 && !(m[8]&2)){m[8]|=2;x->flag65=0;r=func_8041249C(x);if(r)goto done;}
 r=0;goto done;
 fail:r=5;
 done:return r;
}
