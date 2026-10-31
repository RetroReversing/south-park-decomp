extern f32 D_800AA3D0,D_800AA3D4,D_800AA3D8,D_800AA3DC;
extern s32 D_800AB9FC,D_800F4E9C,D_800F4EA4,D_800F4EB0;
extern void D_80213F0C(void *,f32,f32,f32);
extern void D_802145B0(void *,s32,f32,s32);
extern void D_80211B2C(void *,s32);
void func_80284E08(s32 arg0, void *arg1) {
 f32 sp10[16]; f32 x, y;
 if(D_800F4EA4) {
 D_80213F0C(sp10,D_800AA3D0,D_800AA3D0,D_800AA3D0);
 x=(f32)(0x578/D_800F4E9C)*D_800AA3D4*D_800AA3D8;
 y=(f32)D_800F4EB0*x;
 x=*(f32 *)((char *)arg1+4)+y-*(f32 *)((char *)arg1+4)*D_800AA3DC;
 D_802145B0(sp10,*(s32 *)arg1,x,*(s32 *)((char *)arg1+8));
 D_80211B2C(sp10,arg0+(D_800AB9FC<<6));
 }
}
