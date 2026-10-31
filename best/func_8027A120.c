extern void D_802131C4(void*,void*,void*); extern void D_80213274(void*);
typedef struct {u32 v[3];} V3u;
void func_8027A120(V3u *out,V3u *in){
 V3u *s2=out+1,*s1;
 V3u sp10,sp20;
 out[0]=in[7]; out[1]=in[6]; out[2]=in[5]; out[3]=in[4];
 D_802131C4(&sp10,s2,out);
 s1=out+2;
 D_802131C4(&sp20,s1,s2);
 D_80213274(out+4);
}
