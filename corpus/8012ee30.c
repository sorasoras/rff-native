#include "tc_rt.h"

void fn_8012ee30(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 8u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        (void)tc_call(0x801ed110u, &a);
        a.r[0] = rd32((u32)param_1 + 8u);
        a.r[1] = rd32((u32)param_1 + 4u);
        (void)tc_call(0x801ec6bcu, &a);
    }
    return;
}
