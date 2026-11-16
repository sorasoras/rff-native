#include "tc_rt.h"

void fn_8008273c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32(0x80571194u);
    r0 = r5 & ~(param_1 & 0xf7u);
    if ((u32)param_2 != 0u) {
        r0 = r5 | (param_1 & 0xf7u);
    }
    wr32(0x80571194u, r0);
    return;
}
