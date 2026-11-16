#include "tc_rt.h"

void fn_800439ac(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1c7cu) == 0u) {
        if (param_2 <= 0) {
            a.r[0] = param_1;
            (void)tc_call(0x80043a3cu, &a);
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x80043c20u, &a);
            if (r3 != 0u) {
                r0 = rd32(r3 + 0xf0u);
                if ((s32)r0 > 0) {
                    if ((s32)r0 >= param_2) {
                        return;
                    }
                    wr32(r3 + 0xf0u, (u32)param_2);
                } else {
                    wr32(r3 + 0xf0u, (u32)param_2);
                    a.r[0] = param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x8027a740u, &a);
                }
            }
        }
    }
    return;
}
