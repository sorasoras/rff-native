#include "tc_rt.h"

void fn_801d1e74(u32 param_1)
{
    u32 r3 = 0, r4 = tc_argr(1u), r12 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    do {
        r12 = rd32(param_1);
        r4 = rd32(param_1 + 0x384u);
        r12 = rd32(r12 + 0x54u);
        f1 = (f64)rdf32(0x80575ed4u);
    } while (r12 == 0x801d1e74u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.r[4] = tc_argr(4u);
    a.r[5] = tc_argr(5u);
    a.r[6] = tc_argr(6u);
    a.r[7] = tc_argr(7u);
    a.f[0] = f1;
    a.f[1] = tc_argf(1u);
    a.f[2] = tc_argf(2u);
    a.f[3] = tc_argf(3u);
    a.f[4] = tc_argf(4u);
    a.f[5] = tc_argf(5u);
    a.f[6] = tc_argf(6u);
    a.f[7] = tc_argf(7u);
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
