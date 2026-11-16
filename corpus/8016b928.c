#include "tc_rt.h"

void fn_8016b928(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800b32f4u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_2;
        (void)tc_call(0x800b3344u, &a);
        a.r[0] = (u32)param_2;
        a.r[1] = 0x1au;
        (void)tc_call(0x800b31a0u, &a);
    } else {
        if ((s32)rd32((u32)param_2 + 0xf00u) >= 60) {
            a.r[0] = (u32)param_2;
            a.r[1] = rd32((u32)param_2 + 0xed0u);
            (void)tc_call(0x800b31a0u, &a);
        }
    }
    return;
}
