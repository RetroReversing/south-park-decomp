s32 func_8026B370(f32 *a0,s32 n,f32 *b){
int __repair_literal;
s32 outer; s32 j; s32 found; f32 *p; f32 d; f32 x; f32 y; outer=0; loop: j=0;
__repair_literal = 0;
 if(n>__repair_literal){found=j;p=b;x=a0[0];y=a0[1];d=a0[2];while(j<n){if((x*p[0]+y*p[1])+d*p[2]<=a0[3]){found=1;break;}j++;p+=3;}if(found)goto hit;}return 0;hit:outer++;if(outer<6){a0+=4;goto loop;}return 1;}
