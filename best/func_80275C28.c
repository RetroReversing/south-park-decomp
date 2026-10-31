typedef struct { u8 pad[0xA54]; void *texture; u8 padA58[0x34]; s16 count[1]; } A;
typedef struct { u8 pad[8]; s16 type; s16 unkA; s16 flags; } B;
typedef struct { u8 pad[0x1C]; s16 id; s16 limit; } C;
extern f32 D_800AA03C;
extern u8 D_800D77E6, D_800D77E8;
extern u32 D_800C92F0[];
extern u8 D_800D64F8[];
extern u32 D_800B2190[];
extern C *D_800AD1F8[];
extern s32 func_8028C6BC(s32,s32);
extern s32 func_8028C720(void);
extern s32 func_802758B4(void*,void*);
extern s32 func_8025FEC4(void*,void*,void*,s32,f32);
extern s32 func_8025F5C8(s32,s32,s32,s32,s32,s32,s32,s32);
extern s32 func_8025FCE8(u8*,s32,s32);
extern s32 D_8023BFAC(void*,void*,s16);
s32 func_80275C28(A *a, B *b) {
 s32 result=0, ok=1, index, i;
 s16 saved, type=b->type, amount;
 C *entry;
 if(type==-1) goto render;
 if(type==1 || type==4) {
   saved=*(s16*)((u8*)a + type*2 + 0xA8C);
   index=0;
   if(type != 1) { ok=0; if(type!=4) goto restore; index=4; i=0x1454; }
   else { index=1; i=0x1452; }
   if(D_800D77E8==0) {
      if(func_8028C6BC(i,0)!=-1) ok=1;
      else index=func_8028C720();
   }
   if(index!=-1) ok=func_802758B4(a,(u8*)D_800B2190+index*20);
   else ok=0;
restore:
   if(ok) *(s16*)((u8*)a + type*2 + 0xA8C)=saved;
   else func_8025FEC4(D_800D64F8,a->texture,(u8*)D_800C92F0+D_800D77E6*4,0x9876,D_800AA03C);
 }
render:
 if(ok) {
   i=0;
   do {
      entry=D_800AD1F8[i];
      i++;
      if(entry->id==type) {
         amount=*(u16*)((u8*)a+0xA8C+type*2)+b->unkA;
         if(*(s16*)((u8*)a+0xA8C+type*2)<entry->limit) {
            *(s16*)((u8*)a+0xA8C+type*2)=amount;
            if(entry->limit<amount) *(s16*)((u8*)a+0xA8C+type*2)=entry->limit;
            result=1;
         } else result=0;
         break;
      }
   } while(i<9);
 }
 if(result) {
   amount=b->flags;
   index=*(s32*)((u8*)b->pad + ((u32)D_800D77E6<<2));
   func_8025F5C8((s32)a->texture,0xC0,0x32,0x32,0xFF,0,0,2);
   if(index) func_8025FCE8(&D_800D77E6-0x12EE,(s32)a->texture,index);
   if(amount) D_8023BFAC(a,a,amount);
 }
 return result;
}
