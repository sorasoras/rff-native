#include "tc_rt.h"

u32 fn_80038970(s32 param_1)
{
    if (rd32(0x803af118u) == 0u) {
        wr32(0x803af140u, (u32)param_1);
        wr32((u32)param_1 + 0x10u, 0u);
        wr32((u32)param_1 + 0x14u, 0u);
        wr32(0x803af118u, 1u);
        return 1u;
    }
    return 0u;
}
