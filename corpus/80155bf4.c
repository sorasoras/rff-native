#include "tc_rt.h"

u32 fn_80155bf4(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32(param_2);
    if ((s32)r0 < 0 || (s32)r0 >= 5) {
        r0 = 0u;
    } else {
        r0 = rd32(param_2 + 4u);
        if ((s32)r0 < 0 || (s32)r0 >= 9) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
    }
    if (r0 != 0u) {
        if (((u32)param_1 - 4u) <= 1u) {
            r3 = tc_call(0x8008242cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
        }
        for (;;) {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            r3 = tc_call(0x80155b00u, &a);
            if (r3 != 0u) {
                r3 = 1u;
                return r3;
            }
            r4 = rd32(param_2);
            if ((r4 & 1u) == 0u) {
                r0 = rd32(param_2 + 4u) - 1u;
                wr32(param_2 + 4u, r0);
                if ((s32)r0 < 0) {
                    r0 = r4 + 1u;
                    wr32(param_2 + 4u, 0u);
                    wr32(param_2, r0);
                    if ((s32)r0 >= 5) {
                        r0 = 0u;
                        if (r0 != 0u) continue;
                        break;
                    }
                }
            } else {
                r0 = rd32(param_2 + 4u) + 1u;
                wr32(param_2 + 4u, r0);
                if ((s32)r0 >= 9) {
                    r0 = r4 + 1u;
                    wr32(param_2 + 4u, 8u);
                    wr32(param_2, r0);
                    if ((s32)r0 >= 5) {
                        r0 = 0u;
                        if (r0 != 0u) continue;
                        break;
                    }
                }
            }
            r0 = 1u;
            if (r0 == 0u) break;
        }
        r3 = 0u;
    } else {
        r3 = 0u;
    }
    return r3;
}
