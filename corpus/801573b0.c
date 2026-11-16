#include "tc_rt.h"

s32 fn_801573b0(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0x45u;
    wr32(0x817fdff4u, 0u);
    do {
        a.r[0] = 0x8049c500u;
        a.r[1] = r30;
        r3 = tc_call(0x800c8794u, &a);
        if (r3 < 0xabu) {
            wr32(0x817fdfe8u, r3);
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x80149898u, &a);
            if ((u32)param_2 == r3) {
                a.r[0] = 0x8049c500u;
                a.r[1] = r30;
                r3 = tc_call(0x800c8ca4u, &a);
                if ((r3 & 5u) != 0u) {
                    r3 = r30;
                    return (s32)r3;
                }
            }
        }
        r30 = r30 - 1u;
    } while ((s32)r30 >= 0);
    r3 = 0xffffffffu;
    return (s32)r3;
}
