#include "tc_rt.h"

void fn_80228148(s32 param_1)
{
    wr16((u32)param_1 + 0x1a0u, 0u);
    wr16((u32)param_1 + 0x1a2u, 0u);
    if ((u32)param_1 == rd32(0x800000d8u)) {
        wr32(0x800000d8u, 0u);
        return;
    }
    return;
}
