#include "tc_rt.h"

u32 fn_8012c2ec(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = 0u;
    if (rd32((u32)param_1 + 0x7f0u) != 0u) {
        r4 = 1u;
    }
    r3 = rd32((u32)param_1 + 0x54u);
    if (r3 == 0u) {
        r31 = 0u;
    } else {
        r31 = 0u;
        if (r4 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8012c8c8u, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
    }
    r3 = rd32((u32)param_1 + 0x58u);
    if (r3 == 0u) {
        r31 = 0u;
    } else {
        c0eq = r31 == 0u;
        r31 = 0u;
        if (!c0eq) {
            a.r[0] = r3;
            r3 = tc_call(0x8012ccc0u, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
    }
    return r31;
}
