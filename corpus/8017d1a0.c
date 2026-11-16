#include "tc_rt.h"

void fn_8017d1a0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while (rd32((u32)param_1 + 0x78u) != 0u) {
        a.r[0] = (u32)param_1 + 0x70u;
        r3 = tc_call(0x8007b09cu, &a);
        r31 = r3;
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        f1 = tc_callf(0x8017d248u, &a);
        a.r[0] = r31;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r31) + 0x18u), &a);
    }
    return;
}
