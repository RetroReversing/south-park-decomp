typedef struct { char pad[8]; u8 *p; } Cursor;
u8 func_802959D0(Cursor *a) { u8 *p; u8 v; p=a->p; v=*p; a->p=p+1; return v; }
s16 func_802959E4(Cursor *a) { u8 *p; u8 x; u8 y; p=a->p; x=*p; p++; a->p=p; y=*p; p++; a->p=p; return (s16)((x<<8)|y); }
s32 func_80295A14(Cursor *a) { u8 *p; u32 x,y,z,w; p=a->p; x=p[0]; y=p[1]; z=p[2]; w=p[3]; a->p=p+4; return (x<<24)|(y<<16)|(z<<8)|w; }
s32 func_8029597C(Cursor *a) { u8 c; s32 v; c=*a->p++; v=c; if(c&0x80) { v &= 0x7f; do { c=*a->p++; v=(v<<7)+(c&0x7f); } while(c&0x80); } return v; }
