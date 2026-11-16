#include "tc_rt.h"

s32 fn_8027504c(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdff8u;
    a.r[1] = 5u;
    r3 = tc_call(0x802748c4u, &a);
    if (r3 == 0u) {
        wr8(0x817fdff8u, 0u);
    } else {
        r0 = (u32)(s8)rd8(0x817fdff8u);
        if ((s32)r0 < -32) {
            wr8(0x817fdff8u, 0xe0u);
        } else {
            if ((s32)r0 > 32) {
                wr8(0x817fdff8u, 0x20u);
            }
        }
    }
    return (s32)(s8)((u32)rd8(0x817fdff8u) & 0xfffffffeu);
}
