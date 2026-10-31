extern u8 D_8010E858[];

typedef struct { s16 unk0; s8 unk2; s8 unk3; } Arg1;
typedef struct { u8 c[6]; } Six;

void func_804106D4(s32 arg0, Arg1 *arg1) {
    Six buf;
    s8 *p;
    s32 i;
    Six *d;

    p = (s8 *)D_8010E858;
    i = 0;
    while (i < arg0) {
        i++;
        p++;
    }
    d = &buf;
    *d = *(Six *)p;
    arg1->unk3 = (buf.c[1] & 0xC0) >> 4;
    if (arg1->unk3 == 0) {
        arg1->unk0 = buf.c[3] | (buf.c[4] << 8);
        arg1->unk2 = buf.c[5];
    }
}
