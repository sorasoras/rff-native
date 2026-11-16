#include "tc_rt.h"

u32 fn_8020f86c(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32(0x80571398u) + 0x1c0u);
    r4 = r3 + 0x60u;
    if (r3 == 4u) {
        r4 = 0xc8u;
    }
    a.r[0] = 0xdu;
    a.r[1] = r4;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x801006a4u, &a);
    return 1u;
}
