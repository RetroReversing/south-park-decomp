extern void *__allocParam(void);
void func_80296878(void *arg0, void *arg1, s8 value){
    void *entry; void *child; volatile void *widget; s32 off, sum;
    if(!*(void**)((char*)arg1+8))return;
    entry=__allocParam();
    if(!entry)return;
    child=*(void**)((char*)arg1+8);
    sum=*(s32*)((char*)arg0+0x1C) + *(s32*)((char*)child+0xD8);
    *(s16*)((char*)entry+8)=16;
    *(s32*)((char*)entry+4)=sum;
    if(value<0) off = -value; else off = (u8)value;
    *(s32*)((char*)entry+0xC)=off;
    *(s32*)entry=0;
    child=*(void**)((char*)arg1+8);
    widget=*(void**)((char*)child+0xC);
    ((void(*)(void*,s32,void*))(*(void**)((char*)widget+8)))((void*)widget,3,entry);
}
