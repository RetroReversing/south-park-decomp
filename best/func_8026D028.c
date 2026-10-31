typedef struct { f32 x,y,z,w; } Vec4_local;
extern void D_80213190(Vec4_local*, Vec4_local*, Vec4_local*);
extern void D_802131F8(Vec4_local*, Vec4_local*, u32);
extern void D_802131C4(Vec4_local*);
extern f32 func_8029AA80(f32);
f32 func_8026D028(Vec4_local *a, Vec4_local *b) {
 Vec4_local v0,v1,v2, c0,c1,d;
 D_80213190(&v0,(Vec4_local*)((char*)a+4),(Vec4_local*)((char*)a+8));
 D_802131F8(&v0,&v0,0x3F000000u);
 D_80213190(&v1,(Vec4_local*)((char*)a+8),(Vec4_local*)((char*)a+12));
 D_802131F8(&v1,&v1,0.5f);
 D_80213190(&v2,(Vec4_local*)((char*)a+12),(Vec4_local*)((char*)a+4));
 D_802131F8(&v2,&v2,0x3F000000u);
 D_80213190(&c0,&v0,&v1); D_80213190(&c0,&c0,&v2);
 D_802131F8(&c0,&c0,0x3EAAAAABu); c0.w=0.0f;
 D_80213190(&v0,(Vec4_local*)((char*)b+4),(Vec4_local*)((char*)b+8));
 D_802131F8(&v0,&v0,0.5f);
 D_80213190(&v1,(Vec4_local*)((char*)b+8),(Vec4_local*)((char*)b+12));
 D_802131F8(&v1,&v1,0x3F000000u);
 D_80213190(&v2,(Vec4_local*)((char*)b+12),(Vec4_local*)((char*)b+4));
 D_802131F8(&v2,&v2,0.5f);
 D_80213190(&c1,&v0,&v1); D_80213190(&c1,&c1,&v2);
 D_802131F8(&c1,&c1,0x3EAAAAABu); c1.w=0.0f;
 D_802131C4(&d);
 return func_8029AA80(d.x*d.x+d.y*d.y+d.z*d.z);
}
