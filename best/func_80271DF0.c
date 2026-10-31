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
extern s32 func_80295C28(void*); extern s32 func_802964F0(void*,s32,s32,s32); extern s32 alSndpStop(void*);
s32 func_80271DF0(void *arg0, void *arg1, s32 arg2, s16 arg3) {
 s32 best=arg3, index=-1, i=0, val; s32 volatile guard; s32 result; void *obj=*(void**)arg0; char *entry=(char*)arg0+0x38; void *limit=(char*)obj+0x7c;
 for(;;) {
  if(*(s32*)(entry-0x2c)==-1 && *(s16*)((char*)obj+0x102)!=i) goto done;
  val=*(s16*)entry;
  if(val<best && best>=val && val!=100) { best=val; index=i; }
  if(++i>=16) break;
  entry+=0xb8;
 }
 if(index==-1) return -1;
 if(*(s16*)((char*)limit+index*2+0x60)==-1) {
  void *p=*(void**)((char*)obj+0x140);
  if(p!=(char*)obj+0x13c && arg3<*(s16*)((char*)p+0x3c)) return -1;
  return index;
 }
 {
  char *slot=(char*)arg0+index*0xb8+4; void *a=*(void**)(slot+0xb0); void *b=(char*)a+0x84;
  *(s32*)(slot+0xa8)=1; *(s32*)(slot+0x4c)=0;
  if(*(s32*)(slot+0x10)!=*(s32*)((char*)a+0x104)) {
   s32 id=*(s32*)slot; func_802964F0(b,*(s16*)((char*)a+id*2+0xdc),index,best);
   if(func_80295C28(b)) alSndpStop(b);
   *(s32*)(slot+4)=-1;
  }
 }
 return *(s32*)((char*)arg0+0xb90)==-1?16:-1;
done: return i;
}
