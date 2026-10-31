extern s32 D_800F150C; extern s32 D_800A9CE8[]; extern s8 D_800CE80F[],D_800CE611[],D_800CE413[],D_800CEA0D[],D_800CEC0B[];
s32 func_80269130(u8 a){ switch(D_800F150C){case 0:return D_800CE80F[a*2]; case 1:return D_800CE611[a*2]; case 2:return D_800CE413[a*2]; case 3:return D_800CEA0D[a*2]; case 4:return D_800CEC0B[a*2]; default:return 0;} }
