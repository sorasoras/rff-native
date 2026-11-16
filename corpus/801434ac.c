#include "tc_rt.h"

void fn_801434ac(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + ((rd32((u32)param_1 + 4u) << 2u) & 0xfffffffcu) + 8u);
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3 + 4u) + 0x10u), &a);
    wr32((u32)param_1 + 4u, (u32)param_2);
    r3 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 4u) + 8u), &a);
    return;
}
