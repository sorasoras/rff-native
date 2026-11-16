#include "tc_rt.h"

void fn_80143004(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + ((rd32((u32)param_1 + 4u) << 2u) & 0xfffffffcu) + 8u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3 + 4u) + 0xcu), &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80143520u, &a);
    }
    return;
}
