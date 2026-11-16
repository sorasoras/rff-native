#include "tc_rt.h"

void fn_80143520(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + ((rd32((u32)param_1 + 4u) << 2u) & 0xfffffffcu) + 8u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3 + 4u) + 0x10u), &a);
    r3 = rd32(rd32((u32)param_1 + ((rd32((u32)param_1 + 4u) << 2u) & 0xfffffffcu) + 8u) + 8u);
    wr32((u32)param_1 + 4u, r3);
    r3 = (u32)param_1 + ((r3 << 2u) & 0xfffffffcu);
    r3 = rd32(r3 + 8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 4u) + 8u), &a);
    return;
}
