#include "tc_rt.h"

void fn_801c0ef8(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x80571398u) == 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = 0x1c4u;
        r3 = tc_call(0x801b39d8u, &a);
        r31 = r3;
        if (r3 != 0u) {
            (void)tc_call(0x801bf93cu, &a);
        }
        wr32(0x80571398u, r31);
        a.r[0] = r31;
        a.r[1] = param_1;
        (void)tc_call(0x801bfb90u, &a);
    }
    return;
}
