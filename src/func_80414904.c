extern s16 D_800AB8AC[];
s16 func_80414904(void *arg0) {
 s32 *p=(s32*)((u8*)arg0+0xC);
 if(*p>=0x12) *p=0;
 return D_800AB8AC[*p];
}
