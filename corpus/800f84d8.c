#include "tc_rt.h"

void fn_800f84d8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r0 = rd32(param_1);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_2;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r0) + 0x14u), &a);
        r4 = tc_lastr4();
    }
    wr32(param_1, param_2);
    a.r[0] = param_2;
    a.r[1] = r4;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_2) + 0xcu), &a);
    return;
}
