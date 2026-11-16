#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80177734(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)rdf32(0x80574fa0u) * (f64)(f32)(px_b2f((u64)((u32)(s16)rd16((u32)param_1 + 0x142u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574f98u)));
    a.r[0] = param_2;
    a.r[1] = rd32((u32)param_1 + 0xecu);
    r3 = tc_call(0x8017748cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        wr32(r3 + 0x124u, rd32((u32)param_1 + 0x30u));
        f2 = (f64)rdf32((u32)param_1 + 0x100u);
        wrf32d(r3 + 0x100u, f2);
        f1 = (f64)rdf32((u32)param_1 + 0x104u);
        wrf32d(r3 + 0x104u, f1);
        f0 = (f64)rdf32((u32)param_1 + 0x108u);
        wrf32d(r3 + 0x108u, f0);
        wrf32d(r3 + 8u, f2);
        wrf32d(r3 + 0xcu, f1);
        wrf32d(r3 + 0x10u, f0);
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_1 + 0x2cu);
        (void)tc_call(0x80177d54u, &a);
        f0 = (f64)rdf32((u32)param_1 + 0x24u);
        wrf32d(r31 + 0x130u, f0);
        wrf32d(r31 + 0x24u, f0);
        wr8(r31 + 0x28u, rd8((u32)param_1 + 0x28u));
        wr8(r31 + 0x29u, rd8((u32)param_1 + 0x29u));
        wr8(r31 + 0x2au, rd8((u32)param_1 + 0x2au));
        wr8(r31 + 0x2bu, rd8((u32)param_1 + 0x2bu));
    }
    return;
}
