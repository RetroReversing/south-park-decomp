typedef struct { u8 pad[0x918]; void *p918; void *p91c; } A;
typedef struct { u8 pad0[0xB0]; f32 x; f32 y; u8 padB8[0x1F8]; f32 dx; f32 dy; } B;
extern void func_8025F7FC(void *);
extern void D_8020FC58(void);
extern void func_8024E8B0(void);
extern void func_80269028(s32);
extern void *func_80259860(void);
extern void D_80211B2C(void *, void *);
extern void func_80267FA4(s32, s32, void *, void *);
extern void D_8020B858(s32);
extern void D_8020BDE4(s32);
extern void func_8026798C(s32,s32,s16,s16,f32,f32,s32,s32);
extern f32 D_800A9D8C, D_800A9D90;
extern u8 D_800D77E8;
extern u32 D_800D7F68;
extern u32 D_800CCB5C;
extern void *D_800CCBF8;
void func_8026A618(A *a, B *b) {
 s32 *p; s32 t; f32 f; s32 color; u32 *q; s32 x,y;
 func_8025F7FC(b); D_8020FC58(); func_8024E8B0();
 func_80269028((s32)a->pad[8]);
 p=(s32*)D_800D7F68;
 *p++=0xDB040004; *p++=4; *p++=0xDB04000C; *p++=4; *p++=0xDB040014; *p++=-4; *p++=0xDB04001C; *p++=-4;
 D_800D7F68=(u32)p;
 t=(s32)(u32)func_80259860(); D_80211B2C(a->pad+0x898,(void*)t); a->p918=(void*)t;
 if(!D_800D77E8){t=(s32)(u32)func_80259860(); a->p91c=(void*)t;D_80211B2C(a->pad+0x8D8,(void*)t);}
 p=(s32*)D_800D7F68; t=*p;
 *p++=0xFB000000;
 f=(f32)a->pad[8]*D_800A9D8C; *p++=0x64646400 | ((s32)(f-D_800A9D90)&255);
 D_800D7F68=(u32)p;
 func_80267FA4(0x1F5,1,a->pad+0x830,a->p918);
 // rough continuation omitted
}
