extern void func_802569D0(void *a0, int a1, int a2);
extern char D_800CE0FC;

void func_80256AE4(int arg0, int arg1) {
    func_802569D0(&D_800CE0FC, arg0, arg1);
}

void *D_8022154C(int, int, int, void *);
extern void func_8026AC4C(void *, int, int);
extern char D_800A95E8;

void func_80256980(void *arg0) {
    int *temp_v0;
    int temp_a0;

    temp_v0 = D_8022154C(0, 0xFC00, 3, &D_800A95E8 + 4);
    *(int **)arg0 = temp_v0;
    temp_a0 = *temp_v0;
    func_8026AC4C((void *)temp_a0, 0, 0xFC00);
    *(int *)((char *)arg0 + 4) = temp_a0;
}

int D_8021563C(void);

int func_8025797C(int arg0) {
    if (arg0 != 0) {
        return D_8021563C() % (arg0 + 1);
    }
    return 0;
}
