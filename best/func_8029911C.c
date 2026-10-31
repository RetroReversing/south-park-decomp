typedef struct Sub Sub; struct Sub { s32 a00,a04; s16 a08,a0A,a0C; char pad0E[2]; f32 f10; char pad14[8]; f32 f1C; Sub *p20; };
typedef struct { char pad[0x20]; Sub *sub; } Root;
typedef struct { char pad[0x44]; s32 a44; } Glob;
extern Glob *D_800B37B0;
extern f32 D_800AAF60;
extern void func_80297C3C(Sub *);
void func_8029911C(Root *r, s32 a1, s32 *a2) {
    Sub *s;
    s32 t0, q, rem, v;
    t0 = a1 - 2;
    q = (t0 >= 0 ? t0 : a1 + 5) >> 3;
    rem = t0 - (q << 3);
    v = *a2;
    if (rem < 8) {
        switch (rem) {
        case 0: break;
        case 1: s=r->sub+q; s->a00=v&~7; break;
        case 2: s=r->sub+q; s->a04=v&~7; break;
        case 3: s=r->sub+q; s->a08=v; break;
        case 4: s=r->sub+q; s->a0A=v; break;
        case 5: s=r->sub+q; s->a0C=v; break;
        case 6: s=r->sub+q; s->f10=((f32)v*D_800AAF60+(f32)v)/(f32)D_800B37B0->a44; break;
        case 7: s=r->sub+q; s->f1C=(f32)v*((f32)(s->a04-s->a00)*0.5f); break;
        default:
            s=r->sub+q;
            if (s->p20) { s->p20->a00=v; func_80297C3C(s->p20); }
            break;
        }
    }
}
