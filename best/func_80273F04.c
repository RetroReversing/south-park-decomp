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
typedef struct { f32 z,y,x; } Z;
extern s32 func_8026F7BC(void *,s16,Z,s32,s32,s32);
extern s32 func_802701C4(void *,s16,s32);
extern s32 func_802706D8(void *,s32);
extern s32 func_802706E0(void *);
extern s32 D_800D7908;
extern u8 D_800F1F20[];
void func_80273F04(s32 arg0, s32 arg1) {
 s32 idx,old,val; Z z;
 if(D_800D7908!=0) return;
 idx=(s16)arg0;
 if(idx>=0x7530) { func_802701C4(D_800F1F20,idx,arg1); return; }
 z.z=0.0f;z.y=0.0f;z.x=0.0f;
 old=func_802706E0(D_800F1F20);
 func_802706D8(D_800F1F20,1);
 val=func_8026F7BC(D_800F1F20,idx,z,0,arg1,-1);
 func_802706D8(D_800F1F20,old);
}
