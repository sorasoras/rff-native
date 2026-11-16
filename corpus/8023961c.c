#include "tc_rt.h"

u32 fn_8023961c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x802396f8u;
    r3 = tc_call(0x802392b8u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        for (;;) {
            r0 = rd32((u32)param_1 + 0xcu);
            if (r0 == 0u || r0 == 0xffffffffu || r0 == 0xau) break;
            if (r0 == 3u) {
                r0 = rd32((u32)param_1 + 8u);
                if (r0 == 4u || r0 == 5u || r0 == 0xdu || r0 == 0x21u || r0 == 0x22u || r0 == 0x29u || r0 == 0x2au || r0 == 0xfu || r0 == 0x25u) break;
            }
            a.r[0] = 0x805715a0u;
            (void)tc_call(0x8022ffe4u, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
