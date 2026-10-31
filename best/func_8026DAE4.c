extern f32 func_8029AA80(f32); extern f32 D_80215738(f32); extern void D_8021483C(void*,f32); extern void D_80213AF4(void*,void*,void*); extern f32 D_800A9EB8;
typedef struct {f32 x,y,z;} V;
void *func_8026DAE4(void *out, u32 *entries, s32 index) {
 s32 n=index+1; u32 *next=entries+index; u32 *prev=entries+(n%3);
 V *a=(V*)next[1]; V *b=(V*)prev[1];
 f32 dx=b->x-a->x, dz=b->z-a->z;
 f32 len=func_8029AA80(dx*dx+dz*dz); f32 angle;
 if(len==0.0f) angle=0.0f; else {angle=D_80215738(dx/len); if(!(dz<0.0f)) angle=-angle;}
 { struct {s32 a,b; f32 c;} v={0,0,D_800A9EB8}; char mat[64]; s32 result[3];
 D_8021483C(mat,angle); D_80213AF4(mat,&v,result);
 *(s32*)out=result[0]; *((s32*)out+1)=result[1]; *((s32*)out+2)=result[2]; }
 return out;
}
