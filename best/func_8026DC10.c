extern void D_802131C4(void*,s32,s32); extern void D_80213274(void*,void*,void*); extern f32 D_80215738(f32); extern s32 func_8026CB20(void); extern f32 func_8029AA80(f32); extern f32 D_800A9EBC; extern void *D_800B1E58; extern f32 D_800F1548[]; extern f32 D_800F154C; extern s32 D_800F1550;
typedef struct {f32 x,y,z;} V3;
f32 func_8026DC10(void *arg0) { f32 x,z,r,angle; s32 mid; V3 a,b;
 if(!func_8026CB20()) return 0.0f;
 if(!arg0){D_800F1548[0]=0.0f;D_800F1550=0;D_800F154C=D_800A9EBC;goto calculate;}
 if(arg0!=D_800B1E58){D_802131C4(&a,*(s32*)((char*)arg0+8),*(s32*)((char*)arg0+4));D_802131C4(&b,*(s32*)((char*)arg0+0xc),*(s32*)((char*)arg0+8));D_80213274(D_800F1548,&a,&b);}
 calculate:
 x=D_800F1548[0]; mid=*(s32*)((char*)D_800F1548+4); z=D_800F1548[2]; D_800B1E58=arg0; r=func_8029AA80(x*x+z*z);
 if(r==0.0f)return 0.0f; angle=D_80215738(z/r); if(!(x>0.0f))angle=-angle; return angle;}
