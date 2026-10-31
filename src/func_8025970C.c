extern s32 D_800AB9FC;
void func_80259830(s32 *a){s32 x=a[1]; a[2]=x; a[3]=a[0]+(x*D_800AB9FC<<6);}
s32 func_80259860(s32 *a,s32 b){s32 x=0;if(a[2]>=b){x=a[3];a[3]=x+(b<<6);a[2]-=b;}return x;}
void func_8025970C(u32 a,u32 b,s32 c,s32(*d)(u32,u32),void(*e)(u32,u32)){u32 i,j,k;if(a<b){i=a+c;do{j=a;if(i<=b){k=i;do{if(d(k,j)>0)j=i;i+=c;k=i;}while(i<=b);}e(j,b);b-=c;i=a+c;}while(a<b);}}
extern s32 func_8029D1F8(s32);
s32 func_802591D4(void *unused,void *p){s32 v0=0;if((*(s32*)((char*)p+4)&3)==0){if(*(s32*)((char*)p+0x10)==1){if((*(s32*)((char*)p+8)&0x60)==0x60){func_8029D1F8(*(s32*)((char*)p+0xC));v0=1;}}}return v0;}
