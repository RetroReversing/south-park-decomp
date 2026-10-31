extern s32 D_800B2190,D_800B2244,D_800B22A4,D_800B22F4,D_800B233C;
s32 func_80275720(void *arg0,s32 unused,s32 arg2) {
char *__repair_addr;

 s32 result=0,count; void *base,*scan; s32 (*fn)(void*,void*,void*,s32);
 base=&D_800B2190; scan=(char*)base+0x10; count=8;
 do {
__repair_addr = (char *)((char*)scan-0xc);
 if(*(s16*)(__repair_addr)==arg2) { fn=*(s32(**)(void*,void*,void*,s32))scan; result=fn(arg0,base,scan,-1); break; } scan=(char*)scan+0x14; count--; base=(char*)base+0x14; } while(count!=-1);
 if(!result) {
  base=&D_800B2244; scan=(char*)base+0xc; count=5;
  do { if(*(s16*)((char*)scan-8)==arg2) { fn=*(s32(**)(void*,void*,void*,s32))scan; result=fn(arg0,base,scan,-1); break; } scan=(char*)scan+0x10; count--; base=(char*)base+0x10; } while(count!=-1);
 }
 if(!result) {
  base=&D_800B22A4; scan=(char*)base+0x10; count=3;
  do { if(*(s16*)((char*)scan-0xc)==arg2) { fn=*(s32(**)(void*,void*,void*,s32))scan; result=fn(arg0,base,scan,-1); break; } scan=(char*)scan+0x14; count--; base=(char*)base+0x14; } while(count!=-1);
 }
 if(!result) {
  base=&D_800B22F4; scan=(char*)base+8; count=5;
  do { if(*(s16*)((char*)scan-4)==arg2) { fn=*(s32(**)(void*,void*,void*,s32))scan; result=fn(arg0,base,scan,-1); break; } scan=(char*)scan+0xc; count--; base=(char*)base+0xc; } while(count!=-1);
 }
 if(!result) {
  base=&D_800B233C; scan=(char*)base+8; count=3;
  do { if(*(s16*)((char*)scan-4)==arg2) { fn=*(s32(**)(void*,void*,void*,s32))scan; result=fn(arg0,base,scan,-1); break; } scan=(char*)scan+0xc; count--; base=(char*)base+0xc; } while(count!=-1);
 }
 return result;
}
