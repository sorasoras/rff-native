#include "tc_rt.h"

void fn_8009bf8c(s32 param_1, s32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r4 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0xc0u);
        if (r4 == 0u) {
            return;
        }
        if (rd32((u32)param_1 + 0xa0u) <= param_3) {
            return;
        }
        if ((u32)param_4 == 0u) {
            return;
        }
        a.r[0] = r4;
        a.r[1] = param_3;
        a.r[2] = (u32)param_4;
        a.r[3] = param_5;
        (void)tc_call(0x8009f318u, &a);
        return;
    }
    return;
}
