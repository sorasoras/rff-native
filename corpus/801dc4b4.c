#include "tc_rt.h"

void fn_801dc4b4(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_1 >= 0) {
        if ((u32)param_2 != 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = (u32)param_1;
            a.r[2] = (u32)param_2;
            (void)tc_call(0x8010a794u, &a);
            return;
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8010a75cu, &a);
        return;
    }
    return;
}
