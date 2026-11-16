#include "tc_rt.h"

void fn_80042f44(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    if ((s32)param_1 >= 0) {
        if (param_1 >= 4u) {
            return;
        }
        r5 = (param_1 * 0x954u) - 0x7fc40918u;
        if (rd32(r5 + 0x950u) != (u32)param_2) {
            wr32(r5 + 0x950u, (u32)param_2);
            a.r[0] = param_1;
            r3 = tc_call(0x80042f0cu, &a);
            if (r3 != 0u) {
                if ((u32)param_2 != 0u) {
                    a.r[0] = param_1;
                    (void)tc_call(0x802bb118u, &a);
                } else {
                    a.r[0] = param_1;
                    (void)tc_call(0x802bb0fcu, &a);
                }
            }
        }
    }
    return;
}
