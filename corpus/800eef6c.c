#include "tc_rt.h"

u32 fn_800eef6c(s32 param_1)
{
    if ((s32)rd32((u32)param_1 + 4u) >= 0 && (s32)rd32((u32)param_1 + 8u) >= 0) {
        return 1u;
    }
    return 0u;
}
