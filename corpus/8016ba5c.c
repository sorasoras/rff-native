#include "tc_rt.h"

void fn_8016ba5c(u32 param_1, s32 param_2)
{
    u32 r5 = 0;
    TcArgs a = {0};
    (void)param_1;
    r5 = rd32((u32)param_2 + 0xeccu);
    if (r5 != 0xffffffffu && (s32)rd32((u32)param_2 + 0xf00u) >= 120) {
        a.r[0] = (u32)param_2;
        a.r[1] = r5;
        (void)tc_call(0x800b31a0u, &a);
        return;
    }
    if ((rd32((u32)param_2 + 0xe88u) & 0x40u) != 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = 0x17u;
        (void)tc_call(0x800b31a0u, &a);
        return;
    }
    return;
}
