#include "tc_rt.h"

void fn_8015dfec(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    r3 = (u32)param_1 + 0x80u;
    if (r3 != 0u) {
        wr32(r3 + 0x18u, param_2);
        return;
    }
    return;
}
