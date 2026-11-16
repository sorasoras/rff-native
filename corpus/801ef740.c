#include "tc_rt.h"

u32 fn_801ef740(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32(0x80571140u);
    if (r0 == 0u) {
        return 1u;
    }
    a.r[0] = r0;
    a.r[1] = 0u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = 0u;
        (void)tc_call(0x801ed110u, &a);
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = (u32)param_1;
        (void)tc_call(0x801ec6bcu, &a);
    }
    return 1u;
}
