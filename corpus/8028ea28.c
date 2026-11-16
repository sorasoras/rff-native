#include "tc_rt.h"

void fn_8028ea28(void)
{
    u32 r3 = tc_argr(0u), r12 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    do {
        r12 = rd32(0x8053d578u);
    } while (r12 == 0x8028ea28u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = 4u;
    a.r[1] = 0u;
    a.r[2] = tc_argr(2u);
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
