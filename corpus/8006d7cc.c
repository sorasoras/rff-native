#include "tc_rt.h"

void fn_8006d7cc(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x290u);
    if (r0 != 0x19u) {
        if (r0 == 0x18u || r0 == 0x1au) {
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) {
            return;
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800c4f2cu, &a);
    return;
}
