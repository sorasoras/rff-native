#include "tc_rt.h"

void fn_80271f08(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_3;
    r30 = 0u;
    for (;;) {
        a.r[0] = param_3;
        r3 = tc_call(0x802550d4u, &a);
        if (r30 > r3) break;
        r0 = (u32)(s8)rd8(r31);
        if (r0 == 0x2fu) {
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = r30;
            (void)tc_call(0x8025bdf4u, &a);
            r4 = r30 + param_3;
            r0 = (u32)rd8(r4 + 1u);
            wr8(param_1 + r30, 0u);
            r0 = (u32)(s8)r0;
            if (r0 == 0u) {
                wr8(param_2, 0u);
                return;
            }
            r4 = r4 + 1u;
            a.r[0] = param_2;
            a.r[1] = r4;
            (void)tc_call(0x8025bd34u, &a);
            return;
        }
        if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = r30;
            (void)tc_call(0x8025bdf4u, &a);
            wr8(param_1 + r30, 0u);
            wr8(param_2, 0u);
            return;
        }
        r30 = r30 + 1u;
        r31 = r31 + 1u;
    }
    return;
}
