#include "tc_rt.h"

void fn_8027231c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x802550d4u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80570c48u;
        (void)tc_call(0x8025bd34u, &a);
    } else {
        if ((u32)rd8(param_2) == 0x2fu) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
        if (r0 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x8038f580u;
            a.r[2] = param_2;
            (void)tc_call(0x80271fdcu, &a);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            (void)tc_call(0x8025bd34u, &a);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802550d4u, &a);
            if (r3 != 0u) {
                r4 = r3 + (u32)param_1;
                if ((u32)rd8(r4 - 1u) == 0x2fu && (r3 - 1u) != 0u) {
                    wr8(r4 - 1u, 0u);
                }
            }
        }
    }
    return;
}
