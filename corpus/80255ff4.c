#include "tc_rt.h"

void fn_80255ff4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    if (param_1 >= 0) {
        if (param_1 >= 1) {
            return;
        }
        r4 = (u32)param_1 * 0xcu;
        wr32(r4 - 0x7faff938u, 0u);
        r3 = r4 - 0x7faff938u;
        wr32(r3 + 4u, 0u);
        wr32(r3 + 8u, 0u);
        return;
    }
    return;
}
