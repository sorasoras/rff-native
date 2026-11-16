#include "tc_rt.h"

u32 fn_801b8974(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x28u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x801b9664u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b8870u, &a);
    wr32(rd32(0x80571398u) + 0x1c0u, rd32(rd32((u32)param_1 + 0x1cu) + 0x430u));
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
