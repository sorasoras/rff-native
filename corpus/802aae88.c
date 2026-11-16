#include "tc_rt.h"

u32 fn_802aae88(s32 param_1, u32 param_2)
{
    u32 r4 = 0, r5 = 0;
    r5 = 0u;
    if (param_2 >= 0x40u) {
        r4 = (((param_2 - 0x40u) & 0xffffu) * 0x7cu) - 0x7fabf5e0u;
        r5 = r4 + 0x178u;
        if ((u32)rd8(r4 + 0x178u) == 0u) {
            r5 = 0u;
        } else {
            if ((u32)param_1 != 0u && (u32)param_1 != rd32(r5 + 0x10u)) {
                r5 = 0u;
            }
        }
    }
    return r5;
}
