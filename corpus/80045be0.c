#include "tc_rt.h"

s32 fn_80045be0(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) != 0u) {
        r4 = rd32((u32)param_1 + 8u);
        r0 = 0u;
        wr32((u32)param_1 + 4u, 0u);
        if (r4 != 0u) {
            r0 = (u32)param_1 + r4;
        }
        r4 = rd32((u32)param_1 + 0x18u);
        wr32((u32)param_1 + 8u, r0);
        if (r4 != 0u) {
            r0 = (u32)param_1 + r4;
        } else {
            r0 = 0u;
        }
        wr32((u32)param_1 + 0x18u, r0);
        r29 = 0u;
        r31 = 0u;
        while (r29 < rd32((u32)param_1 + 0xcu)) {
            a.r[0] = rd32((u32)param_1 + 8u) + r31;
            a.r[1] = (u32)param_1;
            (void)tc_call(0x80045b44u, &a);
            r31 = r31 + 0x20u;
            r29 = r29 + 1u;
        }
    }
    return param_1;
}
