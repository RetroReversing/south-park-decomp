typedef struct Obj {s16 kind;char p02[6];s32 flags;char p0C[4];struct Obj **children;s32 count;void *cb;char p1C[8];void *resource;char p28[4];s16 state;char p2E[2];f32 t;f32 y;f32 rate;char p3C[0x20];} Obj;
extern s32 D_8022D09C(void*),D_8022D0AC(void*),D_8022D0BC(void*),D_8022D0D4(void*),D_8022D0EC(void*),D_8022D104(void*);
extern s32 func_804023BC(Obj*,s32),func_80403338(s32,Obj*);
extern f32 D_800ABA00,D_800BC394,D_800BC398,D_800BC39C,D_800BC3A0;extern s32 D_800BF010;extern u16 D_800D78F8;
s32 func_80402548(Obj *o,s32 arg1){
register int __repair_literal;
s32 s6=0,s4=0,i; Obj *p,*cur; s32 a,b; f32 f;
 if(o->cb){s32(*fn)(void)=*(void**)((char*)o->cb+0x18);s6=fn();}
 p=o->children;i=o->count-1;for(;i!=-1;i--,p=(Obj*)((char*)p+0x28)){if(p->cb){s32(*fn)(Obj*,Obj*,s32)=p->cb;s4|=fn(p,o,arg1);}}
 cur=(Obj*)((char*)o->children+o->kind*0x28);o->t+=D_800ABA00; a=cur->flags&0x20000;b=cur->flags&0x800000;
 switch(o->state){
 case 0:f=o->y+D_800ABA00;o->y=f;if(D_800BC394<=f){o->y=D_800BC394;o->state=1;}break;
 case 1:f=o->rate+D_800ABA00*D_800BC398;o->rate=f;if(D_800BC39C<=f){o->rate=D_800BC39C;o->state=2;}break;
 case 3:f=o->rate-D_800ABA00*D_800BC3A0;o->rate=f;if(f<=0){o->rate=0;o->state=4;}break;
 case 4:f=o->y-D_800ABA00;o->y=f;if(f<=0){o->y=0;return 1;}break;
 }
 if(D_800D78F8)return 0;
__repair_literal = 0;
if(o->state>=3||o->state<__repair_literal)return 0;if(s6||s4){o->state=3;return 0;}if(b)return 0;
 i=1;if(!a){if(D_8022D0BC(o->resource))func_804023BC(o,0x10);if(D_8022D0D4(o->resource))func_804023BC(o,0x11);}else if(*(s32*)((char*)o->resource+0xC0)&0x60303)i=0;
 if(i){if(D_8022D0EC(o->resource))func_804023BC(o,0x12);if(D_8022D104(o->resource))func_804023BC(o,0x13);}
 if(o->state==2&&(D_8022D09C(o->resource)||(D_8022D0BC(o->resource)&&a)||(D_8022D0D4(o->resource)&&a))){if(cur->cb){s32(*fn)(Obj*,Obj*,s32)=cur->cb;if(((s32(*)(Obj*,Obj*,s32))(*(void**)((char*)cur->cb+4)))(cur,o,arg1))o->state=3;if(!D_800BF010&&!(o->flags&4))func_80273F04(0x2ee,0);D_800BF010=0;}else o->state=3;}
 if(o->flags&2&&o->state==2&&D_8022D0AC(o->resource)){if(!(o->flags&4))func_80273F04(0x2ee,0);func_80403338(arg1,o);o->state=3;}
 return 0;
}
