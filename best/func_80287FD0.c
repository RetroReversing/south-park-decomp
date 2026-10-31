typedef struct Obj { char pad0[0x1C]; f32 f1C; } Obj;
typedef struct B1 { char pad0[0x30]; s8 b30; char pad1[0x120]; f32 f154,f158; char pad2[0x20]; f32 f17C; char pad3[0x30]; f32 f1B0,f1B4,f1B8; } B1;
typedef struct B2 {char pad0[0x4C]; f32 f4C; char pad1[0x10]; f32 f60;} B2;
typedef struct B3 {char pad0[0x18]; f32 f18;} B3;
extern f32 D_800AA60C,D_800AA610,D_800AA614,D_800AA618,D_800AA61C,D_800AA620,D_800AA624,D_800AA628,D_800AA62C,D_800AA630;
extern s32 D_80246A4C(void); extern f32 D_80215964(f32,f32,s32); extern f32 D_802157FC(f32,f32,f32); extern void D_80241C54(void*,void*,s32,f32); extern void D_802131C4(f32*,f32*,f32*); extern void D_8023E95C(void*,void*,s32);
void func_80287FD0(Obj *arg0,B1 *arg1,B2 *arg2,B3 *arg3){f32 sp10,sp14,sp18,sp20,sp24,sp28,t,v; volatile s32 frame[4];
if(arg1->b30!=0xB){if(D_80246A4C()==1){t=-arg0->f1C*D_800AA60C;v=D_800AA610;if((v<t)||(v=D_800AA614,t<v)){t=v;}arg1->f154=D_80215964(arg1->f154,t,0x3DB2B8C4);
t=arg2->f4C*D_800AA618;v=D_800AA61C;if((v<t)||(v=D_800AA620,t<v)){t=v;}arg1->f158=D_80215964(arg1->f158,t,0x3E32B8C4);
v=D_802157FC(arg0->f1C,arg2->f60,arg3->f18*D_800AA624);arg0->f1C=v;t=D_800AA628;if((t<v)||(t=D_800AA62C,v<t)){arg0->f1C=t;}}
D_80241C54(arg0,arg1,0x3E567751,arg2->f4C);
sp20=arg1->f1B0;sp24=arg1->f1B4;sp28=arg1->f1B8;
D_802131C4(&sp10,&sp20,(f32*)((u8*)arg0+4));
if((sp10*sp10)+(sp18*sp18)<D_800AA630){arg1->f17C=0.0f;D_8023E95C(arg0,arg1,4);}
}}
