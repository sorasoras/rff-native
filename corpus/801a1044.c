#include "tc_rt.h"

void fn_801a1044(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 != 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0u;
        (void)tc_call(0x8010a914u, &a);
        a.r[0] = 0x804b9e80u;
        a.r[1] = 1u;
        (void)tc_call(0x801207fcu, &a);
    } else {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        (void)tc_call(0x8010a914u, &a);
        a.r[0] = 0x804b9e80u;
        a.r[1] = 0u;
        (void)tc_call(0x801207fcu, &a);
    }
    return;
}
