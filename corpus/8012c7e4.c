#include "tc_rt.h"

void fn_8012c7e4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r29 = 0u;
    r30 = (u32)param_1;
    while ((s32)r29 < (s32)(rd32((u32)param_1 + 0xcu) * 0xau)) {
        a.r[0] = 0x8049c500u;
        a.r[1] = r29;
        r3 = tc_call(0x800c8ca4u, &a);
        r4 = 0u;
        r0 = r3 & 0xffu;
        if ((r3 & 4u) != 0u) {
            r4 = 2u;
        } else {
            r0 = r0 & 1u;
            if (r0 != 0u) {
                r4 = 3u;
            } else {
                if (r29 != rd32((u32)param_1 + 0x2e8u)) {
                    r4 = 1u;
                }
            }
        }
        r3 = rd32(r30 + 0xb8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            (void)tc_call(0x801ed110u, &a);
        }
        r30 = r30 + 4u;
        r29 = r29 + 1u;
    }
    return;
}
