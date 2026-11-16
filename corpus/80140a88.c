#include "tc_rt.h"

u32 fn_80140a88(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x120u);
    if (r0 == 0u || r0 == 2u) {
        wr32((u32)param_1 + 0x120u, 2u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x1067u;
        (void)tc_call(0x8010a74cu, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
