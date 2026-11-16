#include "tc_rt.h"

u32 fn_80038acc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0u;
    (void)tc_call(0x8003893cu, &a);
    if (rd32(0x803af118u) == 0u) {
        wr32(0x803af14cu, (u32)param_1);
        r3 = 1u;
        wr32((u32)param_1 + 8u, 0u);
        wr32(0x803af118u, 4u);
    } else {
        r3 = 0u;
    }
    return r3;
}
