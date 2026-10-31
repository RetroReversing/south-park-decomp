typedef struct { s32 x, y; } Pair;
void func_8027C578(Pair *arg0, Pair *arg1) {
    Pair t = *arg0;
    register s32 x = arg1->x;
    register s32 y = arg1->y;
    arg0->x = x; arg0->y = y;
    arg1->x = t.x; arg1->y = t.y;
}
