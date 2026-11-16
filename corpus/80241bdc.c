#include "tc_rt.h"

void fn_80241bdc(u32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((param_2 & 0xfu) == 0u) {
        a.r[0] = rd32(0x80570b44u);
        (void)tc_call(0x80241a38u, &a);
        r31 = rd32(0x80570b44u);
        wr32(0x80571794u, rd32(0x80571794u) | (((r31 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r31 & 0x1fu))));
        a.r[0] = r31;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x80265848u, &a);
        a.r[0] = r31;
        a.r[1] = rd32(0x80570b4cu) | 0x400000u;
        (void)tc_call(0x802656e4u, &a);
        a.r[0] = rd32(0x80571794u);
        (void)tc_call(0x80265754u, &a);
    }
    r5 = rd32(0x80571790u);
    r6 = ppc_cntlzw(r5);
    wr32(0x80570b44u, r6);
    if (r6 != 0x20u) {
        r5 = r5 & ~(((r6 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r6 & 0x1fu)));
        wr32(0x80571790u, r5);
        a.r[0] = (r6 * 0xcu) - 0x7fb19d30u;
        a.r[1] = 0u;
        a.r[2] = 0xcu;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = rd32(0x80570b44u);
        a.r[1] = 0x80241d70u;
        (void)tc_call(0x80265fc8u, &a);
    }
    return;
}
