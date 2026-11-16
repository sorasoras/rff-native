#include "tc_rt.h"

void fn_802c150c(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_r3;
    if ((u32)rd8(param_r3 + 0x1ecu) != 0u) {
        a.r[0] = param_r3 + 0x1a0u;
        (void)tc_call(0x8022671cu, &a);
        r3 = tc_call(0x8023029cu, &a);
        r4 = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
        a.r[0] = param_r3 + 0x1a0u;
        a.r[1] = r4;
        a.r[2] = r3;
        a.r[3] = tc_lastr4();
        a.r[4] = 0u;
        a.r[5] = (ppc_mulhwu(0x10624dd3u, r4 * 0x65b9abu) >> 9u) & 0x7fffffu;
        a.r[6] = 0x802c1118u;
        (void)tc_call(0x802269ecu, &a);
        r27 = 0u;
        do {
            a.r[0] = r31;
            (void)tc_call(0x8022671cu, &a);
            wr32(r31 + 0x50u, 0u);
            r27 = r27 + 1u;
            wr32(r31 + 0x58u, 0xffffffffu);
            wr8(r31 + 0x5cu, 1u);
            wr8(r31 + 0x62u, 1u);
            r31 = r31 + 0x68u;
        } while ((s32)r27 < 4);
    }
    return;
}
