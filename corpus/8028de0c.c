#include "tc_rt.h"

void fn_8028de0c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1 + 8u;
    r3 = tc_call(0x8029d58cu, &a);
    if (r3 != 0u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = r3;
        a.r[2] = 8u;
        (void)tc_call(0x80004338u, &a);
    } else {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0u;
        a.r[2] = 8u;
        (void)tc_call(0x8000443cu, &a);
    }
    r0 = (u32)rd8((u32)param_1 + 0xfu);
    if (r0 != 2u) {
        if (r0 == 0u) {
            r0 = (u32)rd8((u32)param_1 + 0xeu);
            if (r0 <= 0x17u) {
                r0 = (r0 << 2u) & 0x3fcu;
                r4 = rd32(r0 - 0x7fcb7e00u);
                r6 = (r4 >> 3u) & 0x3fcu;
                r0 = r4 - (r4 & 0x1fe0u);
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = rd32(r6 - 0x7e802018u) | r0;
                wr32(r6 - 0x7e802018u, r0);
            }
        }
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0u;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x8029aab4u, &a);
    } else {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0xbu;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x8029aab4u, &a);
    }
    return;
}
