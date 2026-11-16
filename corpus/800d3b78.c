#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800d3b78(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x518u);
    c0lt = (s32)r0 < 4;
    if (r0 == 4u) {
        f31 = (f64)rdf32(0x8057314cu);
        f30 = f31;
    } else if (!c0lt) {
        f31 = (f64)rdf32(0x8057314cu);
        f30 = (f64)rdf32(0x80573150u);
    } else if ((s32)r0 >= 3) {
        f31 = (f64)rdf32(0x80573148u);
        f30 = f31;
    } else {
        f31 = (f64)rdf32(0x8057314cu);
        f30 = (f64)rdf32(0x80573150u);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0x80338914u;
    r3 = tc_call(0x800d3b18u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        if ((u32)rd8(r3 + 0xau) != 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x805707a8u;
            a.r[1] = 0x3f6u;
            a.r[2] = 0x80355c34u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802e41c0u, &a);
        }
        r5 = r31 + rd32(r31 + 4u);
        if (r5 != 0u) {
            f1 = rdf64(0x80573158u);
            f31 = (f64)(f32)(px_b2f((u64)(rd32(r5) ^ 0x80000000u) | 0x4330000000000000ull) - f1);
            f30 = (f64)(f32)(px_b2f((u64)(rd32(r5 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - f1);
        }
    }
    r3 = tc_call(0x800d3f34u, &a);
    if (r3 != 0u) {
        f31 = (f64)(f32)(f31 * (f64)rdf32(0x80573154u));
    }
    if (param_2 != 0u) {
        wrf32d(param_2, f31);
    }
    if (param_3 != 0u) {
        wrf32d(param_3, f30);
    }
    return;
}
