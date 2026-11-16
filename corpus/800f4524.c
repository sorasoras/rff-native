#include "tc_rt.h"

u32 fn_800f4524(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = 1u;
    r0 = rd32((u32)param_1 + 0x4cu);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return r5;
        }
        if ((s32)r0 < 0) {
            return r5;
        }
        a.r[0] = rd32((u32)param_1 + 0x44u);
        r3 = tc_call(0x8014ea80u, &a);
        if (r3 == 0u) {
            r5 = 0u;
            return r5;
        }
        r5 = 1u;
        wr32((u32)param_1 + 0x4cu, 1u);
    } else {
        if (rd32(rd32((u32)param_1 + 0x44u) + 0x124u) == 2u) {
            r5 = 0u;
            wr32((u32)param_1 + 0x4cu, 0u);
        }
    }
    return r5;
}
