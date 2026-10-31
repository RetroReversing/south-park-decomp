extern s32 D_800F150C; extern s32 D_800A9C10[]; extern s32 D_800A9C28[]; extern u8 D_800B3AE8[]; extern s16 D_800CE410; extern f32 D_800F1510,D_800F1514; extern s8 D_800CE80E[],D_800CE610[],D_800CE412[],D_800CEA0C[],D_800CEC0A[];
extern void *D_802046B8(void*,s32,s32,s32); extern void D_80221CCC(s32,void*); extern void D_80221864(s32,void*);
void func_80268DB4(void*,s32,void**,u8*); void func_80267DA8(void*,s32,s32,s32,f32);
typedef struct{u8 tag;s8 val;}Tbl;
void func_802668C4(u8 *arg0,f32 arg1,f32 arg2){
char *__repair_addr;
Tbl *tbl;s32 id;void*h,*off;u8 c;s32 f;
switch(D_800F150C){case 0:tbl=(Tbl*)D_800CE80E;id=3;break;case 1:tbl=(Tbl*)D_800CE610;id=2;break;case 2:tbl=(Tbl*)D_800CE412;id=1;break;case 3:tbl=(Tbl*)D_800CEA0C;id=6;break;case 4:tbl=(Tbl*)D_800CEC0A;id=7;break;}
__repair_addr = (char *)(D_800B3AE8+0x1908);

if (*(s32*)(__repair_addr)==0)return;
h=D_802046B8(D_800B3AE8+0x1908,(s16)id,4,1);if(!h)return;D_80221CCC(0,h);
c=*arg0;if(!c)goto end;
do{arg0++;if(tbl[c].tag!=255){func_80268DB4(h,tbl[c].tag,&off,(u8*)&id);if(off)func_80267DA8(off,(s32)arg1,(s32)arg2,(s32)D_800F1510,D_800F1514);}
switch(D_800F150C){case 0:f=((Tbl*)D_800CE80E)[c].val;break;case 1:f=((Tbl*)D_800CE610)[c].val;break;case 2:f=((Tbl*)D_800CE412)[c].val;break;case 3:f=((Tbl*)D_800CEA0C)[c].val;break;case 4:f=((Tbl*)D_800CEC0A)[c].val;break;default:f=0;}
arg1+=f*D_800F1510;c=*arg0;}while(c);
end:D_80221864(0,h);}
