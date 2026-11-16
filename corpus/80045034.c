#include "tc_rt.h"

void fn_80045034(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r0 = rd32((u32)param_1 + 0x194u);
        c0lt = (s32)r0 < 1;
        if (r0 != 1u) {
            if (c0lt) {
                if ((s32)r0 >= 0) {
                    a.r[0] = 0x8003fd98u;
                    (void)tc_call(0x8003e11cu, &a);
                    wr32(0x803c1c90u, (u32)param_1);
                    return;
                }
                wr32(0x803c1c90u, (u32)param_1);
                return;
            }
            if ((s32)r0 >= 3) {
                wr32(0x803c1c90u, (u32)param_1);
                return;
            }
            a.r[0] = 0x8003fe98u;
            (void)tc_call(0x8003e11cu, &a);
            wr32(0x803c1c90u, (u32)param_1);
            return;
        }
        a.r[0] = 0x8003fe18u;
        (void)tc_call(0x8003e11cu, &a);
    } else {
        a.r[0] = 0u;
        (void)tc_call(0x8003e11cu, &a);
    }
    wr32(0x803c1c90u, (u32)param_1);
    return;
}
