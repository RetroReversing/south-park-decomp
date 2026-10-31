extern void func_802A0938(void *, s32);

void *func_802814D0(s32 *arg0, s32 arg1, s32 arg2) {
int __repair_literal;

    s32 *p;
    s32 i;
    s32 v;
    void *r;

    i = -1;
__repair_literal = 0;

    if (!(arg0[0] < __repair_literal)) {
        i = 0;
        p = arg0;
        while (i <= arg0[0]) {
            v = p[1];
            if (v == 0xDEADBEEF) {
                i--;
                goto out;
            }
            p++;
            i++;
        }
        i--;
    }
out:
    arg0[i + 1] = arg0[i] + arg2;
    r = (u8 *)arg0 + arg0[i];
    if (arg1 != 0) {
        func_802A0938(r, arg0[0]);
    }
    return r;
}
