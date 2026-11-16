#include "tc_rt.h"

void fn_802cf3cc(s32 param_1, u32 param_2)
{
    u32 r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 != 0u) {
        r4 = rd32((u32)param_1 + 0x50u);
        r30 = (r4 >> 0x1cu) & 0xfu;
        r31 = rd32((u32)param_1 + 0x58u) + ((r4 >> 0x17u) & 0x1e0u);
        while (r30 < param_2) {
            a.r[0] = r31;
            a.r[1] = 0u;
            a.r[2] = 0x20u;
            (void)tc_call(0x8000443cu, &a);
            r31 = r31 + 0x20u;
            r30 = r30 + 1u;
        }
        wr32((u32)param_1 + 0x50u, (rd32((u32)param_1 + 0x50u) & 0xfffffffu) | ((param_2 << 0x1cu) & 0xf0000000u));
    }
    return;
}
