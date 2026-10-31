void func_802A565C(void);
void func_802A5678(void);
extern s32 D_002A5540[];
extern s32 D_002A5554[];
extern s32 D_002A5578[];
extern s32 D_002A558C[];
extern s32 D_800FD4C8;

void func_802A55B0(void)
{
    s32 *src;
    s32 *dst;
    s32 *hw;

    src = D_002A5540;
    dst = D_002A5554;
    hw = (s32 *)0x80000180;
    do {
        s32 a = *hw;
        s32 b = *src;
        src++;
        *dst = a;
        dst++;
        *hw = b;
        hw++;
    } while (src != D_002A5554);
    src = D_002A5578;
    dst = D_002A558C;
    hw = (s32 *)0x80000000;
    do {
        s32 a = *hw;
        s32 b = *src;
        src++;
        *dst = a;
        dst++;
        *hw = b;
        hw++;
    } while (src != D_002A558C);
    func_802A565C();
    func_802A5678();
    D_800FD4C8 = -0x802;
}
