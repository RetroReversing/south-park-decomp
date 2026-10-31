extern u8 D_800F5298x[];
extern u8 D_800F529Cy[], D_800F52A0y[];

void func_8028C3E0(void)
{
int __repair_literal;

    s32 i;
    s32 off;

    i = 0;
    off = 0;
    do {
__repair_literal = 4;

        *(s32 *)((u8 *)&D_800B3618 + i * __repair_literal) = 0;
        *(s32 *)(D_800F5298x + off) = 0;
        *(s32 *)(D_800F529Cy + off) = -1;
        *(s32 *)(D_800F52A0y + off) = -1;
        i++;
        off += 0xC;
    } while (i < 4);
}
