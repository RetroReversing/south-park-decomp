extern u32 jtbl_800BC760[];
extern u8 D_800CC760[];
extern u8 *D_8010E4D8;
extern u16 D_800BF358;
extern s32 D_800BF354;
extern s32 D_800ABA28;
extern s32 D_800ABA2C;
extern s32 D_8010E508;
extern u8 D_00416A70;
extern u8 D_004169E8;
extern u8 D_004163F8;
extern u8 D_00416698;
extern u8 D_00416C08;
extern u8 D_00416B80;
extern u8 D_00416AF8;
extern u8 D_00416CD8;

void *D_8020982C(char *);

void func_80409C54(s32 arg0, s32 arg1) {
    s32 s0 = arg1;

    switch (arg0 + 0xB) {
    case 0:
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_00416A70);
        D_800BF358 = 4;
        D_800BF354 = s0;
        return;
    case 1:
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_004169E8);
        D_800BF358 = 4;
        D_800BF354 = s0;
        D_800ABA28 = s0;
        D_800ABA2C = s0;
        return;
    case 2:
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_004163F8);
        D_800BF358 = 3;
        D_8010E508 = 4;
        return;
    case 3:
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_00416698);
        return;
    case 4:
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_00416C08);
        return;
    }
    if (s0 == 1) {
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_00416B80);
    } else if (s0 == 2) {
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_00416AF8);
    } else {
        func_80403D34((u8 *)D_8020982C(D_800CC760) + 0x528, D_8010E4D8, &D_00416CD8);
    }
}
