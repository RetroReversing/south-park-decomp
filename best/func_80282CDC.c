#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef struct {u8 pad[0x860];void *p860;u8 pad864[0x10];void *p874;u8 pad878[0x10];u16 flags;} Root;
typedef struct {u8 pad[0x10];s32 unk_10;u8 p14[0x10];s32 unk24;u8 p28[4];s32 unk2c;s32 pad30[5];s32 id;} Info;
typedef struct {u8 pad[0x20];f32 f20;u8 p24[4];u32 f28;u32 f2c;u8 p30[0x10];f32 f40;u8 p44[0xE4];f32 f128;} Obj;
typedef struct {u8 p[4];void *next;u8 p2[4];void *index;u16 mask;u8 p3[4];f32 f1c;f32 f20;f32 f208;f32 f20c;f32 f210;} Node;
typedef struct {u8 p[8];f32 f8;u8 p0c[4];f32 f10;f32 f14;u8 p18[0x11];u8 flag29;} Item;
extern f32 D_800AA358,D_800AA35C,D_800AA360,D_800AA364,D_800AA368,D_800ABA00,D_800ABA0C;extern u8 D_800CCA80[];
void *D_80203B70(void *,s32);void D_8021E710(void *,void *);void D_8021E76C(void *,void *);void D_8021E930(void *,void *);void func_8024E7C0(void *,s16);void func_8025F4AC(f32 *,void *);f32 func_8026D63C(s32,s32,s32);
void func_80282CDC(Root*arg0, Info*arg1){f32 sp10[4],sp20[4],delta,limit,off,base; s32 id,count,bit,active,remove;u16 mask;s16*list;Node*node,*next;Obj*ob;Item*it;
id=arg1->id;if(!id)return;ob=(Obj*)D_80203B70(D_800CCA80,id);if(!ob)return;off=func_8026D63C(id,arg1->unk24,arg1->unk2c);active=0;base=0.0f;
if(*(u32*)((u8*)ob+0x44)&1){func_8025F4AC(sp10,arg1);delta=(ob->f20-sp10[1])*D_800AA358;if(D_800AA35C<delta)limit=D_800AA35C;else{func_8025F4AC(sp20,arg1);limit=(ob->f20-sp20[1])*D_800AA358;}func_8025F4AC(sp10,arg1);active=sp10[1]<ob->f20;base=ob->f20-limit;}
list=*(s16**)(D_800CCA80+0x1758);count=*(s32*)(D_800CCA80+0x175c)-1;mask=*(u16*)((u8*)ob+0x56);bit=1;if(count!=-1){do{if((mask&bit)&&*list&&!(arg0->flags&bit)){node=arg0->p860;if(node){D_8021E930(&arg0->p860,node);D_8021E76C(&arg0->p874,node);}if(node){*(s16**)((u8*)node+0xc)=list;*(u16*)((u8*)node+0x10)=bit;func_8024E7C0((u8*)node+0x14,*list);*(u32*)((u8*)node+0x1c)=0;*(u32*)((u8*)node+0x208)=0;*(u32*)((u8*)node+0x20c)=0;arg0->flags|=bit;}}list+=0x16;count--;bit*=2;}while(count!=-1);}
node=arg0->p874;if(!node)return;limit=D_800AA360;delta=0.0f;do{next=node->next;it=(Item*)node->index;remove=1;if(node->mask&mask){delta=node->f208+it->f10*D_800ABA00;if(limit<delta)delta=limit;node->f208=delta;remove=0;}else{delta=node->f208;if(delta!=0.0f){delta-=it->f10*D_800ABA00;if(delta<0.0f)delta=0.0f;node->f208=delta;remove=0;}}if(!remove){node->f20c+=it->f14;node->f1c=node->f20+(D_800ABA00*D_800ABA0C*it->f8*D_800AA368);delta=it->f14;if(active&&arg1->unk_10==0)delta+=base;else if(it->flag29&1)delta+=*(f32*)((u8*)arg1+0x138)*(*(f32*)((u8*)it+0x1c));else if(it->flag29&2)delta+=off;node->f210=delta;remove=0;}if(remove){arg0->flags&=~node->mask;D_8021E930(&arg0->p874,node);D_8021E710(&arg0->p860,node);}node=next;}while(node);}
