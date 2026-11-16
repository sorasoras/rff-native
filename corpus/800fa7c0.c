#include "tc_rt.h"

s32 fn_800fa7c0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0;
    r4 = rd32((u32)param_1 + 0x1cu);
    r0 = 0u;
    r5 = rd32(r4 + 0x42cu);
    c0lt = (s32)r5 < 2;
    if (r5 != 2u) {
        if (!c0lt) {
            if ((s32)r5 < 4) {
                r0 = r4 + 0x5c8u;
            }
        } else {
            c0lt = (s32)r5 < 0;
            if (r5 == 0u) {
                r0 = rd32((u32)param_1 + 0x24u);
            } else if (!c0lt) {
                r0 = rd32((u32)param_1 + 0x28u);
            }
        }
    }
    return (s32)r0;
}
