#include "tc_rt.h"

u32 fn_800b3260(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0xe7cu);
    r0 = r4 - 1u;
    wr32((u32)param_1 + 0xe7cu, r0);
    if ((s32)r0 < 0) {
        wr32((u32)param_1 + 0xe7cu, 4u);
    }
    r4 = (r4 << 2u) & 0xfffffffcu;
    r4 = (u32)param_1 + r4;
    r3 = rd32(r4 + 0xe68u);
    wr32(r4 + 0xe68u, 0xffffffffu);
    return r3;
}
