void func_8026AB80(u8 *dst,u8 *src,s32 n){
int __repair_literal;
if(n==0)return;if(((u32)dst|(u32)src|(u32)n)&3){if(dst<src){do{*dst++=*src++;}while(--n);}else{dst+=n-1;src+=n-1;do{*dst--=*src--;}while(--n);}}else{n>>=2;if(dst<src){do{*(u32*)dst=*(u32*)src;dst+=4;src+=4;}while(--n);}else{
__repair_literal = 4;
dst+=n*__repair_literal-4;src+=n*4-4;do{*(u32*)dst=*(u32*)src;dst-=4;src-=4;}while(--n);}}}
