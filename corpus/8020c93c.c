#include "tc_rt.h"

void fn_8020c93c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = 0u;
    do {
        a.r[0] = param_1 + 0x10u;
        a.r[1] = rd32(param_1);
        a.r[2] = r29;
        r3 = tc_call(0x8020bbacu, &a);
        if (r3 == 0u) break;
        a.r[0] = param_1 + 0x10u;
        a.r[1] = rd32(param_1);
        a.r[2] = r29;
        r3 = tc_call(0x8020bc98u, &a);
        if ((s32)r3 > -1 && param_2 >= (s32)r3) {
            r3 = rd32(param_1 + 0xcu);
            r4 = ((r29 & 0x20u) != 0u) ? 0u : (1u << (r29 & 0x1fu));
            if ((r4 & r3) == 0u) {
                r0 = r3 | r4;
                r4 = rd32(param_1);
                wr32(param_1 + 0xcu, r0);
                a.r[0] = param_1 + 0x10u;
                a.r[1] = r4;
                a.r[2] = r29;
                r3 = tc_call(0x8020bc2cu, &a);
                if (r3 != 0xffffffffu) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r3;
                    (void)tc_call(0x8010a75cu, &a);
                }
            }
        }
        r29 = r29 + 1u;
    } while ((s32)r29 < 20);
    return;
}
