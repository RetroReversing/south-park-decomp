s32 func_8026B3FC(f32 *a0, s32 n, f32 *a2) {
int __repair_literal;

    s32 outer;
    s32 found;
    s32 j;
    f32 *p;
    f32 x, y, z, tt;
    for (outer = 0; outer < 6; outer++) {
        if (outer == 2) {
            continue;
        }
        j = 0;
        found = j;
__repair_literal = 0;

        if (n > __repair_literal) {
            p = a0 + outer * 4;
            x = p[0];
            y = p[1];
            z = p[2];
            tt = p[3];
            while (j < n) {
                if (x * a2[j * 3 + 0] + y * a2[j * 3 + 1] + z * a2[j * 3 + 2] <= tt) {
                    found = 1;
                    break;
                }
                j++;
            }
        }
        if (!found) return 0;
    }
    return 1;
}
