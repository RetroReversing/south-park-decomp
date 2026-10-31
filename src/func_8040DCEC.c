extern s32 func_80403ACC(s32,void*,s32,s32,s32);extern s32 func_80404918(void*);extern s32 func_8040DC08(s32,s32,s32,s32);extern u8 D_800BF0EC[],D_8010E7A8[];extern s32 D_8010E7B8,D_8010E7C4;extern s32 D_416EE0;
s32 func_8040DCEC(void *o,s32 p){
char *__repair_addr;
s32 i,v,a,b,c,d;for(i=0;i<8;i++)D_8010E7A8[i]=D_800BF0EC[i];if(func_80404918(o))D_8010E7C4=1;v=D_8010E7C4;if(v){if(!D_8010E7B8){a=*(s32*)&D_8010E7A8[0];b=*(s32*)&D_8010E7A8[4];c=*(s32*)&D_8010E7A8[8];d=*(s32*)&D_8010E7A8[12];func_8040DC08(a,b,c,d);
__repair_addr = (char *)((char*)o+32);
D_8010E7B8=func_80403ACC(p,&D_416EE0,*(s32*)(__repair_addr),*(s32*)((char*)o+36),0);}}return D_8010E7C4;}
