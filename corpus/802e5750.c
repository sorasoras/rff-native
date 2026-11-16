#include "tc_rt.h"

void fn_802e5750(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    while ((r31 & 0xffffu) < param_3) {
        a.r[0] = param_1;
        a.r[1] = param_2 + ((r31 & 0xffffu) * 0x14u);
        r3 = tc_call(0x802e5528u, &a);
        r4 = rd32(r3 + 0x10u);
        r0 = r3 + 0x10u;
        while (r4 != r0) {
            r3 = rd32(r4 + 8u);
            if (r3 == (u32)param_5) {
                return;
            }
            if ((u32)param_4 != 0u) {
                r5 = rd32((u32)param_5 + 0xcu);
                while (r5 != 0u) {
                    if (r3 == r5) {
                        return;
                    }
                    r5 = rd32(r5 + 0xcu);
                }
            }
            r4 = rd32(r4);
        }
        r31 = r31 + 1u;
    }
    return;
}
