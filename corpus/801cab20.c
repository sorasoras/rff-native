#include "tc_rt.h"

void fn_801cab20(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    r0 = (u32)rd8((u32)param_1 + 0x8cu);
    wr32((u32)param_1 + 0x28u, 1u);
    c0lt = (s32)r0 < 3;
    if (r0 != 3u) {
        if (!c0lt) {
            return;
        }
        if (r0 != 0u) {
            return;
        }
    }
    wr8((u32)param_1 + 0x8cu, 1u);
    return;
}
