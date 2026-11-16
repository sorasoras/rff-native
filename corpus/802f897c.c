#include "tc_rt.h"

u32 fn_802f897c(u32 param_1, s32 param_2)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        c0eq = (u32)rd8(param_1 + 0x188u) == 0u;
        wr32(param_1, 0x8039d130u);
        if (!c0eq) {
            a.r[0] = param_1 + 0x14cu;
            (void)tc_call(0x80234b88u, &a);
            wr8(param_1 + 0x188u, 0u);
        }
        a.r[0] = param_1;
        (void)tc_call(0x8030149cu, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80301440u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
