extern void D_802131C4(f32 *,void *,void *); extern f32 D_800AA16C;
typedef struct { u8 pad[0x30]; f32 x,y,z; } ObjP;
s32 func_802796E8(ObjP *a,void *b,void *c,f32 *out) {
 f32 v[3],q[3],d,e; s32 r;
 D_802131C4(v,c,b);
 d=(a->x*v[0]+a->y*v[1])+a->z*v[2];
 if(d>=0.0f) { *out=D_800AA16C; return 0; }
 D_802131C4(q,b,a);
 e=(a->x*q[0]+a->y*q[1])+a->z*q[2];
 *out=-e/d; return 1;
}
