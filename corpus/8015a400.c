#include "tc_rt.h"

void fn_8015a400(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd16((u32)param_1 + 0x83cu) != 0u) {
        r3 = (u32)param_1 + 0x83cu;
    } else {
        a.r[0] = param_2;
        r3 = tc_call(0x800a4050u, &a);
    }
    if ((u32)param_3 == 1u) {
        a.r[0] = (u32)param_1 + 0x7fcu;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x7bcu;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
    }
    wr16((u32)param_1 + 0x83cu, 0u);
    return;
}
