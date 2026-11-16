#include "tc_rt.h"

u32 fn_80163c6c(s32 param_1)
{
    u32 r5 = 0, r6 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x20u);
    if (rd32(r5 + 0x4cu) == 2u) {
        a.r[0] = r5 + 8u;
        a.r[1] = 2u;
        (void)tc_call(0x8011e5a0u, &a);
    } else {
        r6 = rd32(r5 + 0x48u);
        if (((s32)r6 >= 56 && (s32)r6 <= 100) && rd32(rd32((u32)param_1 + 0x24u) + 0x74u) != 0u) {
            return 1u;
        }
        if (((s32)r6 >= 43 && (s32)r6 <= 55) && rd32(rd32((u32)param_1 + 0x24u) + 0x74u) != 0u) {
            return 1u;
        }
        a.r[0] = r5 + 8u;
        a.r[1] = 2u;
        (void)tc_call(0x8011e5a0u, &a);
    }
    return 1u;
}
