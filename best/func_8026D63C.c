f32 D_802131C4(f32 *,void *,void *); void D_80213274(void *); extern f32 D_800A9EA8,D_800A9EAC; extern void *D_800B1E58; extern f32 D_800F1548[3];
f32 func_8026D63C(void *obj,f32 x,f32 y){f32 v0[4],v1[4];f32 a,b,c,d;f32 *p;
if(obj==0)return D_800A9EA8;
if(obj!=D_800B1E58){D_802131C4(v0,*(void **)(obj+8),*(void **)(obj+4));D_802131C4(v1,*(void **)(obj+0xc),*(void **)(obj+8));D_80213274(D_800F1548);}
a=D_800F1548[0];b=D_800F1548[1];c=D_800F1548[2];D_800B1E58=obj;
if(b==0.0f)return ((*(f32 **)(obj+4))[1]+(*(f32 **)(obj+8))[1]+(*(f32 **)(obj+0xc))[1])*D_800A9EAC;
p=*(f32 **)(obj+4);d=(p[2]-y)*c;d=d+(p[0]-x)*a;d=d+p[1]*b;return d/b;
}
