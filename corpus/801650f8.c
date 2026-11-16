#include "tc_rt.h"

void fn_801650f8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x801f0374u, &a);
    if (r3 == 0u) {
        return;
    }
    wr32((u32)param_1 + 0x14cu, 0u);
    if ((rd32((u32)param_2 + 0x30u) & 0x200u) != 0u) {
        r4 = rd32((u32)param_2 + 0x2cu);
        if (r4 != 0u && rd32(r4 + 0xb8u) == 0u) {
            r4 = r4 + 0x54cu;
            if (r4 != 0u) {
                r4 = ((rd32(r4 + 0x74u) - 0x1f8u) * 0x14u) - 0x7fb60e50u;
                wr32((u32)param_1 + 0x14cu, (u32)rd8(r4 + 0x61fu));
            }
        }
    }
    return;
}
