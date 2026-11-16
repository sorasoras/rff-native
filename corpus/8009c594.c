#include "tc_rt.h"

u32 fn_8009c594(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r12 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((u32)param_1 != 0u) {
        r5 = rd32((u32)param_1 + 0x1cu);
        r6 = rd32((u32)param_1 + 0x18u);
        r0 = r6 - r5;
        if ((rd32((u32)param_1 + 0x14u) == 0u || r6 < r5) || r0 < param_2) {
            r12 = rd32(rd32((u32)param_1 + 0xcu) + 0x3cu);
            if (r12 == 0u) {
                return r31;
            }
            a.r[0] = rd32((u32)param_1 + 0x20u);
            a.r[1] = rd32((u32)param_1 + 0x24u);
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = (u32)param_1;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        } else {
            r31 = 1u;
            wr32((u32)param_1 + 0x1cu, r5 + param_2);
        }
    }
    return r31;
}
