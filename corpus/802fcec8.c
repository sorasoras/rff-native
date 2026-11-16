#include "tc_rt.h"

void fn_802fcec8(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1) == 0u) {
        a.r[0] = param_1 + 8u;
        (void)tc_call(0x8022671cu, &a);
        r3 = tc_call(0x8023029cu, &a);
        r4 = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
        a.r[0] = param_1 + 8u;
        a.r[1] = r4;
        a.r[2] = r3;
        a.r[3] = tc_lastr4();
        a.r[4] = 0u;
        a.r[5] = (ppc_mulhwu(0x10624dd3u, r4 * 0x65b9abu) >> 9u) & 0x7fffffu;
        a.r[6] = 0x802fcf64u;
        (void)tc_call(0x802269ecu, &a);
        wr8(param_1, 1u);
    }
    return;
}
