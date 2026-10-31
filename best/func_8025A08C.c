typedef struct {char pad0[8];void *p8;char pad1[0x10];void *p1C;} H; typedef struct{char pad[0x1B4];s32 flag;s32 *count;} E; extern void D_8021E930(void*,void*);extern void D_8021E710(void*,void*);
void func_8025A08C(H *h,E *e){if(h->p8){D_8021E930(&h->p8,h->p8);D_8021E710(&h->p1C,h->p8);e->flag=0;}}
