#include "tc_rt.h"

u32 fn_80191350(s32 param_1)
{
    if (rd32((u32)param_1 + 0x1c0u) == 0u) {
        return 1u;
    }
    return 0u;
}
