#include "tc_rt.h"

void fn_8015719c(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x20u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = (u32)param_1;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0) + 0x10u), &a);
    }
    wr32((u32)param_1 + 0x20u, 0u);
    wr32((u32)param_1 + 0x24u, 0u);
    wr32((u32)param_1 + 0x54u, 0u);
    return;
}
