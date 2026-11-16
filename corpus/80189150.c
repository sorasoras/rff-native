#include "tc_rt.h"

u32 fn_80189150(s32 param_1, s32 param_2)
{
    if ((s32)((u32)param_2 - rd32((u32)param_1 + 4u)) >= 0) {
        return 1u;
    }
    return 0u;
}
