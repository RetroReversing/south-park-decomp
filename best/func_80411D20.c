s32 func_8029BC60(s32, s32, u16, u16 *);
s32 func_8029C018(s32, s32, u16, u16 *, s32);
s32 func_8041249C(void);
s32 func_80411D20(void *arg0, u16 *arg1) {
    u16 sizes[4]; u16 sum, checksum; s32 i,j,result,count; u32 k; u16 value;
    volatile u32 frame[2];
    if (*(u8 *)((u8 *)arg0+0x65)) {
        *(u8 *)((u8 *)arg0+0x65)=0;
        result=func_8041249C();
        if(result) return result;
    }
    count=1;
    sizes[0]=count; sizes[1]=3; sizes[2]=4; sizes[3]=6;
    i=1;
    for (;;) {
        result=func_8029BC60(*(s32 *)((u8 *)arg0+4),*(s32 *)((u8 *)arg0+8),sizes[i],arg1);
        if(result) return result;
        sum=0; checksum=0;
        k=0;
        do {
            value=arg1[k/2];
            sum+=value;
            checksum+=~value;
            k+=2;
        } while(k<0x1c);
        if(arg1[14]!=sum) {
            count++;
        } else if(arg1[15]!=checksum) {
            count++;
        } else break;
        if(count>=4) break;
        i++;
    }
    if(count==4) return 10;
    for(i=0;i<4;i++) {
        if(i!=count) {
            result=func_8029C018(*(s32 *)((u8 *)arg0+4),*(s32 *)((u8 *)arg0+8),sizes[i],arg1,1);
            if(result) return result;
        }
    }
    return 0;
}
