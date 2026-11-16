#include "tc_rt.h"

void fn_801b93ec(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    r3 = rd32((u32)param_1 + ((rd32((u32)param_2 + 0x3ecu) << 2u) & 0xfffffffcu) + 0x1e8u);
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    return;
}
