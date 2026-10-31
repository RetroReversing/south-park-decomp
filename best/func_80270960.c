extern s32 func_8026ACD8();
extern s32 D_8021563C(void);
s32 func_80270960(void *arg0, s32 arg1, s32 arg2) {
char *__repair_addr;

    s32 first, last;
    s32 total = 0;
    s32 rem;
    s32 i;
    s32 *table = (s32 *)((u8 *)arg0 + 0x2760);
__repair_addr = (char *)((u8 *)arg0 + 0x2758);

    if (*(s32 *)(__repair_addr) == 0) return -1;
    if (!func_8026ACD8(*(s32 *)((u8 *)arg0 + 0x275C), *(s32 *)((u8 *)arg0 + 0x2758), (s16)arg1, &first, &last)) return -1;
    if (first != last && first < last) {
        for (i = first; i <= last; i++) total += table[i] * 10;
    }
    rem = D_8021563C() % total;
    for (i = first; i < last; i++) {
        total += table[i] * 10;
        if (total >= rem) break;
    }
    if ((s16)arg2 == 0) return i;
    if (i != (s16)arg2) return i;
    if (i != last) i++;
    else i--;
    return i;
}
