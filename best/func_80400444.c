extern s32 D_80000300,D_800BEE20,D_800BEE28,D_800BEE40[],D_800EC058; extern u8 D_800BEE48[];
void func_80400444(void) {
    s32 a=D_80000300, mode=0, threshold, divisor, *record;
    if(a==1) mode=0;
    else if(a<2) mode=1;
    else if(a==2) mode=0;
    else mode=0;
    record=(s32 *)(D_800BEE48 + D_800BEE20*0x1c + mode*0x8c);
    threshold=0x12c00;
    if(D_800EC058!=0x400000) threshold=0x2a300;
    divisor=D_800BEE40[mode];
    D_800BEE20=(D_800BEE20+1)%divisor;
    while(record[0]*record[1]>threshold) D_800BEE20=(D_800BEE20+1)%D_800BEE40[mode];
    D_800BEE28=4;
}
