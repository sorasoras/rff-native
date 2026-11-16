#include "tc_rt.h"

void fn_800d9818(s32 param_1, u32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 8u);
    if (r31 != 0u) {
        a.r[0] = r31 + 0x10u;
        a.r[1] = param_2;
        (void)tc_call(0x802de984u, &a);
        a.r[0] = r31 + 4u;
        a.r[1] = param_2;
        (void)tc_call(0x802de7f4u, &a);
    }
    return;
}
