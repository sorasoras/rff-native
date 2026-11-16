#include "tc_rt.h"

void fn_8014c328(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    if ((u32)param_3 != 0u) {
        r6 = rd32((u32)param_1 + 4u);
        r5 = rd32(r6 + 0xf78u);
        wr32(r6 + 0xf78u, r5 | (r5 ^ 0x10000u));
        r4 = rd32((u32)param_1 + 0x70u);
        wr32((u32)param_1 + 0x70u, r4 | (r4 ^ ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu)))));
        return;
    }
    r6 = rd32((u32)param_1 + 4u);
    r5 = rd32(r6 + 0xf78u);
    wr32(r6 + 0xf78u, r5 ^ (r5 & 0x10000u));
    r4 = rd32((u32)param_1 + 0x74u);
    wr32((u32)param_1 + 0x74u, r4 | (r4 ^ ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu)))));
    return;
}
