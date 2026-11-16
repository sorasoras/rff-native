#include "tc_rt.h"

u32 fn_80074e90(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fb79c28u);
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x260u);
        return r3;
    }
    return 0u;
}
