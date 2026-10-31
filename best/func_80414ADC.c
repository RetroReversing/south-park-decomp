extern s32 D_80204858(s32,s32); extern void *D_80210ADC(s32,s32); extern s32 D_80222FA0(void*,s32);
void func_80414ADC(void *arg0, s32 **arg1){
s32 *ptr; s32 *base; s32 count,i; s32 *rec; s32 off; s32 val;
if(D_80222FA0(arg1,0)==0)return;
ptr=**arg1; base=D_80210ADC((s32)ptr,2); count=base[1]; rec = (char *)(base); rec += (s32)(2);
off=(s32)D_80210ADC((s32)ptr,0); i=0;
if(count>0){do{val=rec[4];if(val==-1)rec[4]=0;else rec[4]=D_80204858((s32)arg0,val);
i++;rec[5]=off+rec[5];rec[7]=off+rec[7];rec[6]=off+rec[6];rec[9]=off+rec[9];rec[8]=off+rec[8];rec[11]=off+rec[11];rec[10]=off+rec[10];rec[13]=off+rec[13];rec[12]=off+rec[12];rec=(s32*)((char*)rec+0x38);
}while(i<count);}
}
