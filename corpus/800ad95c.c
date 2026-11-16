#include "tc_rt.h"

u32 fn_800ad95c(s32 param_1)
{
    u32 r3 = 0;
    if ((s32)rd32((u32)param_1 + 0x6cu) > 0) {
        return 1u;
    }
    if (rd32((u32)param_1 + 0x70u) != 0u && rd32(0x805706d0u) != 7u) {
        return 1u;
    }
    if (rd32((u32)param_1 + 0x78u) != 0u) {
        return 1u;
    }
    r3 = rd32((u32)param_1 + 0x7cu);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
