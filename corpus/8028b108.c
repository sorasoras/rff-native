#include "tc_rt.h"

void fn_8028b108(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = param_2;
    r3 = tc_call(0x8028b77cu, &a);
    r28 = r3;
    r30 = 0u;
    if ((s32)param_2 <= 0) {
        r29 = 1u;
    }
    r31 = r29 & (u32)((s32)((0u - param_3) | param_3) >> 31);
    (void)tc_call(0x8028b7a8u, &a);
    r4 = 0x7fffffffu;
    r3 = rd32(0x805398e4u) - rd32(0x805398e0u);
    if ((s32)(0x7fffffffu - r3) > (s32)r29) {
        r4 = r29 + r3;
    }
    c0lt = (s32)param_1 < 1;
    if (param_1 == 1u) {
        r3 = ((r28 << 2u) & 0x3fcu) - 0x7fabef58u;
        wr32(r3 - 0x7740u, r31);
        wr32(r3 - 0x7760u, r4);
    } else if (!c0lt) {
        r30 = 1u;
    } else if ((s32)param_1 >= 0) {
        r3 = ((r28 << 2u) & 0x3fcu) - 0x7fabef58u;
        wr32(r3 - 0x7780u, r31);
        wr32(r3 - 0x77a0u, r4);
    } else {
        r30 = 1u;
    }
    if (r30 == 0u && (s32)r29 > 0) {
        r4 = rd32(0x805398e4u);
        if (r4 != 0u) {
            r0 = rd32(0x805398e0u);
            if ((s32)r29 >= (s32)r0 || (s32)r0 <= 0) {
                (void)tc_call(0x8028b784u, &a);
                return;
            }
        }
        wr32(0x805398e4u, r29 + (r4 - rd32(0x805398e0u)));
        wr32(0x805398e0u, r29);
    }
    (void)tc_call(0x8028b784u, &a);
    return;
}
