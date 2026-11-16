#include "tc_rt.h"

void fn_800a2ad0(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800a2d38u, &a);
        a.r[0] = r3;
        (void)tc_call(0x8009b7ecu, &a);
    }
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0x3314u, 0u);
    wr32(param_1 + 0x3318u, 0xffffffffu);
    wr32(param_1 + 0x331cu, 0xffffffffu);
    wr32(param_1 + 0x3338u, 0u);
    a.r[0] = param_1 + 0x3324u;
    (void)tc_call(0x800a62ccu, &a);
    return;
}
