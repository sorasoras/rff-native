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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80168530(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r29 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = rdf64(0x80574c10u);
    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32((u32)param_1 + 0x10u) ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)(rd32((u32)param_1 + 0x14u) ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    a.r[0] = param_2;
    (void)tc_call(0x80167becu, &a);
    if ((s32)rd32(param_2 + 0xd60u) >= 60) {
        r4 = rd32(param_2 + 0xe88u);
        wr32(param_2 + 0xe88u, r4 | (r4 ^ 0x80000000u));
        a.r[0] = param_2;
        (void)tc_call(0x800b3354u, &a);
    }
    r29 = 0u;
    if (rd32(param_2 + 0x1468u) == 8u) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r29 = 1u;
        }
    }
    if (r29 != 0u) {
        r4 = rd32(param_2 + 0xf78u);
        wr32(param_2 + 0xf78u, r4 ^ (r4 & 1u));
        r5 = rd32(0x804890c8u);
        r4 = rd32(0x804890ccu);
        f2 = (f64)px_w2f(r5);
        f0 = (f64)px_w2f(rd32(0x804890d0u));
        wrf32d(param_2 + 0xd18u, f2);
        wrf32d(param_2 + 0xd1cu, (f64)px_w2f(r4));
        wrf32d(param_2 + 0xd20u, f0);
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0x804890c8u;
        a.f[0] = (f64)rdf32((u32)param_1 + 0xcu);
        a.f[1] = f2;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
    }
    if ((s32)rd32((u32)param_1 + 0x10u) >= (s32)rd32((u32)param_1 + 0x14u)) {
        r3 = rd32(param_2 + 0xe88u);
        wr32(param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    wr32((u32)param_1 + 0x10u, rd32((u32)param_1 + 0x10u) + 1u);
    return;
}
