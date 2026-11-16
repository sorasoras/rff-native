#include "tc_rt.h"

s32 fn_802fea94(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r3 = (u32)param_1 + 0x49cu;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8030ab94u, &a);
        }
        a.r[0] = (u32)param_1 + 0x100u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x802fd324u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
