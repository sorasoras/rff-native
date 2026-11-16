#include "tc_rt.h"

void fn_802006f0(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x34u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0x801617b8u;
        a.r[2] = 0x80122258u;
        a.r[3] = 0u;
        (void)tc_call(0x80255794u, &a);
        wr32((u32)param_1 + 0x34u, 0u);
    }
    (void)tc_call(0x801909d8u, &a);
    (void)tc_call(0x801e656cu, &a);
    return;
}
