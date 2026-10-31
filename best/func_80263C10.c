typedef void (*Callback)(s32,s32,s32,s32,s32,s32,s32,s32);
typedef struct { Callback fn; u32 data; } CallbackEntry;
extern CallbackEntry D_800B1208[];
void func_80263C10(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7) { if (D_800B1208[a2].fn != 0) D_800B1208[a2].fn(a0,a1,a2,a3,a4,a5,a6,a7); }
