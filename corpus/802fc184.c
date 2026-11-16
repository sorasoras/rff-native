#include "tc_rt.h"

void fn_802fc184(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    r3 = tc_call(0x802facacu, &a);
    c0eq = r3 == 0u;
    if (c0eq) {
        r3 = 0u;
    } else {
        if (!c0eq) {
            a.r[0] = r3;
            r3 = tc_call(0x802fc0dcu, &a);
        }
    }
    if (r3 != 0u) {
        wr32(r3 + 0xecu, param_2);
        wr32(r3 + 0xf4u, rd32((u32)param_1 + 4u));
    }
    return;
}
