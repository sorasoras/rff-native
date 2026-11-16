#include "tc_rt.h"

u32 fn_800a2be4(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 1;
    if ((u32)param_2 == 1u) {
        if (rd32((u32)param_1 + 0x3318u) == (u32)param_3) {
            r3 = 1u;
            return r3;
        }
        wr32((u32)param_1 + 0x3318u, (u32)param_3);
    } else if (!c0lt) {
        if (param_2 < 3) {
            if (rd32((u32)param_1 + 0x331cu) == (u32)param_3) {
                r3 = 1u;
                return r3;
            }
            wr32((u32)param_1 + 0x331cu, (u32)param_3);
        }
    } else if (param_2 >= 0) {
        r3 = 1u;
        return r3;
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800a2d38u, &a);
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    r3 = tc_call(0x8009b980u, &a);
    if ((u32)(s8)r3 != 0u) {
        if ((u32)param_4 != 0u) {
            for (;;) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800a35f8u, &a);
                if (r3 != 0u) break;
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800a2d38u, &a);
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8009c634u, &a);
            }
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
