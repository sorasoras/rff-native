#include "tc_rt.h"

s32 fn_802de670(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32(0x80570f00u);
    if ((s32)r4 < 0 || param_1 == 0u) {
        r3 = 0xfffffc07u;
    } else {
        wr32(0x817fdfb0u, 0x817fdee0u);
        wr32(0x817fdfb4u, 8u);
        a.r[0] = r4;
        a.r[1] = 0x20u;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 0x817fdfb0u;
        r3 = tc_call(0x802701f8u, &a);
        if (r3 == 0u) {
            r0 = rd32(0x817fdee0u);
            wr32(param_1 + 4u, rd32(0x817fdee4u));
            wr32(param_1, r0);
        }
    }
    return (s32)r3;
}
