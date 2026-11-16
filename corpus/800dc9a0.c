#include "tc_rt.h"

void fn_800dc9a0(f64 param_1, s32 param_2)
{
    u32 r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 8u);
    while (r31 != 0u) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = param_1;
        (void)tc_call(rd32(rd32(r31 + 4u) + 0x18u), &a);
        r4 = tc_lastr4();
        r31 = rd32(r31);
    }
    return;
}
