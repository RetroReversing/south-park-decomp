extern f32 D_800A9E7C,D_800A9E80,D_800A9E84,D_800DD974; extern f32 D_80215738(f32); extern f32 D_80299AE8(f32); extern f32 func_8029A900(f32); extern f32 func_8029AA80(f32,void*,void*,s32); extern s32 D_80215200(s32*);
typedef struct {s32 x,y,z,pad;} Out4; typedef struct {float x,y,z;} P3; typedef struct {P3 *p;} Entry;
void *func_8026C8F4(Out4 *out,Entry *entries,s32 index){
 s32 a,b,c,d,e,f,g,h,i,j,k,l; f32 sp14,sp1C,sp20,sp2C,dx,dz,dist,ang,theta,keep1,keep2,keep3; Entry *first,*second;P3 *p,*q;
 first=entries+((index+1)%3);second=entries+index;p=first->p;q=second->p;dx=p->x-q->x;dz=p->z-q->z;
 dist=func_8029AA80(dx*dx+dz*dz,first,second,(index+1)/3);
 if(dist==0.0f)ang=0.0f;else {ang=D_80215738(dx/dist);if(!(dz<0.0f))ang=-ang;}
 theta=func_8029A900(ang*D_800A9E7C);sp14=theta;
 first=entries+((index+1)%3);second=entries+index;p=first->p;q=second->p;dx=p->x-q->x;dz=p->z-q->z;D_800DD974=theta;
 dist=func_8029AA80(dx*dx+dz*dz,first,second,(index+1)/3);
 if(dist==0.0f)ang=0.0f;else {ang=D_80215738(dx/dist);if(!(dz<0.0f))ang=-ang;}
 sp1C=D_80299AE8(ang*D_800A9E80);sp20=func_8029A900(D_800A9E84);D_800DD974=sp20;sp2C=D_80299AE8(D_800A9E84);
 D_80215200((s32*)&sp20);out->x=((s32*)&sp20)[0];out->y=((s32*)&sp20)[1];out->z=((s32*)&sp20)[2];out->pad=((s32*)&sp20)[3];return out;
}
