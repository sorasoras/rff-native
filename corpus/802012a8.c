#include "tc_rt.h"

u32 fn_802012a8(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x2cu);
    r3 = rd32((u32)param_1 + 0x94u);
    if (r0 == 0u) {
        r31 = 0u;
    } else {
        r31 = 0u;
        if (r3 != 0u) {
            a.r[0] = r0;
            r3 = tc_call(0x80201bb8u, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
    }
    r3 = rd32((u32)param_1 + 0x30u);
    if (r3 == 0u) {
        r31 = 0u;
    } else {
        c0eq = r31 == 0u;
        r31 = 0u;
        if (!c0eq) {
            a.r[0] = r3;
            r3 = tc_call(0x80202a0cu, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
    }
    return r31;
}
