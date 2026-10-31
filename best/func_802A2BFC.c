typedef struct { f32 *unk0; f32 *unk4; s32 *unk8; s32 unkC; } Heap;
extern Heap D_800B4A10;
extern f32 D_800AB430;
extern f32 func_80299AE8(f32);
extern f32 func_8029A900(f32);
s32 *func_802A2BFC(s32 n) {
int __repair_literal;

    Heap *h=&D_800B4A10;
    s32 half=n>>1;
    f32 fn;
    s32 i;
__repair_literal = 0;

    if(half>__repair_literal) {
        f32 scale=D_800AB430;
        fn=(f32)n;
        for(i=0;i<half;i++) {
            f32 s=(f32)i*(scale/fn);
            h->unk0[i]=func_80299AE8(s);
            h->unk4[i]=-func_8029A900(s);
        }
    }
    {
        s32 v=0, *p=h->unk8;
        if(n>0) do { *p=v; ++v; ++p; } while(v<n);
        {
            s32 m=1, j=1, t2=n*2;
            while(j<t2) {
                if(j<m) {
                    s32 a=((m-1)/2)*4+(s32)h->unk8;
                    s32 b=((j-1)/2)*4+(s32)h->unk8;
                    s32 tmp=*(s32*)a; *(s32*)a=*(s32*)b; *(s32*)b=tmp;
                }
                {
                    s32 k=n;
                    if(!((n<2))) {
                        while(k<m) { m-=k; k>>=1; if(k<2) break; }
                    }
                    j+=2; m+=k;
                }
            }
        }
    }
    h->unkC=n;
    return (s32*)h;
}
