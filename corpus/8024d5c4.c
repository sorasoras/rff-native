#include "tc_rt.h"

void fn_8024d5c4(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32(0x80571948u);
    if (r5 != 0u) {
        while (r5 != 0u) {
            if (rd32((u32)param_1 + 4u) < rd32(r5 + 4u)) {
                wr32((u32)param_1 + 0x3cu, rd32(r5 + 0x3cu));
                wr32(r5 + 0x3cu, (u32)param_1);
                r4 = rd32((u32)param_1 + 0x3cu);
                wr32((u32)param_1 + 0x38u, r5);
                if (r4 != 0u) {
                    wr32(r4 + 0x38u, (u32)param_1);
                    break;
                }
                wr32(0x80571948u, (u32)param_1);
                break;
            }
            r5 = rd32(r5 + 0x38u);
        }
        if (r5 != 0u) {
            return;
        }
        wr32(rd32(0x80571944u) + 0x38u, (u32)param_1);
        wr32((u32)param_1 + 0x38u, 0u);
        wr32((u32)param_1 + 0x3cu, rd32(0x80571944u));
        wr32(0x80571944u, (u32)param_1);
        return;
    }
    wr32(0x8057194cu, (u32)param_1);
    wr32(0x80571944u, (u32)param_1);
    wr32(0x80571948u, (u32)param_1);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    return;
}
