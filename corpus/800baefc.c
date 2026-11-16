#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800baefc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800bb5ccu, &a);
    }
    f0 = (f64)rdf32(0x80572ca0u);
    f1 = (f64)(f32)(px_b2f((u64)rd16(0x8049908au) | 0x4330000000000000ull) - rdf64(0x80572d88u));
    if (!((f1 > f0) || (f1 == f0))) {
        wr32((u32)param_1 + 0xd0u, 0u);
    } else {
        r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
        if ((s32)r4 <= 0) {
            r4 = 0u;
        }
        if ((s32)r4 >= 65535) {
            r4 = 0xffffu;
        }
        if ((s32)r4 <= 0) {
            r4 = 0x64u;
        }
        f2 = rdf64(0x80572d88u);
        f3 = (f64)(f32)(px_b2f((u64)rd16(0x8049908au) | 0x4330000000000000ull) - f2);
        f1 = (f64)rdf32((u32)param_1 + 0x12cu);
        f2 = (f64)(f32)(px_b2f((u64)(r4 & 0xffffu) | 0x4330000000000000ull) - f2);
        f0 = (f64)rdf32((u32)param_1 + 8u);
        wrf32d((u32)param_1 + 0xb8u, (f64)rdf32((u32)param_1 + 0x130u));
        f2 = (f64)(f32)px_fdiv(f3, f2);
        wr32((u32)param_1 + 0xd0u, 1u);
        f1 = (f64)(f32)(f1 * f2);
        f0 = (f64)(f32)(f0 * f1);
        wrf32d((u32)param_1 + 0xbcu, f0);
    }
    f3 = rdf64(0x80572d88u);
    f0 = (f64)rdf32(0x80572ca0u);
    r0 = (u32)rd16(0x8049908cu);
    f1 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3);
    if (!((f1 > f0) || (f1 == f0))) {
        wr32((u32)param_1 + 0x160u, 0u);
    } else {
        f2 = (f64)rdf32(0x80572d84u);
        f3 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3);
        f1 = (f64)rdf32((u32)param_1 + 0x1bcu);
        f0 = (f64)rdf32((u32)param_1 + 8u);
        wrf32d((u32)param_1 + 0x148u, (f64)rdf32((u32)param_1 + 0x1c0u));
        f2 = (f64)(f32)px_fdiv(f3, f2);
        wr32((u32)param_1 + 0x160u, 1u);
        f1 = (f64)(f32)(f1 * f2);
        f0 = (f64)(f32)(f0 * f1);
        wrf32d((u32)param_1 + 0x14cu, f0);
    }
    r29 = 0u;
    wr32((u32)param_1 + 0x40u, 1u);
    r30 = 0u;
    wr32((u32)param_1 + 0x1f0u, 1u);
    do {
        a.r[0] = (u32)param_1 + r30 + 0x18u;
        (void)tc_call(0x8005250cu, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x90u;
    } while ((s32)r29 < 4);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800bb3f8u, &a);
    return;
}
