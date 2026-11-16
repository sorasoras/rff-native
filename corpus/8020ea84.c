#include "tc_rt.h"

u32 fn_8020ea84(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 342;
    if ((u32)param_2 == 0x156u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8020ecc0u, &a);
    } else if (!c0lt) {
        if ((u32)param_2 != 0x17au) {
            r3 = 2u;
            return r3;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(param_3);
        a.r[2] = rd32(param_3 + 4u);
        a.r[3] = rd32(param_3 + 8u);
        a.r[4] = 1u;
        r3 = tc_call(0x8020eb98u, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x170u, 1u);
        }
    } else {
        c0lt = param_2 < 340;
        if ((u32)param_2 == 0x154u) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(param_3);
            a.r[2] = rd32(param_3 + 4u);
            a.r[3] = rd32(param_3 + 8u);
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x8020eb98u, &a);
            if (r3 != 0u) {
                wr32((u32)param_1 + 0x170u, 1u);
            }
        } else {
            if (c0lt) {
                r3 = 2u;
                return r3;
            }
            if (rd32((u32)param_1 + 0x170u) != 0u) {
                r3 = 1u;
                return r3;
            }
        }
    }
    r3 = 0u;
    return r3;
}
