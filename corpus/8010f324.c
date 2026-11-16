#include "tc_rt.h"

u32 fn_8010f324(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    if (param_2 < 0 || param_2 >= 33) {
        r3 = 0u;
    } else {
        if (param_3 < 0 || param_3 >= 744) {
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_2;
            a.r[1] = (u32)param_3;
            r3 = tc_call(0x800a75a0u, &a);
            if ((s32)r3 > 0) {
                return r3;
            }
            a.r[0] = (u32)param_2;
            a.r[1] = (u32)param_3;
            r3 = tc_call(0x8010eef4u, &a);
            r3 = r3 & (u32)((s32)((0u - r3) & ~r3) >> 31);
        }
    }
    return r3;
}
