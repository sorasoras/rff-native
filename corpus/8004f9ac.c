#include "tc_rt.h"

u32 fn_8004f9ac(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8004f61cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r30 = ((u32)param_1 * 0x2cu) - 0x7fc39730u;
        r3 = r30 + 4u;
        wr32(0x817fdfe8u, r3);
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        a.r[0] = r30 + 0x1cu;
        r3 = tc_call(0x802f9d48u, &a);
        r31 = r3;
        a.r[0] = rd32(0x817fdfe8u);
        (void)tc_call(0x8022d648u, &a);
        r3 = r31;
    }
    return r3;
}
