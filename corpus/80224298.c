#include "tc_rt.h"

void fn_80224298(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    r0 = (u32)rd8((u32)param_1 + 0x371u);
    c0lt = (s32)r0 < 3;
    if (r0 != 3u) {
        if (c0lt) {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                return;
            }
            if (!c0lt) {
                wr8((u32)param_1 + 0x371u, 5u);
                return;
            }
            return;
        }
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            return;
        }
        if (!c0lt) {
            return;
        }
        wr8((u32)param_1 + 0x371u, 5u);
        return;
    }
    return;
}
