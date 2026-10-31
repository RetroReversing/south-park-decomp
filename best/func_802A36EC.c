typedef struct { char pad[0x10]; s32 count; } Head36EC;
extern Head36EC D_800FA878;
extern u16 D_800B4B92[1];
extern u8 D_800FAB30[];
extern void func_802A2908(Head36EC *);
extern void func_802A302C(void *, Head36EC *);

void *func_802A36EC(void) {
    void *res = NULL;
    if (D_800FA878.count != 0) {
        func_802A2908(&D_800FA878);
        D_800B4B92[0] += 1;
        if (D_800B4B92[0] >= 6) {
            D_800B4B92[0] = 0;
        }
        func_802A302C((char *)D_800FAB30 + (D_800B4B92[0] << 9), &D_800FA878);
        res = (char *)D_800FAB30 + (D_800B4B92[0] << 9);
        D_800FA878.count--;
    }
    return res;
}
