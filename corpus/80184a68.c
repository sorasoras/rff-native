#include "tc_rt.h"

void fn_80184a68(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_3 + 0x3ecu);
    if (param_2 >= 0) {
        r7 = rd32((u32)param_3 + 0x3e8u);
        if (r7 != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x801844fcu, &a);
        } else {
            if ((u32)param_2 != r6) {
                a.r[0] = param_1;
                a.r[1] = r6;
                (void)tc_call(0x80184460u, &a);
            } else {
                if (rd32((u32)param_3 + 0x3f8u) != r7) {
                    a.r[0] = param_1;
                    a.r[1] = r6;
                    (void)tc_call(0x80184460u, &a);
                    r0 = rd32((u32)param_3 + 0x3ecu);
                    wr32((u32)param_3 + 0x3f8u, rd32((u32)param_3 + 0x3e8u));
                    wr32((u32)param_3 + 0x3fcu, r0);
                }
            }
        }
    }
    return;
}
