void func_80296A48(void *arg0, void *arg1, s32 arg2) { *(s16 *)((char *)arg1 + 0x16) = arg2; }

extern void *__allocParam(void);
extern s32 func_80297288(void *, s32, s32);
void func_80296A50(void *arg0, void *arg1, s16 arg2, s32 arg3) {
    void *request;
    void *child;
    if (*(void **)((char *)arg1 + 8) == 0) return;
    request = __allocParam();
    if (request == 0) return;
    child = *(void **)((char *)arg1 + 8);
    *(s16 *)((char *)request + 8) = 0xB;
    *(s32 *)((char *)request + 0xC) = arg2;
    *(s32 *)((char *)request + 4) = *(s32 *)((char *)arg0 + 0x1C) + *(s32 *)((char *)child + 0xD8);
    *(s32 *)((char *)request + 0x10) = func_80297288(arg0, arg3, *(s32 *)((char *)child + 0xD8));
    *(s32 *)request = 0;
    child = *(void **)((char *)arg1 + 8);
    child = *(void **)((char *)child + 0xC);
    ((void (*)(void *, s32, void *))(*(void **)((char *)child + 8)))(child, 3, request);
}

void func_80296928(void *arg0, void *arg1, s32 arg2) {
    void *child, *request;
    if (*(void **)((char *)arg1 + 8) == 0) return;
    request = __allocParam();
    if (request == 0) return;
    child = *(void **)((char *)arg1 + 8);
    *(s16 *)((char *)request + 8) = 0xC;
    *(s32 *)((char *)request + 0xC) = arg2 & 0xFF;
    *(s32 *)request = 0;
    *(s32 *)((char *)request + 4) = *(s32 *)((char *)arg0 + 0x1C) + *(s32 *)((char *)child + 0xD8);
    child = *(void **)((char *)child + 0xC);
    ((void (*)(void *, s32, void *))(*(void **)((char *)child + 8)))(child, 3, request);
}

void func_80296878(void *arg0, void *arg1, s8 arg2) {
    void *child, *request;
    s32 value;
    if (*(void **)((char *)arg1 + 8) == 0) return;
    request = __allocParam();
    if (request == 0) return;
    child = *(void **)((char *)arg1 + 8);
    *(s16 *)((char *)request + 8) = 0x10;
    *(s32 *)((char *)request + 4) = *(s32 *)((char *)arg0 + 0x1C) + *(s32 *)((char *)child + 0xD8);
    if (arg2 < 0) value = -(s32)arg2;
    else value = (u8)arg2;
    *(s32 *)((char *)request + 0xC) = value;
    *(s32 *)request = 0;
    child = *(void **)((char *)child + 0xC);
    ((void (*)(void *, s32, void *))(*(void **)((char *)child + 8)))(child, 3, request);
}
