extern unsigned int D_800D7858;
int func_8040DB48(unsigned int arg0) {
    int v0, v1=0;
loop:
    if ((unsigned int)*((unsigned int *)((char *)&D_800D7858 + v1 * 16)) >= arg0) {
        v1++;
        if (v1 >= 10) v0=-1;
        else goto loop;
    } else v0=v1;
    return ~v0 != 0;
}
