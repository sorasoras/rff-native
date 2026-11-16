#include "tc_rt.h"

void fn_80182cbc(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x188u);
    if (r0 != 0u) {
        a.r[0] = r0;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            if ((u32)param_2 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x188u);
                (void)tc_call(0x80157e6cu, &a);
                wr32((u32)param_1 + 0x188u, 0u);
            } else {
                a.r[0] = rd32((u32)param_1 + 0x188u);
                (void)tc_call(0x80157f30u, &a);
                wr32((u32)param_1 + 0x188u, 0u);
            }
        }
    }
    return;
}
