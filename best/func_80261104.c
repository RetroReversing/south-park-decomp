extern f32 D_800A9AB8;
void D_802131C4(f32*,f32*,f32*);
void D_802131F8(f32*,f32*,f32);
void D_80213274(f32*,f32*,f32*);
void D_802132D8(f32*);
void D_80213A34(void*);
void D_80213D94(void*,s32*,f32*);
void func_80261104(void *arg0, void *arg1, void *arg2, void *arg3) {
char *__repair_addr;

    s32 sp10[2]; f32 sp18; f32 sp20[4],sp30[4],sp40[4],sp50[4]; f32 pad[2];
    D_802131C4(sp20,(f32*)((char*)arg0+0x10),(f32*)((char*)arg1+0x10)); D_802132D8(sp20);
    sp10[0]=0; sp10[1]=0;
__repair_addr = (char *)((char*)&D_800A9AB8+4);
 sp18=*(f32*)(__repair_addr);
    D_80213D94((char*)arg2+0x1AC,sp10,sp30);
    sp30[1]=-sp30[1]; sp30[2]=-sp30[2];
    D_802131F8(sp40,sp30,sp30[0]*sp20[0]+sp30[1]*sp20[1]+sp30[2]*sp20[2]);
    D_802131C4(sp40,sp20,sp40); D_802132D8(sp40); D_80213274(sp50,sp30,sp40);
    D_802131F8(sp50,sp50,*(s32*)((char*)arg0+0x1C)); D_802131F8(sp40,sp40,*(s32*)((char*)arg0+0x20)); D_802131F8(sp30,sp30,*(s32*)((char*)arg0+0x24));
    D_80213A34(arg3);
    *(f32*)((char*)arg3)=sp50[0]; *(f32*)((char*)arg3+4)=sp50[1]; *(f32*)((char*)arg3+8)=sp50[2];
    *(f32*)((char*)arg3+16)=sp40[0]; *(f32*)((char*)arg3+20)=sp40[1]; *(f32*)((char*)arg3+24)=sp40[2];
    *(f32*)((char*)arg3+32)=sp30[0]; *(f32*)((char*)arg3+36)=sp30[1]; *(f32*)((char*)arg3+40)=sp30[2];
    *(f32*)((char*)arg3+48)=*(f32*)((char*)arg0+0x10); *(f32*)((char*)arg3+52)=*(f32*)((char*)arg0+0x14); *(f32*)((char*)arg3+56)=*(f32*)((char*)arg0+0x18);
}
