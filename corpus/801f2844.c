#include "tc_rt.h"

u32 fn_801f2844(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r4 < 0 || (s32)r4 >= 70) {
    } else {
        a.r[0] = 0x8049c500u;
        a.r[1] = r4;
        r3 = tc_call(0x800c8b88u, &a);
        r3 = r3 & 0xffu;
        a.r[0] = r3;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 2u;
        (void)tc_call(0x800f8a84u, &a);
        wr16(0x817fdfecu, 0u);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 0u;
        (void)tc_call(0x80100670u, &a);
    }
    return 1u;
}
