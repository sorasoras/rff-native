#include "tc_rt.h"

void fn_802892a4(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_3;
    (void)param_4;
    (void)tc_call(0x80289ba4u, &a);
    (void)tc_call(0x80289ba4u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x80287bc4u, &a);
    r30 = r3;
    if (r3 == 0u) {
        r30 = 0x8050fdc0u;
        a.r[0] = 0x8050fe00u;
        a.r[1] = param_1;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 != 0u) {
            (void)tc_call(0x80289ba4u, &a);
            (void)tc_call(0x80289ba4u, &a);
            return;
        }
    }
    c0lt = param_2 < 1;
    if ((u32)param_2 != 1u) {
        if (!c0lt) {
            if (param_2 < 3) {
                wr8(r30 + 0x59u, 9u);
            }
        } else if (param_2 >= 0) {
            wr8(r30 + 0x59u, 8u);
        }
    }
    (void)tc_call(0x80289ba4u, &a);
    return;
}
