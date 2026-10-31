s32 func_8028C788(s32 arg0) {
char *__repair_addr;

 s32 i, found, *p, off, m1;
 found=0; i=found; m1=-1; p=(s32*)D_800F529C; off=found;
loop:
 if (((s32 *)&D_800B3618)[i] != 0) {
  if (*p == arg0) { *p=m1; found=1; }
__repair_addr = (char *)(D_800F52A0+off);

  if (*(s32 *)(__repair_addr)==arg0) { *(s32 *)(D_800F52A0+off)=m1; found=1; }
  p+=3;
 }
 i++; off+=0xC;
 if (i>=4) goto out;
 if (!found) goto loop;
out: return found;
}
