#include "tc_rt.h"

void fn_800d3a7c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32((u32)param_1 + 0x72cu) << 5u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d50b8u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d5148u, &a);
            if (r3 != 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800d4fbcu, &a);
            } else {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800d5158u, &a);
                if (r3 != 0u) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800d503cu, &a);
                } else {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800d4ae8u, &a);
                }
            }
        }
    }
    return;
}
