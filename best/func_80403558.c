void func_804016EC(void);
void func_80403558(char *arg0) {
    char *p;
    *(int **)(arg0 + 0x1C) = (int *)(*(int *)(arg0 + 0x14) != 0);
    p = (char *)(arg0 + 0x14);
    func_804016EC();
}
