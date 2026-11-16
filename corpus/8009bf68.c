#include "tc_rt.h"

u32 fn_8009bf68(s32 param_1)
{
    u32 r4 = 0;
    r4 = 1u;
    if ((u32)param_1 != 0u && rd32((u32)param_1 + 0x58u) != 1u) {
        r4 = 0u;
    }
    return r4;
}
