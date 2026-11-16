#include "tc_rt.h"

void fn_8014305c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x15u;
    f1 = tc_callf(0x80141274u, &a);
    r3 = rd32((u32)param_1 + ((rd32((u32)param_1 + 4u) << 2u) & 0xfffffffcu) + 8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 4u) + 0x10u), &a);
    return;
}
