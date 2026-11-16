#include "tc_rt.h"

u32 fn_8009f7ac(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0x14u);
    a.r[0] = r31;
    r3 = tc_call(0x8009f89cu, &a);
    if ((r3 - 0x5f460000u) == 0x4d45u) {
        r3 = 1u;
        wr32(param_1, 0x8009f864u);
        wr32(param_1 + 4u, 0x8009f87cu);
        wr32(param_1 + 8u, 0x8009f89cu);
    } else {
        a.r[0] = r31;
        r3 = tc_call(0x8009f900u, &a);
        if ((r3 - 0x5f460000u) == 0x4d45u) {
            r3 = 1u;
            wr32(param_1, 0x8009f8c8u);
            wr32(param_1 + 4u, 0x8009f8e0u);
            wr32(param_1 + 8u, 0x8009f900u);
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
