#include "tc_rt.h"

void fn_800ca2c4(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x140u) != 0u) {
        if ((u32)param_2 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x58u), &a);
            r4 = rd32(param_1 + 0x140u);
            wr32(r4 + 0x30u, rd32(r4 + 0x30u) | 1u);
            r4 = rd32(param_1 + 0x140u);
            wr32(r4 + 0x30u, rd32(r4 + 0x30u) | 2u);
            wr32(param_1 + 0x13cu, 0u);
        } else {
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x58u), &a);
            r4 = rd32(param_1 + 0x140u);
            wr32(r4 + 0x30u, rd32(r4 + 0x30u) & 0xfffffffeu);
            r4 = rd32(param_1 + 0x140u);
            wr32(r4 + 0x30u, rd32(r4 + 0x30u) & 0xfffffffdu);
            wr32(param_1 + 0x13cu, 1u);
        }
    }
    return;
}
