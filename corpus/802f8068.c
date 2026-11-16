#include "tc_rt.h"

void fn_802f8068(u32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1 + 0x3au) == 0u) {
        if (rd32(param_1) != 4u) {
            r4 = rd32(param_1 + 0xecu);
            if (r4 != 0u && (u32)rd8(param_1 + 0x39u) == 0u) {
                a.r[0] = r4;
                a.r[1] = 1u;
                (void)tc_call(0x8030c81cu, &a);
            }
            wr32(param_1, 4u);
        }
        wr8(param_1 + 0x35u, 0u);
    }
    return;
}
