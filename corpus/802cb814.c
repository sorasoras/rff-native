#include "tc_rt.h"

void fn_802cb814(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1) < param_2) {
        if (rd32(param_1 + 4u) != 0u) {
            a.r[0] = rd32(0x805474e0u);
            (void)tc_call(0x8026d4a0u, &a);
            wr32(param_1 + 4u, 0u);
            wr8(param_1, 0u);
            wr8(param_1 + 1u, 0u);
        }
        a.r[0] = rd32(0x805474e0u);
        r3 = tc_call(0x8026d490u, &a);
        wr32(param_1 + 4u, r3);
        if (r3 != 0u) {
            wr8(param_1, (u8)param_2);
        }
    }
    return;
}
