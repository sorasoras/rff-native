#include "tc_rt.h"

u32 fn_801757bc(s32 param_1)
{
    wr32((u32)param_1 + 0x124u, 0u);
    wr32((u32)param_1 + 0x140u, 0u);
    wr32((u32)param_1 + 0x144u, 0u);
    return 1u;
}
