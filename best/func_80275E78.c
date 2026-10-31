extern f32 D_800AA058[2]; extern f32 D_800AA060[2];
extern s32 D_800AA040[6];
extern s32 func_80289C48(void*);
extern void func_8025F5C8();
extern void func_8025FCE8();
extern void D_8023BFAC();
s32 func_80275E78(u8 *obj, u8 *arg) {
char *__repair_addr;

    s32 result = 1, id, i, ptr;
    s16 amount;
    u8 color[4], half[4], idx;
    id = (s16)((u16)*(u16 *)(arg + 4) - 0x13EC);
    ptr=0; amount=0;
    if ((u32)id < 6) {
        switch (id) {
__repair_addr = (char *)(obj + 0xAC8);

        case 0:
            *(f32 *)(__repair_addr) += D_800AA058[0];
            *(s32 *)(obj+0xA38)=*(s32 *)(obj+0x34);
            *(s32 *)(obj+0xA3C)=*(s32 *)(obj+0x38);
            *(s32 *)(obj+0xA40)=*(s32 *)(obj+0x3C);
            *(s32 *)(obj+0xA44)=0;
            color[0]=200; color[1]=0; color[2]=200; color[3]=40;
            break;
        case 1:
            *(f32 *)(obj+0xACC)+=D_800AA058[1];
            color[0]=100;color[1]=0;color[2]=200;color[3]=40;
            break;
        case 2: {
            s16 x=*(s16 *)(obj+0xA78);
            if (x<100) {
                s32 y=x+25;
                if(y>=101)y=100;
                *(s16 *)(obj+0xA78)=y;
            } else result=0;
            if(result) {color[0]=200;color[1]=200;color[2]=100;color[3]=40;}
            break;
        }
        case 3:
            *(f32 *)(obj+0xAD0)+=D_800AA060[0];
            color[0]=200;color[1]=50;color[2]=255;color[3]=40;
            break;
        case 4:
            *(f32 *)(obj+0xAD4)+=D_800AA060[1];
            color[0]=100;color[1]=200;color[2]=200;color[3]=40;
            break;
        default: result=func_80289C48(obj); break;
        }
    }
    if(result) {
        for(i=0;i<3;i++) half[i]=color[i]>>1;
        half[3]=color[3];
        *(u32 *)(obj+0xAE0)=*(u32*)color;
        *(u32 *)(obj+0xAE4)=*(u32*)half;
        obj[0xAE8]=0;
        idx=D_800D77E6;
        ptr=*(s32 *)(*(s32 *)(arg)+idx*4);
        amount=*(s16 *)(arg+6);
        func_8025F5C8(*(void **)(obj+0xA54),0xC0,0x32,0x32,0xFF,0,0,2);
        if(ptr) func_8025FCE8(&D_800D77E6-0x12EE,*(void **)(obj+0xA54),(void*)ptr);
        if(amount) D_8023BFAC(obj,obj,amount);
    }
    return result;
}
