s32 func_8029BC60(s32,s32,s32,s32 *);
s32 func_8041207C(void *,u16 *,s32,s32);
s32 func_804123D4(void *);
s32 func_8041249C(void *);
s32 func_80410218(void *arg0,s32 arg1,void *arg2) {
    u8 pad[0x100]; u8 rec[0x20]; s32 v=5,i,count=0; u16 *entries; u8 group,index;
    if(arg1>=*(s32 *)((u8 *)arg0+0x50)) goto done;
    if(arg1<0) goto done;
    if((*(s32 *)arg0&1)==0) goto done;
    v=2; if(func_804123D4(arg0)==2) goto done;
    if(*(u8 *)((u8 *)arg0+0x65)!=0) { *(u8 *)((u8 *)arg0+0x65)=0; if(func_8041249C(arg0)!=0) goto done; }
    v=func_8029BC60(*(s32 *)((u8 *)arg0+4),*(s32 *)((u8 *)arg0+8),(*(u16 *)((u8 *)arg0+0x5e)+arg1)&0xffff,(s32 *)rec);
    if(v!=0) goto done;
    if(*(u16 *)(rec+4)==0 || *(s32 *)rec==0) {v=5;goto done;}
    v=3; entries=(u16 *)(rec+8);
    if(*(u16 *)(rec+6)<*(s32 *)((u8 *)arg0+0x60)) goto done;
    group=rec[7]; index=rec[6];
    if(group>=*(u8 *)((u8 *)arg0+0x64)) goto done;
    for(;;) {
        v=func_8041207C(arg0,entries,0,group); if(v!=0) goto done;
        count++; i=entries[index];
        if(i>=*(s32 *)((u8 *)arg0+0x60)) { index=(u8)i; do { i=entries[index]; count++; if((i>>8)!=group) {group=i>>8;index=(u8)i;break;} index=(u8)i; } while(i>=*(s32 *)((u8 *)arg0+0x60)); }
        if(i==1 || group>=*(u8 *)((u8 *)arg0+0x64)) break;
    }
    if(i==1) {
      *(s32 *)arg2=count<<8; *(u16 *)((u8 *)arg2+8)=*(u16 *)(rec+4); *(s32 *)((u8 *)arg2+4)=*(s32 *)rec;
      for(i=0;i<16;i++) ((u8 *)arg2)[0xE + i]=rec[0x10 + i];
      for(i=0;i<4;i++) ((u8 *)arg2)[0xA + i]=rec[0xC + i];
      v=0;
    }
done: return v;
}
