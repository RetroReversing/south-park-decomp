extern f32 D_800A98DC,D_800A98E0,D_800A98E4,D_800A98E8,D_800A98EC,D_800A98F0,D_800A98F4,D_800A98F8,D_800F14E8;
void func_8025D798(void *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4) {
    s32 a,b,c,d;
    a=(s32)*(f32*)((u8*)arg0+0x2A8);
    if(a<arg1){a+=16;D_800F14E8=D_800A98DC;if(arg1<a)a=arg1;}
    else if(arg1<a){a-=16;D_800F14E8=D_800A98E0;if(a<arg1)a=arg1;}
    b=(s32)*(f32*)((u8*)arg0+0x2AC);
    *(f32*)((u8*)arg0+0x2A8)=(f32)a;
    if(b<arg2){b+=16;D_800F14E8=D_800A98E4;if(arg2<b)b=arg2;}
    else if(arg2<b){b-=16;D_800F14E8=D_800A98E8;if(b<arg2)b=arg2;}
    c=(s32)*(f32*)((u8*)arg0+0x2B0);
    *(f32*)((u8*)arg0+0x2AC)=(f32)b;
    if(c<arg3){c+=16;D_800F14E8=D_800A98EC;if(arg3<c)c=arg3;}
    else if(arg3<c){c-=16;D_800F14E8=D_800A98F0;if(c<arg3)c=arg3;}
    d=(s32)*(f32*)((u8*)arg0+0x2B4);
    *(f32*)((u8*)arg0+0x2B0)=(f32)c;
    if(d<arg4){d+=16;D_800F14E8=D_800A98F4;if(arg4<d)d=arg4;}
    else if(arg4<d){d-=16;D_800F14E8=D_800A98F8;if(d<arg4)d=arg4;}
    *(f32*)((u8*)arg0+0x2B4)=(f32)d;
}
