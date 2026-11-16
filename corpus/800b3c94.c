#include "tc_rt.h"

void fn_800b3c94(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xda4u) != 0u) {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x800b3190u, &a);
        r3 = rd32((u32)param_1 + 0xda4u);
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
    }
    return;
}
