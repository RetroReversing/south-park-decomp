extern f32 D_800A9EC0;
extern void *D_80213190(void *, void *, void *);
extern void *D_802131F8(void *, void *, f32);
typedef struct { f32 x,y,z,w; } V4;
typedef struct { unsigned char pad[4]; V4 *p4; V4 *p8; V4 *pC; } Obj;
void func_8026DFC0(Obj *obj, V4 *out) {
 V4 a,b,c;
 V4 *q;
 f32 k;
 D_80213190(&a,obj->p4,obj->p8);
 k=D_800A9EC0;
 D_802131F8(&a,&a,k);
 D_80213190(&b,obj->p8,obj->pC);
 D_802131F8(&b,&b,k);
 D_80213190(&c,obj->pC,obj->p4);
 D_802131F8(&c,&c,k);
 D_80213190(out,&a,&b);
 D_80213190(out,out,&c);
 D_802131F8(out,out,0.33333334f);
 out->y=0.0f;
}
