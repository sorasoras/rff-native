#include "tc_rt.h"

u32 fn_8030e9d4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(param_1);
    if (r6 == 0u) {
        r3 = 0u;
    } else {
        r5 = rd32(param_1 + 4u);
        if (r5 == 0u) {
            r3 = 0u;
        } else {
            if ((s32)param_2 < 0) {
                r3 = 0u;
            } else {
                if (param_2 >= rd32(r6 + 8u)) {
                    r3 = 0u;
                } else {
                    r3 = r6 + (param_2 * 0xcu);
                    r4 = rd32(r3 + 0x10u);
                    wr32(0x817fdff8u, rd32(r3 + 0xcu));
                    a.r[0] = (u32)rd8(0x817fdff8u);
                    a.r[1] = r4;
                    a.r[2] = r5;
                    r3 = tc_call(0x8030e93cu, &a);
                }
            }
        }
    }
    return r3;
}
