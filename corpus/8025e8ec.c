#include "tc_rt.h"

u32 fn_8025e8ec(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fbff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x817fbff8u;
    a.r[1] = 0u;
    a.r[2] = 0x2000u;
    (void)tc_call(0x8000443cu, &a);
    r7 = (u32)param_2 - 2u;
    for (;;) {
        r7 = r7 + 2u;
        r0 = (u32)rd16(r7);
        if (r0 == 0u) break;
        r6 = (r0 >> 3u) & 0x1fffu;
        r0 = r0 & 7u;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = (u32)rd8(r6 - 0x7e804008u) | r0;
        wr8(r6 - 0x7e804008u, (u8)r0);
    }
    r3 = (u32)param_1 - 2u;
    for (;;) {
        r3 = r3 + 2u;
        r0 = (u32)rd16(r3);
        if (r0 == 0u) break;
        r5 = (r0 >> 3u) & 0x1fffu;
        r0 = r0 & 7u;
        r5 = (u32)rd8(r5 - 0x7e804008u);
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r5 = (u32)(s8)r5;
        r0 = r5 & r0;
        if (r0 != 0u) {
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
