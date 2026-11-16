#include "tc_rt.h"

u32 fn_80148e30(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 0x130u);
    r3 = tc_call(0x800dacf8u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 1u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0xd8u), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0xdcu), &a);
        a.r[0] = param_1;
        (void)tc_call(0x800da354u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
