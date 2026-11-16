#include "tc_rt.h"

u32 fn_80221b60(u32 param_1)
{
    if ((u32)rd16(rd32(param_1) + 0xcdu) == 0u) {
        return 1u;
    }
    return 0u;
}
