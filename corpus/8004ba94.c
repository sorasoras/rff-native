#include "tc_rt.h"

void fn_8004ba94(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r4 = (u32)(s16)rd16(param_1 + 0x24u);
        if ((s32)r4 > 0) {
            r4 = r4 - 1u;
            wr16(param_1 + 0x24u, (u16)r4);
            if ((s32)(s16)r4 <= 0) {
                if (((u32)rd16(param_1 + 0x26u) & 1u) == 0u) {
                    a.r[0] = rd32(param_1);
                    a.r[1] = param_1 + 0x10u;
                    (void)tc_call(0x8004ba74u, &a);
                }
                r3 = rd32(param_1 + 0x28u);
                if (r3 != 0u) {
                    wr32(r3 + 0x2cu, rd32(param_1 + 0x2cu));
                } else {
                    wr32(0x803c62d0u, rd32(param_1 + 0x2cu));
                }
                r3 = rd32(param_1 + 0x2cu);
                if (r3 != 0u) {
                    wr32(r3 + 0x28u, rd32(param_1 + 0x28u));
                } else {
                    wr32(0x803c62d4u, rd32(param_1 + 0x28u));
                }
                a.r[0] = rd32(0x803c62c8u);
                a.r[1] = param_1;
                (void)tc_call(0x8003b3a4u, &a);
                wr32(0x803c62e4u, rd32(0x803c62e4u) - 1u);
            }
        }
    }
    return;
}
