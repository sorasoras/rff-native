#include "tc_rt.h"

u32 fn_80038a7c(s32 param_1)
{
    if (rd32(0x803af118u) == 0u) {
        wr32(0x803af148u, (u32)param_1);
        wr32((u32)param_1 + 0x10u, 0u);
        wr32(0x803af118u, 3u);
        return 1u;
    }
    return 0u;
}
