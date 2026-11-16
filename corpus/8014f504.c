#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_8014f504(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 9u) {
        if (rd32((u32)param_1 + 0x87cu) == 0u) {
            wr32((u32)param_1 + 0x14cu, 0u);
        }
        r7 = rd32((u32)param_1 + 4u);
        r4 = rd32((u32)param_1 + 0x87cu) + 1u;
        r6 = rd32((u32)param_1 + 8u);
        r5 = rd32((u32)param_1 + 0xcu);
        f3 = (f64)rdf32(0x80570838u);
        f4 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - rdf64(0x805747b8u));
        f2 = (f64)rdf32(0x805747acu);
        f31 = (f64)(f32)((f64)(f32)((f64)(f32)(f3 * f4) + (f64)rdf32((u32)param_1 + 0x884u)) + (f64)rdf32((u32)param_1 + 0x88cu));
        wr32((u32)param_1 + 0x87cu, r4);
        wrf32d((u32)param_1 + 0x88cu, f31);
        if (f31 < f2) {
            f1 = (f64)rdf32(0x805747b4u);
            f31 = f2;
            r4 = rd32((u32)param_1 + 0x890u);
            f0 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0x888u));
            wr32((u32)param_1 + 0x87cu, 0u);
            r0 = r4 - 1u;
            wrf32d((u32)param_1 + 0x88cu, f2);
            wr32((u32)param_1 + 0x890u, r0);
            wrf32d((u32)param_1 + 0x884u, f0);
            if ((s32)r0 <= 0) {
                r3 = rd32((u32)param_1 + 0x118u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    a.r[2] = 0x16u;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
                }
                wr32((u32)param_1 + 0x120u, 0u);
            }
        }
        f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x880u) + f31);
        f2 = (f64)rdf32((u32)param_1 + 0x884u);
        f0 = (f64)rdf32(0x8057083cu);
        wrf32d((u32)param_1 + 4u, (f64)px_w2f(r7));
        f2 = (f64)(f32)(f2 * f0);
        wrf32d((u32)param_1 + 0x884u, f2);
        wrf32d((u32)param_1 + 8u, f3);
        wrf32d((u32)param_1 + 0xcu, (f64)px_w2f(r5));
    }
    return 1u;
}
