#include "tc_rt.h"

u32 fn_801b6100(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x28u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x801b6c1cu, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b5ff8u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}
