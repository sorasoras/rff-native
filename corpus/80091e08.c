#include "tc_rt.h"

u32 fn_80091e08(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x805706e8u) != 0u || (u32)rd8(0x80492821u) != 3u) {
        r29 = 0u;
        r30 = 0u;
        r31 = 0u;
        for (;;) {
            r3 = rd32((u32)param_1 + r31 + 0xbf8u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = param_4;
                r3 = tc_call(0x80090324u, &a);
                if (r3 != 0u) break;
            }
            r30 = r30 + 1u;
            r31 = r31 + 4u;
            if ((s32)r30 >= 20) {
                r3 = 0u;
                break;
            }
        }
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = param_5;
            (void)tc_call(0x8008f460u, &a);
            r29 = 1u;
        }
        r3 = r29;
    } else {
        r3 = 0u;
    }
    return r3;
}
