#include "tc_rt.h"

void fn_80271e34(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_2) != 0x2fu || (u32)(s8)rd8(param_2 + 1u) != 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x802550d4u, &a);
        r31 = r3 - 1u;
        r3 = param_2 + r31;
        ctr = r31 + 1u;
        if ((s32)r31 >= 0) {
            while ((u32)rd8(r3) != 0x2fu) {
                r31 = r31 - 1u;
                r3 = r3 - 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    return;
                }
            }
            if (r31 == 0u) {
                wr8(param_1, 0x2fu);
                wr8(param_1 + 1u, 0u);
            } else {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = r31;
                (void)tc_call(0x8025bdf4u, &a);
                wr8(param_1 + r31, 0u);
            }
        }
    } else {
        wr8(param_1, 0x2fu);
        wr8(param_1 + 1u, 0u);
    }
    return;
}
