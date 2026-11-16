#include "tc_rt.h"

void fn_8004ee88(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        r3 = tc_call(0x802fce20u, &a);
        a.r[0] = r3;
        a.r[1] = param_1;
        r3 = tc_call(0x802fceb8u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802fc528u, &a);
    } else {
        if ((u32)param_2 == 0xffffffffu) {
            r3 = tc_call(0x802fce20u, &a);
            a.r[0] = r3;
            a.r[1] = param_1;
            r3 = tc_call(0x802fceb8u, &a);
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802fc5e8u, &a);
        }
    }
    return;
}
