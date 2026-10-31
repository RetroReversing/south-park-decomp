typedef struct { char pad[8]; u8 *p; } Cursor;
u8 func_802959D0(Cursor *a) { u8 *p; u8 v; p=a->p; v=*p; a->p=p+1; return v; }
s16 func_802959E4(Cursor *a) { u8 *p; u32 hi; u32 lo; p=a->p; hi=*p; p++; a->p=p; lo=*p; p++; a->p=p; return (s16)((hi<<8)|lo); }
s32 func_80295A14(Cursor *a) { u8 *p; u32 b0,b1,b2,b3; p=a->p; b0=*p; p++; a->p=p; b1=*p; p++; a->p=p; b2=*p; p++; a->p=p; b3=*p; p++; a->p=p; return (b0<<24)|(b1<<16)|(b2<<8)|b3; }
s32 func_8029597C(Cursor *a) { u8 c; s32 v; c=*a->p++; v=c; if(c&0x80) { v &= 0x7f; do { c=*a->p++; v=(v<<7)+(c&0x7f); } while(c&0x80); } return v; }
