#include "tc_rt.h"

u32 fn_801743f8(s32 param_1)
{
    if (rd32((u32)param_1 + 0x120u) == 1u) {
        wr32((u32)param_1 + 0x120u, 0u);
    }
    return 1u;
}
