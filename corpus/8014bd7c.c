#include "tc_rt.h"

u32 fn_8014bd7c(s32 param_1, s32 param_2)
{
    if (rd32((u32)param_1 + 8u) != 0u && param_2 < (s32)rd32((u32)param_1 + 0xcu)) {
        return 1u;
    }
    return 0u;
}
