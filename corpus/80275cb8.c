#include "tc_rt.h"

u32 fn_80275cb8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r4 = 0, r6 = 0;
    r6 = rd32((u32)param_1 + 4u);
    if ((s32)param_2 >= 0 && param_2 < rd32((u32)param_1 + 0xcu)) {
        r4 = param_2 * 0xcu;
        if ((rd32(r6 + r4) & 0xff000000u) == 0u) {
            wr32(param_3, (u32)param_1);
            r4 = r6 + r4;
            wr32(param_3 + 4u, rd32(r4 + 4u));
            wr32(param_3 + 8u, rd32(r4 + 8u));
            return 1u;
        }
    }
    return 0u;
}
