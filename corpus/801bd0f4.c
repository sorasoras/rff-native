#include "tc_rt.h"

u32 fn_801bd0f4(s32 param_1)
{
    u32 c0eq = 0, ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r3 = (u32)param_1;
    r5 = 0u;
    if (rd32((u32)param_1 + 0x38u) != 0u) {
        r5 = 1u;
    }
    r6 = 0u;
    ctr = 2u;
    do {
        r4 = 0u;
        if (r5 != 0u && rd32(r3 + 0x330u) != 0u) {
            r4 = 1u;
        }
        c0eq = r4 == 0u;
        r4 = 0u;
        if (!c0eq && rd32(r3 + 0x398u) != 0u) {
            r4 = 1u;
        }
        c0eq = r4 == 0u;
        r4 = 0u;
        if (!c0eq && rd32(r3 + 0x400u) != 0u) {
            r4 = 1u;
        }
        c0eq = r4 == 0u;
        r4 = 0u;
        if (!c0eq && rd32(r3 + 0x468u) != 0u) {
            r4 = 1u;
        }
        c0eq = r4 == 0u;
        r4 = 0u;
        if (!c0eq && rd32(r3 + 0x4d0u) != 0u) {
            r4 = 1u;
        }
        r5 = r4;
        r3 = r3 + 0x208u;
        r6 = r6 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return r4;
}
