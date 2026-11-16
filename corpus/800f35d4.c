#include "tc_rt.h"

void fn_800f35d4(s32 param_1)
{
    u32 r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x8006454cu, &a);
    r4 = tc_lastr4();
    if (rd32((u32)param_1 + 0x1b8u) != 0u) {
        a.r[0] = (u32)param_1 + 0x148u;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x148u) + 0x10u), &a);
    }
    return;
}
