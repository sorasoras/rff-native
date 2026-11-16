#include "tc_rt.h"

u32 fn_8015fdb4(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x80148db4u, &a);
    r3 = rd32((u32)param_1 + 0x11cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        a.r[2] = 5u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
    }
    return 0u;
}
