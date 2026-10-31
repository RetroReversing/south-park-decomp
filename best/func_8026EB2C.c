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
typedef struct N {struct N *next;s32 key;u16 count,id;char pad[4];} N;
extern N *D_800F1CC4; extern s32 D_800B1E78,D_800F1D68;
extern N *func_80293970(s32,s32,s32,s32,s32); extern void func_802A0938(void*,s32,u16,N*); extern void func_802A0828(void*,u16); extern void func_8029E4E0(void*);
void func_8026EB2C(s32 arg0, u16 arg1) {
 N *s1=D_800F1CC4,*a3=0; void *s0,*a0;
 if(s1) {
  do {
   if(s1->key==arg0) {
    s1->count=3;
    if(s1->id!=arg1){s1->id=arg1;s0=(char*)s1+0x10;func_802A0938(s0,arg0,arg1,a3);func_802A0828(s0,arg1);}
    a0=(char*)s1+0x10; goto finish;
   }
   if(s1->count==0)a3=s1;
   s1=s1->next;
  } while(s1);
 }
 if(a3==0) {
  a3=func_80293970(0,0,D_800F1D68,1,0x90);
  a3->next=D_800F1CC4; D_800F1CC4=a3; D_800B1E78++;
 }
 s0=(char*)a3+0x10;
 a3->key=arg0; a3->count=3; a3->id=arg1;
 func_802A0938(s0,arg0,arg1,a3); a0=s0;
finish:
 func_8029E4E0(a0);
}
