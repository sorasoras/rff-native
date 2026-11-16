#include "tc_rt.h"

void fn_8003c9b0(s32 param_1)
{
    wr32(0x80570664u, (u32)param_1);
    if ((u32)param_1 < 1u) {
        wr32(0x80570664u, 1u);
        return;
    }
    return;
}
