#include "tc_rt.h"

void fn_8008d300(u32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    r0 = (u32)rd8(param_1);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (c0lt) {
            if ((s32)r0 >= 1) {
                wr8(param_1, 2u);
                return;
            }
            return;
        }
        if ((s32)r0 >= 4) {
            return;
        }
        wr8(param_1, 4u);
        return;
    }
    return;
}
