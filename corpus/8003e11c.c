#include "tc_rt.h"

void fn_8003e11c(s32 param_1)
{
    if ((u32)param_1 != 0u) {
        wr32(0x803be678u, (u32)param_1);
        return;
    }
    wr32(0x803be678u, 0x8003fa00u);
    return;
}
