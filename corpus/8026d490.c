#include "tc_rt.h"

void fn_8026d490(u32 param_1)
{
    u32 r3 = 0, r5 = tc_argr(2u), r12 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    do {
        r5 = rd32(param_1);
        r12 = rd32(r5);
    } while (r12 == 0x8026d490u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = tc_argr(1u);
    a.r[2] = r5;
    a.r[3] = tc_argr(3u);
    a.r[4] = tc_argr(4u);
    a.r[5] = tc_argr(5u);
    a.r[6] = tc_argr(6u);
    a.r[7] = tc_argr(7u);
    a.f[0] = tc_argf(0u);
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
