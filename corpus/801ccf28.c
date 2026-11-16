#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_801ccf28(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8007f964u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (rd32(param_1 + 0xd44u) == 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0xccu), &a);
        f1 = tc_lastf();
        r31 = r3;
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0xd0u), &a);
        r4 = rd32(param_2);
        wr32(0x817fdfe4u, r3);
        f1 = rdf64(0x80575ec8u);
        wr32(0x817fdfe0u, 0x43300000u);
        f1 = (f64)(f32)(rdf64(0x817fdfe0u) - f1);
        if ((f64)(f32)(px_b2f((u64)((r31 - r4) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575ec0u)) < (f64)(f32)((f64)rdf32(0x80575eb8u) * f1)) {
            a.r[0] = param_1;
            (void)tc_call(0x801cebf8u, &a);
            wr32(param_1 + 0xd44u, 1u);
        }
    }
    f0 = (f64)rdf32(0x80575ea8u);
    wr32(param_1 + 0xec0u, 1u);
    wrf32d(param_1 + 0xec4u, f0);
    return r30;
}
