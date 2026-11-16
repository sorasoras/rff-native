#include "tc_rt.h"

void fn_8012bf3c(s32 param_1)
{
    TcArgs a = {0};
    if ((s32)rd32((u32)param_1 + 0x7ecu) > 0) {
        a.r[0] = rd32((u32)param_1 + 0x54u);
        (void)tc_call(0x8012c704u, &a);
        a.r[0] = rd32((u32)param_1 + 0x58u);
        (void)tc_call(0x8012cfa4u, &a);
        a.r[0] = (u32)param_1 + 0x98u;
        (void)tc_call(0x8011a00cu, &a);
    }
    a.r[0] = (u32)param_1 + 0x4a0u;
    (void)tc_call(0x8014b350u, &a);
    a.r[0] = (u32)param_1 + 0x61cu;
    (void)tc_call(0x801911f4u, &a);
    a.r[0] = (u32)param_1 + 0x7f4u;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x82cu;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x864u;
    (void)tc_call(0x8020f078u, &a);
    return;
}
