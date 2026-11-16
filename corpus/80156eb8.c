#include "tc_rt.h"

u32 fn_80156eb8(s32 param_1)
{
    u32 r5 = 0;
    r5 = rd32((((u32)rd8((u32)param_1 + 0x52u) << 2u) & 0xfffffffcu) - 0x7fcc5a78u);
    if (rd32((u32)param_1 + 0x4cu) != r5) {
        wr32((u32)param_1 + 0x4cu, r5);
        wr32((u32)param_1 + 0x44u, 0u);
        wr32((u32)param_1 + 0x48u, 8u);
        return 1u;
    }
    return 0u;
}
