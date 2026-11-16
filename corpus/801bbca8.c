#include "tc_rt.h"

void fn_801bbca8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x38u;
    (void)tc_call(0x8007ae84u, &a);
    r3 = rd32((u32)param_1 + 0x1a0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    return;
}
