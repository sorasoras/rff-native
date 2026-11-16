#include "tc_rt.h"

u32 fn_802df7b8(u32 param_1, s32 param_2)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        c0eq = (u32)rd8(param_1 + 0x6du) == 0u;
        wr32(param_1, 0x8039c998u);
        if (!c0eq) {
            a.r[0] = param_1;
            a.r[1] = 0x8039c998u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
