#include "tc_rt.h"

void fn_800eeec0(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x1cu;
    f1 = tc_callf(0x800f737cu, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0x20u) + 8u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x20u) + 0x10u), &a);
    }
    return;
}
