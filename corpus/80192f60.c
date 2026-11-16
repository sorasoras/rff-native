#include "tc_rt.h"

u32 fn_80192f60(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1) + 0xc6u;
    a.r[1] = 2u;
    r3 = tc_call(0x800f89c4u, &a);
    r4 = rd32(rd32(0x80571398u) + 0xfcu);
    if (r4 != 0u) {
        r3 = r4 + ((r3 << 2u) & 0xfffffffcu);
        r3 = rd32(r3 + 0xcu);
        if (r3 != 0x2e8u) {
            a.r[0] = r3;
            r3 = tc_call(0x800cd694u, &a);
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = 0u;
            (void)tc_call(0x801006a4u, &a);
        }
    }
    return 1u;
}
