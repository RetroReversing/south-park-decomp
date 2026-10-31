typedef struct { void *f00; void *f04; } Ctx;
extern Ctx *D_800B3628;
extern void *D_80210ADC(void *, s32);

void func_8028EC08(void) {
    D_80210ADC(D_800B3628->f04, 1);
}
