typedef struct { f32 x,y,z; } Vec3;
typedef struct { s32 x,y,z; } IVec3;
extern f32 D_800AA174;
extern void D_80213190(Vec3 *a0, Vec3 *a1, f32 *a2);
f32 func_80279BF8(u8 *arg0, f32 arg1, f32 arg2) {
 IVec3 v1=*(IVec3 *)(arg0+0x30);
 IVec3 v2;
 f32 vy=*((f32*)&v1+1);
 f32 result;
 if (vy == 0.0f) return (*(f32 *)(arg0+4)+*(f32 *)(arg0+0x10)+*(f32 *)(arg0+0x1C)+*(f32 *)(arg0+0x28))*D_800AA174;
 v2=*(IVec3 *)arg0;
 result=((( *((f32*)&v2+2)-arg2)*((f32*)&v1)[2])+((*((f32*)&v2)-arg1)*((f32*)&v1)[0])+(*((f32*)&v2+1)*vy))/vy;
 return result;
}
void func_80279CB0(u8 *arg0, f32 arg1) {
 D_80213190((Vec3*)arg0,(Vec3*)arg0,&arg1);
 D_80213190((Vec3*)(arg0+0xC),(Vec3*)(arg0+0xC),&arg1);
 D_80213190((Vec3*)(arg0+0x18),(Vec3*)(arg0+0x18),&arg1);
 D_80213190((Vec3*)(arg0+0x24),(Vec3*)(arg0+0x24),&arg1);
}
