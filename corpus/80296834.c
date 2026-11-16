#include "tc_rt.h"

u32 fn_80296834(s32 param_1)
{
    if (rd32(0x8053dec4u) != 0u && (u32)param_1 != 0u) {
        return 2u;
    }
    wr32(0x8053dec4u, (u32)param_1);
    return 0u;
}
