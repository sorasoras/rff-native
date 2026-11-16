#include "tc_rt.h"

u32 fn_80132da0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0x430u);
    c0lt = (s32)r4 < 1;
    r0 = 0u;
    if (r4 != 1u) {
        if (!c0lt) {
            if ((s32)r4 < 3) {
                r0 = rd32((u32)param_1 + 0x458u);
            }
        } else if ((s32)r4 >= 0) {
            r0 = rd32((u32)param_1 + 0x454u);
        }
    }
    return r0;
}
