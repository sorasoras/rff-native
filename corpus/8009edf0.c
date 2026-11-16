#include "tc_rt.h"

u32 fn_8009edf0(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((rd32(param_1 + 0x1cu) & 2u) != 0u) {
        if (rd32(param_1 + 8u) == (u32)param_2) {
            return r31;
        }
        a.r[0] = rd32(param_1);
        a.r[1] = rd32(param_1 + 0xcu);
        (void)tc_call(0x8009c354u, &a);
        wr32(param_1 + 0x1cu, rd32(param_1 + 0x1cu) & 0xfffffffdu);
    }
    r3 = rd32(param_1 + 0x1cu);
    if ((r3 & 1u) != 0u) {
        if (rd32(param_1 + 8u) == (u32)param_2) {
            return r31;
        }
        wr32(param_1 + 0x1cu, r3 & 0xfffffffau);
    }
    a.r[0] = rd32(param_1);
    a.r[1] = param_1 + 0xcu;
    a.r[2] = param_1 + 0x10u;
    a.r[3] = rd32(param_1 + 0x14u);
    a.r[4] = param_1 + 0x18u;
    a.r[5] = rd32(param_1 + 4u);
    a.r[6] = (u32)param_2;
    r3 = tc_call(0x8009c178u, &a);
    if ((u32)(s8)r3 != 0u) {
        r0 = rd32(param_1 + 0x1cu);
        wr32(param_1 + 8u, (u32)param_2);
        r0 = r0 | 2u;
        wr32(param_1 + 0x1cu, r0);
    } else {
        r31 = 0u;
    }
    return r31;
}
