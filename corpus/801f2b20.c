#include "tc_rt.h"

u32 fn_801f2b20(u32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r30 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r30 < 0 || (s32)r30 >= 70) {
    } else {
        a.r[0] = 0x8049c500u;
        a.r[1] = r30;
        r3 = tc_call(0x800c8794u, &a);
        if ((s32)r3 < 0 || (s32)r3 >= 171) {
        } else {
            a.r[0] = 0x8049c500u;
            a.r[1] = r30;
            r3 = tc_call(0x800c8794u, &a);
            wr32(0x817fdfe8u, r3);
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x80149898u, &a);
            a.r[0] = 0xdu;
            a.r[1] = r3 + 0x1fu;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = 0u;
            (void)tc_call(0x801006a4u, &a);
        }
    }
    return 1u;
}
