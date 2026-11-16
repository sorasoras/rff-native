#include "tc_rt.h"

s32 fn_802e5cc0(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32(0x80571d40u);
    r3 = tc_call(0x8026d490u, &a);
    c0eq = r3 == 0u;
    if (c0eq) {
        r31 = 0u;
    } else {
        r31 = r3;
        if (!c0eq) {
            a.r[0] = r3;
            r3 = tc_call(0x802edcfcu, &a);
            r31 = r3;
        }
    }
    if (r31 != 0u) {
        wr32(0x817fdfe8u, (u32)param_1 + 8u);
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = r31 + 4u;
        (void)tc_call(0x802deba4u, &a);
    }
    return (s32)r31;
}
