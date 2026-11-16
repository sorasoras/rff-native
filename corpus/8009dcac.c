#include "tc_rt.h"

void fn_8009dcac(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x54u);
    if (r4 != 0u) {
        wr32((u32)param_1 + 0x1cu, r4);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0x24u;
        r3 = tc_call(0x8009c4e4u, &a);
        if ((u32)(s8)r3 == 0u) {
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0x54u;
        (void)tc_call(0x8009c4e4u, &a);
    } else {
        wr32((u32)param_1 + 0x1cu, r4);
        wr32((u32)param_1 + 0x58u, 1u);
    }
    return;
}
