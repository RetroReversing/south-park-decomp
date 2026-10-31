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
typedef struct Buf16 { u8 b[0x10]; } Buf16;
typedef struct Buf8 { u8 b[8]; } Buf8;
extern u8 D_800F6090;
extern u8 D_8010E858[];
void func_8029C5A4();
s32 func_8029BE90();
s32 func_8029C638();
s32 func_8029DC78();
s32 func_8029C418();
u32 func_80410570();
void func_8029C610();
s32 func_8029BC60(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    Buf16 buf[2];
    Buf8 tail;
    u8 *src;
    u8 *dst;
    s32 i, n, ret;
    dst=(u8 *)buf; ret=2;
    func_8029C5A4();
    D_800F6090=2;
    func_8029BE90(arg1,arg2&0xFFFF);
    func_8029C638(1,D_8010E858);
    func_8029DC78(arg0,0,1);
    do {
        func_8029C638(0,D_8010E858);
        func_8029DC78(arg0,0,1);
        src=D_8010E858;
        if(arg1!=0) {
            if(arg1>0) {
                i=0;
                do { i++; src++; } while(i<arg1);
            }
        }
        *(Buf16 *)dst=*(Buf16 *)src;
        *(Buf16 *)(dst+0x10)=*(Buf16 *)(src+0x10);
        *(Buf8 *)(dst+0x20)=*(Buf8 *)(src+0x20);
        n=(buf[0].b[2]&0xC0)>>4;
        if(n==0) {
            n=func_8029C418(&buf[0].b[6],(void *)src)&0xFF;
            if(n!=tail.b[6]) {
                n=func_80410570(arg0,arg1);
                if(n==0)n=4;
            } else {
                for(i=0;i<0x20;i++) * (arg3+i)=(&buf[0].b[6])[i];
            }
        } else n=1;
        if(n==4) ret--; else break;
    } while(ret>=0);
    func_8029C610();
    return n;
}
