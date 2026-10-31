typedef struct { u32 w0,w1; } Gfx;
typedef struct { u8 pad[0x1C]; void *head; } Root;
typedef struct { u8 pad[0x10]; void *unk10; u8 p14[8]; u32 unk1C; u8 p20[0x1C]; u32 unk40; u8 p44[0x1C]; f32 x,y,z; u8 p4C[0xAC]; void *unkF8; u8 pFC[0x114]; u8 state1B1; u8 p1B2[0x3A]; void *next; } Item;
typedef struct { u8 pad[0x50]; s32 mask; u8 p54[0x2E4]; f32 x0,y0,x1,y1; } State;
extern f32 D_800A9688[2];
extern s32 D_800AB9FC,D_800D6528; extern void *D_800D6518; extern Gfx *D_800D7F68;
extern Gfx D_800CCA80,D_800CEE08;
extern s32 func_8026B49C(void *,f32 *);
extern void D_80213AF4(void *,void *,void *);
extern void func_80251D00(void *,void *,void *,f32);
extern void D_80204D7C(void *,void *,void *);
extern void D_802103E0(void *,void *,void *,s32,s32,s32,s32,s32);
extern void func_80252B58(void *,void *);
extern void func_8025278C(void *,void *);
extern void func_802624F4(void *,void *,void *);
void func_802564F4(Root *a,State *b){
int __repair_literal;

 Item *s0; s32 s1,s2,s4,s5; f32 box[6], r,t,u; s32 i; u32 flags; Gfx *g;
 if(!(s0=a->head))return;
 s5=b->mask;
 g=D_800D7F68;
 g->w0=0xE7000000;g->w1=0;g[1].w0=0xE3000A01;g[1].w1=0;g[2].w0=0xD9F9FBFF;g[2].w1=0;D_800D7F68=g+4;
 s4=0x80000;s1=0;
 do {
   u32 flags=s0->unk40; s2=flags&s4;
   if(s0->unk10 && !(s5*((Item*)s0->unk10)->unk1C)) goto next;
   if(flags&0x200000 || s0->unkF8 && *(void **)((u8*)s0->unkF8+0x10)) s1=1;
   else {
    r=s0->z; t=s0->y; u=s0->x;
    if(r*t<u*t)u=r*t;
    if(u<r)r=u;
    r*=D_800A9688[0]; t=r*D_800A9688[1];
    box[0]=s0->x-t;box[1]=s0->y-t;box[2]=s0->z-t;
    box[3]=s0->x+t;box[4]=s0->y+r;box[5]=s0->z+t;
    if(box[0]<b->x1 && b->x0<box[3] && box[2]<b->y1 && b->y0<box[5] && func_8026B49C((u8*)b+0x2D8,box))s1=1;
   }
   if(s1){
    if(!s2){ if(D_800D6528==1){ f32 rot[4]; D_80213AF4((u8*)D_800D6518+0x22C,(u8*)s0+4,rot); r=rot[2];
__repair_literal = 0;
if(r<__repair_literal)r=-r;func_80251D00(s0,(u8*)s0+((D_800AB9FC<<6)+0x48),D_800D6518,r);} else func_80251D00(s0,(u8*)s0+((D_800AB9FC<<6)+0x48),0,0);s0->unk40|=s4;}
    if(s0->unkF8 && *(void **)((u8*)s0->unkF8+0x10)){D_80204D7C(&D_800CCA80,(u8*)s0+4,(u8*)s0+D_800AB9FC*24+0xC8);D_802103E0(*(void **)((u8*)s0->unkF8+0x10),(u8*)s0+(D_800AB9FC<<6)+0x48,(u8*)s0+D_800AB9FC*24+0xC8,(s0->unk40>>18)&1,0,-1,0,4);}else func_80252B58(s0,b);
    if(*(u32*)s0->unkF8&0x100000)func_8025278C(s0,b);
    if(s0->state1B1&&!s2){if(!(*(u32*)s0->unkF8&0x10000))func_802624F4(&D_800CEE08,s0,(u8*)s0+(D_800AB9FC<<6)+0x48);}
   } else if(s0->state1B1&&!s2){if(!(*(u32*)s0->unkF8&0x10000))func_802624F4(&D_800CEE08,s0,(u8*)s0+(D_800AB9FC<<6)+0x48);}
next: s0=s0->next;s1=0;
 }while(s0);
}
