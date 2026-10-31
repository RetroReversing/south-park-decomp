typedef struct Unk {
    char pad[0x177C];
    s32 unk177C;
    s32 unk1780;
    s32 unk1784;
} Unk;

void func_80412EB4(Unk *arg0, s32 arg1) {
    if (arg0->unk1780 != 0) {
        arg0->unk177C = arg0->unk1780;
    }
    switch (arg1) {
    case 0x2710:
        arg0->unk1780 = 1;
        arg0->unk1784 = 1;
        break;
    case 0x2774:
        arg0->unk1780 = 1;
        arg0->unk1784 = 3;
        break;
    case 0x27D8:
        arg0->unk1780 = 1;
        arg0->unk1784 = 4;
        break;
    case 0x283C:
        arg0->unk1780 = 1;
        arg0->unk1784 = 2;
        break;
    case 0x28A0:
        arg0->unk1780 = 1;
        arg0->unk1784 = 1;
        break;
    case 0x2AF8:
        arg0->unk1780 = 2;
        arg0->unk1784 = 1;
        break;
    case 0x32C8:
        arg0->unk1780 = 3;
        arg0->unk1784 = 1;
        break;
    case 0x2B5C:
        arg0->unk1780 = 2;
        arg0->unk1784 = 2;
        break;
    case 0x2BC0:
        arg0->unk1780 = 2;
        arg0->unk1784 = 2;
        break;
    case 0x2C24:
        arg0->unk1780 = 2;
        arg0->unk1784 = 3;
        break;
    case 0x2EE0:
        arg0->unk1780 = 3;
        arg0->unk1784 = 1;
        break;
    case 0x2F44:
        arg0->unk1780 = 3;
        arg0->unk1784 = 2;
        break;
    case 0x2FA8:
        arg0->unk1780 = 3;
        arg0->unk1784 = 1;
        break;
    case 0x300C:
        arg0->unk1780 = 3;
        arg0->unk1784 = 4;
        break;
    case 0x332C:
        arg0->unk1780 = 4;
        arg0->unk1784 = 2;
        break;
    case 0x3390:
        arg0->unk1780 = 4;
        arg0->unk1784 = 3;
        break;
    case 0x33F4:
        arg0->unk1780 = 4;
        arg0->unk1784 = 3;
        break;
    case 0x36B0:
        arg0->unk1780 = 5;
        arg0->unk1784 = 1;
        break;
    case 0x3714:
        arg0->unk1780 = 5;
        arg0->unk1784 = 2;
        break;
    case 0x3778:
        arg0->unk1780 = 5;
        arg0->unk1784 = 3;
        break;
    default:
        arg0->unk1780 = 0;
        arg0->unk1784 = 0;
        break;
    }
}
