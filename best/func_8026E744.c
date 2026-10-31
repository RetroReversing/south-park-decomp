s32 D_8029AA90(void);
void func_80258EF4(void*,void*,void*);
void func_8026E914(s32,s32);
void func_80295AE8(void*);
void func_8029DC78(void*,u32*,s32);
extern u32 D_800B1E68; extern s32 D_800B1E74;
extern u8 D_800D79A8[],D_800F1CC8[],D_800F1CFC[];
extern void *D_800F1CC4;
extern s32 D_800F1CF0[];
void func_8026E744(void) {
int __repair_literal;

 u8 sp10[8]; u32 sp18; u32 count=0; s32 arg=0; s32 flag=0; void *p; u16 t;
 func_80258EF4(D_800D79A8,sp10,D_800F1CC8);
 do {
  func_8029DC78(D_800F1CC8,&sp18,1);
  switch(sp18) {
  case 4: break;
  case 1:
   count++;
   if(count>=0x15){count=0;
  case 7:
   D_800B1E74++;
   while(!(D_8029AA90()&0x80000000)) {
__repair_literal = 4;

    func_8026E914(*(s32*)((u8*)&D_800F1CF0 + (D_800B1E68%3)*__repair_literal),flag);
   }
   p=D_800F1CC4;
   if(p) do { t=*(u16*)((u8*)p+8); if(t) *(u16*)((u8*)p+8)=t-1; p=*(void**)p; } while(p);
   }
   break;
  }
 } while(flag==0);
 func_80295AE8(D_800F1CFC);
}
