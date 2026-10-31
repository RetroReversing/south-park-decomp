extern f32 D_800ABA00,D_800BEDCC,D_800BEDD0,D_800BEDD4; extern u32 D_8010E7C8,D_8010E7D0; extern f32 D_8010E7CC,D_8010E7D4; extern s32 D_8010E7D8,D_8010E7DC,D_8010E7E0; extern u32 D_800CC760; s32 D_80209A90(void*);
void func_8040E130(void){
char *__repair_addr;

 s32 *p,*q,flags; f32 x;
 if(D_8010E7D0)goto done;
 if(D_8010E7DC){D_8010E7D8-=8;if(D_8010E7D8<0)D_8010E7D8=0;}
 if(D_8010E7E0==1){x=D_8010E7CC+D_800BEDCC;D_8010E7CC=x;if(D_800BEDD0<=x){D_8010E7CC=D_800BEDD0;D_8010E7E0=0;}}
 else if(D_8010E7E0==0){x=D_8010E7D4-D_800ABA00;D_8010E7D4=x;if(x<0){D_8010E7D4=0;D_8010E7E0=2;}}
 else if(D_8010E7E0==2){
 x=D_8010E7CC-D_800BEDD4;D_8010E7CC=x;
 if(x<=0){
 D_8010E7CC=0;p=(s32*)D_8010E7C8;
 flags=*p;
 while(!(flags&2)){q=p+5;flags=q[0];D_8010E7C8=(u32)q;p=q;}
 p=(s32*)D_8010E7C8;flags=p[5];q=p+5;D_8010E7C8=(u32)q;
 if(flags&1){D_8010E7D0=1;D_80209A90(&D_800CC760);goto done;}
 if(!(flags&2)){do{flags=*q;if(flags&16)D_8010E7DC=1;q++;}while(!(*q&2));}
 D_8010E7E0=1;
__repair_addr = (char *)(q+1);
D_8010E7D4=*(f32*)(__repair_addr);
 }
 }
 done:;
}
