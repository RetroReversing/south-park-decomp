extern s32 func_802665C4(s32 *); extern s32 *func_80400DB8(void *); extern u8 D_800D77E6; extern s32 D_800F150C;
typedef struct { char pad[4]; s16 type; char pad2[0xE]; s32 *ptr; } S04004;
f32 func_80404004(S04004 *arg0,s32 arg1){ s32 *p; s16 t=arg0->type;
if(t==7){p=func_80400DB8(arg0); goto selected;}
if(t==9){p=arg0->ptr; arg1=1; goto selected;}
p=arg0->ptr[D_800D77E6];
selected:
if(arg1==1) goto write_arg;
if(arg1<2){if(arg1==0) goto write_zero; goto done;}
if(arg1==2) goto write_arg;
if(arg1==3) goto write_arg;
goto done;
write_zero: D_800F150C=0; goto done;
write_arg: D_800F150C=arg1;
done:
if(arg0->type!=1) return (f32)func_802665C4(p);
return (f32)*p;}
