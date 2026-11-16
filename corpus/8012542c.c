#include "tc_rt.h"

u32 fn_8012542c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0x42cu);
    r0 = 0u;
    c0lt = (s32)r4 < 1;
    if (r4 != 1u) {
        if (!c0lt) {
            return r0;
        }
        if ((s32)r4 < 0) {
            return r0;
        }
        r0 = rd32((u32)param_1 + 0xc48u);
    } else {
        r0 = rd32((u32)param_1 + 0xc4cu);
    }
    return r0;
}
