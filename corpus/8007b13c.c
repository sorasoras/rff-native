#include "tc_rt.h"

void fn_8007b13c(s32 param_1, u32 param_2)
{
    u32 r4 = 0;
    r4 = param_2;
    if (param_2 != 0u) {
        wr32((u32)param_1 + 0x58u, r4);
        return;
    }
    r4 = 0x8007b158u;
    wr32((u32)param_1 + 0x58u, r4);
    return;
}
