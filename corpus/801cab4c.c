#include "tc_rt.h"

void fn_801cab4c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    r0 = (u32)rd8((u32)param_1 + 0x8cu);
    c0lt = (s32)r0 < 3;
    if (r0 != 3u) {
        if (!c0lt) {
            return;
        }
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            return;
        }
        if (c0lt) {
            return;
        }
        wr8((u32)param_1 + 0x8cu, 3u);
        return;
    }
    return;
}
