#include "tc_rt.h"

void fn_800ac62c(s32 param_1)
{
    if (rd32((u32)param_1 + 0x6cu) == 0u) {
        wr32((u32)param_1 + 0x6cu, 1u);
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffefffbu);
        return;
    }
    return;
}
