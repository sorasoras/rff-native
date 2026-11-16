#include "tc_rt.h"

u32 fn_80275594(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0x8038f940u;
    a.r[0] = 0x80570d88u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 4u;
    r3 = tc_call(0x80275428u, &a);
    if (r3 != 0u) {
        for (;;) {
            r31 = (u32)rd8(r30);
            if ((u32)(s8)r31 == 0xffffffffu) break;
            a.r[0] = r30 + 1u;
            a.r[1] = 0x817fdfe8u;
            r3 = tc_call(0x8025beb0u, &a);
            if (r3 == 0u) {
                r3 = r31;
                return r3;
            }
            r30 = r30 + 5u;
        }
    }
    r3 = 0xffffffffu;
    return r3;
}
