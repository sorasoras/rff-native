#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801d4530(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0xcu;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x1a4u), &a);
    f5 = (f64)rdf32(0x80575ffcu);
    f3 = (f64)rdf32(0x80576004u);
    f8 = (f64)(f32)(px_b2f((u64)rd16(param_1 + 0x1deu) | 0x4330000000000000ull) - rdf64(0x80576018u));
    f6 = (f64)rdf32(0x80575ff8u);
    f4 = (f64)rdf32(0x80576000u);
    f2 = (f64)rdf32(0x80576008u);
    f1 = (f64)rdf32(0x8057600cu);
    f0 = (f64)rdf32(0x80576010u);
    wrf32d(param_1 + 0xd00u, (f64)rdf32(0x80575ff4u));
    wrf32d(param_1 + 0xd04u, f6);
    wrf32d(param_1 + 0xd08u, f5);
    wrf32d(param_1 + 0xd0cu, f5);
    wrf32d(param_1 + 0xd10u, f4);
    wrf32d(param_1 + 0xd14u, f3);
    wrf32d(param_1 + 0xd18u, f2);
    wrf32d(param_1 + 0xd1cu, f3);
    wrf32d(param_1 + 0xd20u, f1);
    wrf32d(param_1 + 0xd24u, f0);
    wrf32d(param_1 + 0xd28u, f8);
    a.r[0] = param_1;
    (void)tc_call(0x801d4810u, &a);
    wr32(param_1 + 0xd74u, 0u);
    return;
}
