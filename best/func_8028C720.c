typedef struct Slot { s32 x; s32 y; s32 z; } Slot;
extern Slot D_800F529C[4];
s32 func_8028C720(void) {
    void *tbl = &D_800B3618;
    s32 i;

    for (i = 0; i < 4; i++) {
        if (((s32 *)tbl)[i] != 0) {
            if (D_800F529C[i].x == -1 || D_800F529C[i].y == -1) {
                return i;
            }
        }
    }
    return -1;
}
