#include "tc_rt.h"

u32 fn_80043c58(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    if ((s32)param_1 < 0) {
        wr32(param_2, 0u);
        return 0u;
    }
    if (param_1 >= 4u) {
        wr32(param_2, 0u);
        return 0u;
    }
    r3 = (param_1 * 0x954u) - 0x7fc40918u;
    wr32(param_2, r3);
    r3 = rd32(r3 + 0x840u);
    return r3;
}
