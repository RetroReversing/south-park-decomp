extern void **D_800B4948; extern s32 D_800F7688;
extern void func_802A0708(s32); extern s32 func_802A04D0(void);
extern void __osSetTimerIntr(u32,u32,s32,u32); extern void func_8029DDA0(s32,s32,s32,u32); extern void func_8029E3D4(void*);
void func_8029E1D8(void) {
 s32 temp_a0_2; s32 temp_v0; s32 temp_v1; u32 temp_a0; u32 temp_a1; u32 temp_a1_2; u32 temp_v0_2; u32 temp_v1_2; void *temp_s0; volatile u32 keep[2]; s32 *stamp=&D_800F7688;
 if (*D_800B4948 == D_800B4948) return;
loop:
 temp_s0=*D_800B4948;
 if(temp_s0==D_800B4948) { func_802A0708(0); *stamp=0; goto exit; }
 temp_v0=func_802A04D0(); temp_v1=*stamp; *stamp=temp_v0; temp_v0_2=temp_v0-temp_v1;
 temp_v1_2=*(u32*)((char*)temp_s0+0x10);
 if(temp_v1_2>0) goto active;
 if(temp_v1_2!=0) goto expired;
 temp_v1_2=*(u32*)((char*)temp_s0+0x14);
 if(temp_v0_2>=temp_v1_2) goto expired;
active:
 temp_a0=*(u32*)((char*)temp_s0+0x10);
 temp_a1=*(u32*)((char*)temp_s0+0x14);
 temp_a1_2=temp_a1-temp_v0_2;
 temp_v1=temp_a1<temp_v0_2;
 temp_a0-=temp_v1;
 *(u32*)((char*)temp_s0+0x10)=temp_a0; *(u32*)((char*)temp_s0+0x14)=temp_a1_2;
 __osSetTimerIntr(temp_a0,temp_a1_2,0,temp_v0_2); goto exit;
expired:
 *(void**)*(void**)((char*)temp_s0+4)=*(void**)temp_s0;
 *(void**)((char*)*(void**)temp_s0+4)=*(void**)((char*)temp_s0+4);
 temp_a0_2=*(s32*)((char*)temp_s0+0x18);
 *(void**)temp_s0=0; *(void**)((char*)temp_s0+4)=0;
 if(temp_a0_2) func_8029DDA0(temp_a0_2,*(s32*)((char*)temp_s0+0x1C),0,temp_v0_2);
 if((*(u32*)((char*)temp_s0+8)|*(u32*)((char*)temp_s0+0xC))!=0) {
  *(u32*)((char*)temp_s0+0x10)=*(u32*)((char*)temp_s0+8); *(u32*)((char*)temp_s0+0x14)=*(u32*)((char*)temp_s0+0xC); func_8029E3D4(temp_s0);
 }
 goto loop;
exit:;
}
