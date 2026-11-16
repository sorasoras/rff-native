#include "tc_rt.h"

void fn_8020b3c4(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    r4 = rd32(0x80571400u);
    if ((u32)param_1 != r4) {
        for (;;) {
            if (r4 == 0u) {
                wr32((u32)param_1 + 0x3cu, rd32(0x80571404u));
                wr32(0x80571404u, (u32)param_1);
                return;
            }
            r0 = rd32(r4 + 0x3cu);
            if (r0 == (u32)param_1) break;
            r4 = r0;
        }
        wr32(r4 + 0x3cu, rd32((u32)param_1 + 0x3cu));
    } else {
        wr32(0x80571400u, rd32((u32)param_1 + 0x3cu));
    }
    wr32((u32)param_1 + 0x3cu, rd32(0x80571404u));
    wr32(0x80571404u, (u32)param_1);
    return;
}
