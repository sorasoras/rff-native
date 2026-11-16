#include "tc_rt.h"

void fn_80035ba0(s32 param_1)
{
    if ((u32)param_1 != 0u) {
        wr8(0x803a3e8bu, 1u);
        return;
    }
    wr8(0x803a3e8bu, 0u);
    wr32(0x803a3e84u, 0u);
    wr8(0x803a3e8au, 0u);
    wr8(0x803a3e89u, 0u);
    return;
}
