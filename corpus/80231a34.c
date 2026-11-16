#include "tc_rt.h"

void fn_80231a34(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    for (;;) {
        r3 = tc_call(0x80273734u, &a);
        if (r3 == 2u) {
            r3 = 0xffffffffu;
            break;
        }
        if (r3 == 0u) {
            r3 = tc_call(0x80275244u, &a);
            r31 = r3;
            r3 = tc_call(0x8023029cu, &a);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
            (void)tc_call(0x80255b5cu, &a);
            r31 = tc_lastr4() - r31;
            r3 = 0u;
            break;
        }
    }
    if (r3 == 0u) {
        a.r[0] = r31;
        a.r[1] = (((0u - param_1) | param_1) >> 0x1fu) & 1u;
        (void)tc_call(0x80231cecu, &a);
    }
    return;
}
