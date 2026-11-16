#include "tc_rt.h"

void fn_8009ace8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r5 = param_3;
    r6 = param_4;
    if (param_5 > 1u) {
        r0 = param_3 - (ppc_divwu(param_3, param_5) * param_5);
        r5 = param_3 - r0;
        r6 = param_4 + r0;
    }
    if (param_6 > 1u) {
        r0 = r6 - (ppc_divwu(r6, param_6) * param_6);
        if (r0 != 0u) {
            r0 = param_6 - r0;
            r6 = r6 + r0;
        }
    }
    wr32(param_1, r5);
    wr32(param_2, r6);
    return;
}
