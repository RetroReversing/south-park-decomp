extern void D_802131C4(f32 *,void *,void *);
typedef struct { u8 pad[0x30]; f32 x,y,z; } ObjP;
s32 func_80279608(ObjP *a,void *b,void *c) {
 f32 v[3]; f32 d; s32 x,y;
 D_802131C4(v,b,a);
 d=a->x*v[0]; d=d+a->y*v[1]; d=d+a->z*v[2];
 x=0; if(d>=0.0f) x=1;
 D_802131C4(v,c,a);
 d=a->x*v[0]; d=d+a->y*v[1]; d=d+a->z*v[2];
 y=0; if(d>=0.0f) y=1;
 return x^y;
}
