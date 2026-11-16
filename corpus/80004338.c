#include "tc_rt.h"

void fn_80004338(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    if (param_2 >= param_1) {
        r4 = param_2 - 1u;
        r6 = param_1 - 1u;
        r5 = (u32)param_3 + 1u;
        for (;;) {
            r5 = r5 - 1u;
            if (r5 == 0u) break;
            r4 = r4 + 1u;
            wr8(r6 + 1u, rd8(r4));
            r6 = r6 + 1u;
        }
        return;
    }
    r4 = param_2 + (u32)param_3;
    r6 = param_1 + (u32)param_3;
    r5 = (u32)param_3 + 1u;
    for (;;) {
        r5 = r5 - 1u;
        if (r5 == 0u) break;
        r4 = r4 - 1u;
        wr8(r6 - 1u, rd8(r4));
        r6 = r6 - 1u;
    }
    return;
}
