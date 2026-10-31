typedef void (*BlendFn)(void *, void *, s32);
extern void D_27F55C(void *,void *,s32),D_281560(void *,void *,s32),D_281618(void *,void *,s32);
extern s32 D_80210ADC(void *,s32);extern void D_8021530C(void *);extern s32 func_80280A44(void);extern void func_80280B98(void *,s32);extern f32 D_800AA270;
typedef struct {s32 count; s32 offs[1];} Mtx;
s32 func_8027F6FC(Mtx *m, Mtx *unused, s32 rows, s32 cols, s32 factor, s32 a5, s32 radius, s32 mode) {
int __repair_literal;

 BlendFn fn; s32 tbl[4],i,j,k,idx,cur; f32 *data,sum,cnt; s32 n,off;
 switch(mode){case 0:fn=D_281560;break;case 1:fn=D_27F55C;break;default:fn=D_281618;break;}
 m->count=rows; m->offs[0]=(rows*4+15)&~7;
 if(rows>0) for(i=1;i<=rows;i++) *((s32*)((u8*)((unsigned char *)m + 4)+i*4))=0xDEADBEEF;
__repair_literal = 0;

 if(rows>__repair_literal) for(i=0;i<rows;i++){n=m->count;j=0;while(j<=n&&m->offs[j]!=0xDEADBEEF)j++;j--;m->offs[j+1]=m->offs[j]+factor*16;}
 tbl[0]=func_80280A44();
 if(rows>0) for(i=0;i<rows;i++){cur=D_80210ADC(m,i);for(j=0;j<cols;j++){func_80280B98(tbl,31);fn(tbl,(void*)cur,factor);cur+=4;}}
 if(rows>0) for(i=0;i<rows;i++){data=(f32*)D_80210ADC(m,i);if(cols==4){if(radius)for(j=0;j<cols;j++)for(off=0;off<rows;off++){sum=0;cnt=0;for(k=-radius;k<=radius;k++){idx=(j+k+rows)%rows;sum+=data[idx*4+off];cnt+=D_800AA270;}data[j+off*4]=sum/cnt;}for(j=0;j<rows;j++){D_8021530C(data);data+=4;}}}
 return 1;
}
