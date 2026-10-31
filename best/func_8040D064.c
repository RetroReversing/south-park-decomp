s32 D_80203A94(void *,s32); s32 D_80204858(void *,s32); void *D_8020FC74(void); void D_8020FCC4(s32,s32); void D_802103E0(s32,void *,void *,s32,s32,s32,s32,s32); void D_80211B2C(void *,void *); void D_80213EBC(void *, s32); void D_802145E4(void *,f32,f32,f32); void D_80214B2C(void *,f32); void D_80214ED4(void *);
extern s32 D_800AB9F8,D_800AB9FC,D_800B1350,D_800CA52C,D_8010E760; extern f32 D_800BE2D0,D_800BE2D4,D_800BE2E0; extern f64 D_800BE2D8; extern void *D_800CCA80; extern u32 *D_800D7F68; extern u8 D_8010E560[],D_8010E778[];
void func_8040D064(void){
char *__repair_addr;

 s32 i=0,off=0,limit,kind,id,idx; f32 scale; f64 angle;
 s32 transform[24]; s32 x,y,z; u32 *p,*q; void *slot,*model;
 limit=D_8010E760-(D_800CA52C!=0);
 if(limit>0){scale=D_800BE2D0;do{
 slot=D_8010E778+off;
__repair_addr = (char *)((char*)slot+8);

 if(*(s32*)(__repair_addr)!=0){
  kind=*(s32*)slot;
  if(kind==1)id=0x1775; else if(kind<2){if(kind==0)id=0x1774;} else if(kind==2)id=0x1776;
  idx=D_80203A94(D_800CCA80,id);
  if(idx!=-1){
   model=*(void**)((char*)slot+8);x=*(s32*)((char*)model+4);y=*(s32*)((char*)model+8);z=*(s32*)((char*)model+12);
   p=D_800D7F68;q=(u32*)((char*)p+8);D_800D7F68=q;
   y=(s32)((f32)y+(f32)*(s32*)((char*)slot+4)+D_800BE2D4);
   p[0]=0xE7000000;p[1]=0;q[0]=0xE3000A01;q[1]=0x100000;D_800D7F68=(u32*)((char*)q+8);
   D_80213EBC(transform, x);angle=(f64)D_800AB9F8;if(D_800AB9F8<0)angle+=D_800BE2D8;
   D_80214B2C(transform,(f32)angle*D_800BE2E0);D_802145E4(transform,scale,scale,scale);D_80214ED4(transform);
   idx=i<<7;D_80211B2C(transform,D_8010E560+((D_800AB9FC<<6)+idx));
   id=D_80204858(D_800CCA80,idx);D_8020FC74();
   D_802103E0(id,D_8010E560+((D_800AB9FC<<6)+idx),&D_800B1350,0,0,-1,1,8);D_8020FCC4(0,1);
  }
 }
 i++;off+=12;
 }while(i<limit);}
}
