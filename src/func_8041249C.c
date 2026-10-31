s32 func_8029C018(s32,s32,s32,u8 *,s32);
void func_8041249C(void *arg0) {
    u8 sp18[0x20];
    s32 i;
    i=0;
    do {
        sp18[i]=*((u8 *)arg0+0x65);
        i++;
    } while(i<0x20);
    func_8029C018(*(s32 *)((u8 *)arg0+4),*(s32 *)((u8 *)arg0+8),0x400,sp18,0);
}
