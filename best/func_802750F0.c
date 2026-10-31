s32 func_80270710(s32); void func_80270384(s32); void func_802703E8(s32); void func_802A378C(void); void func_802A379C(void); void func_802964F0(s32,s32); s32 func_80295C28(s32); void func_80295BE0(s32,s32); s32 func_80295B28(s32,void *); void *D_80210ADC(s32,s32); s32 func_802A3630(void*,s32,s32*); void func_80296478(s32,s32); void D_80296500(s32,s32); void func_80296428(s32,s32); void func_802964C8(s32,s32,s32); void alSndpPlay(s32); extern s32 D_800A9FF8[]; extern f64 D_800AA010; extern f32 D_800AA018,D_800AA01C; extern s32 D_800B2180[]; extern u8 D_800F4704[];
void func_802750F0(u8 *arg0){
char *__repair_addr;

 void *obj; s32 state,result,temp,ix,obj2,val,r; s32 *p;
 obj=*(void**)arg0; func_80270384(*(s32*)arg0); result=func_80270710(*(s32*)arg0);
__repair_addr = (char *)(arg0+8);
 state=*(s32*)(__repair_addr);
 switch(state){
 case 0:func_802A378C();break;
 case 1:func_802964F0(result,*(s16*)(arg0+0x1e)); if(!func_80295C28(result)){func_802A379C();func_80295BE0(result,*(s16*)(arg0+0x1e));*(s32*)(arg0+0x1c)=-1;*(s32*)(arg0+8)=(*(s32*)(arg0+0xc)<0)?0:1;}break;
 case 3:*(s32*)D_800F4704=0;D_800F4704[4]=2;*(s32*)(D_800F4704+8)=0;*(s32*)(arg0+8)=4;ix=*(s32*)(arg0+0x10)*2;obj2=*(s32*)arg0;val=*(s32*)D_80210ADC(*(s32*)(obj2+0x2754),ix);*(f32*)(arg0+0x20)=(f32)val*D_800AA018;p=D_80210ADC(*(s32*)(obj2+0x2754),ix|1);func_802A3630(p,0x5622,&temp);*(s32*)(D_800B2180+1)=0;r=func_80295B28(result,D_800B2180);*(s32*)(arg0+0x1c)=(s16)r;if((s16)r>=0){func_802964F0(result,*(s16*)(arg0+0x1e));func_80296478(result,(s32)((f32)temp*D_800AA01C));D_80296500(result,(s32)((f32)*(s32*)(arg0+0x14)*(*(f32*)(arg0+0x20))));func_80296428(result,arg0[0x1b]);func_802964C8(result,*(s16*)(arg0+0x1e),127);alSndpPlay(result);*(s32*)(arg0+0xc)=-1;}break;
 }
 func_802703E8(*(s32*)arg0);
}
