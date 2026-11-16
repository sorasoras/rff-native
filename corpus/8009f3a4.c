#include "tc_rt.h"

void fn_8009f3a4(s32 param_1, u32 param_2)
{
    u32 c0gt = 0, c0lt = 0, r0 = 0, r3 = 0, r29 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        do {
            r0 = rd32((u32)param_1 + 0x58u);
            r29 = 0u;
            c0lt = (s32)r0 < 3;
            if (r0 == 3u) {
                a.r[0] = (u32)param_1;
                a.r[1] = param_2;
                r3 = tc_call(0x8009ec18u, &a);
                if ((u32)(s8)r3 == 0u) {
                    wr32((u32)param_1 + 0x58u, 4u);
                    r29 = 1u;
                }
            } else if (!c0lt) {
                c0lt = (s32)r0 < 5;
                if (r0 != 5u && c0lt) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    r3 = tc_call(0x8009ec18u, &a);
                    if ((u32)(s8)r3 == 0u) {
                        r29 = 1u;
                    }
                }
            } else if ((s32)r0 >= 2) {
                r0 = rd32((u32)param_1 + 0x60u);
                if (r0 == 0u) {
                    wr32((u32)param_1 + 0x58u, 4u);
                    r29 = 1u;
                } else {
                    c0gt = r0 > param_2;
                    if (!c0gt) {
                        if (c0gt) {
                            wr32((u32)param_1 + 0x58u, 4u);
                            r29 = 1u;
                        }
                        wr32((u32)param_1 + 0x60u, 0u);
                    } else {
                        r0 = r0 - param_2;
                        wr32((u32)param_1 + 0x60u, r0);
                    }
                }
            }
        } while (rd32((u32)param_1 + 0x58u) != 1u && r29 != 0u);
    }
    return;
}
