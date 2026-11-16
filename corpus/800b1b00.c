#include "tc_rt.h"

u32 fn_800b1b00(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = rd32((u32)param_1 + 0xed8u);
    r5 = (u32)param_1;
    r7 = 0u;
    for (;;) {
        r4 = rd32((u32)param_1 + 0xed4u);
        if ((s32)r7 >= (s32)r4) break;
        r7 = r7 + 1u;
        wr32(r5 + 0xed8u, rd32(r5 + 0xedcu));
        r5 = r5 + 4u;
    }
    wr32((u32)param_1 + 0xed4u, r4 - 1u);
    return r6;
}
