#include "tc_rt.h"

void fn_8028dee0(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    f1 = tc_callf(0x80297d20u, &a);
    wr32(0x8053d578u, rd32((u32)param_1 + 0x18u));
    wr32(0x8053d580u, rd32((u32)param_1 + 0x14u));
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 0x8028ed08u;
    a.r[2] = 0x8028ed98u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80297758u, &a);
    return;
}
