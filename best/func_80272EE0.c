extern f32 D_800A9F84,D_800A9F88,D_800A9F8C,D_800B2138;
typedef struct { char pad[0x30]; f32 x,y,z; char p[4]; s8 mode; } A;
typedef struct { char pad[0x134]; f32 x,y,z; } B;
f32 func_80272EE0(A *a,B *b){
 f32 dx,dy,dz,dist,fall=0.0f,v; s32 mode; s32 selector=1;
 dx=a->x-b->x;dx=dx*dx;
 dy=a->y-b->y;dy=dy*dy;
 dz=a->z-b->z;dz=dz*dz;
 dist=dx+dy;dist=dist+dz;
 if(dist>=D_800B2138) goto modepart;
 fall=D_800A9F84-dist/D_800B2138;
modepart:
 mode=a->mode; v=D_800A9F88-fall;
 if(mode==1) {f32 t=v*v; return D_800A9F8C-t;}
 if(mode<2) return D_800A9F88-v;
 if(mode==2){f32 t=v*v; v=t*t*v;}
 return D_800A9F8C-v;
}
