#include "tc_rt.h"

u32 fn_8008441c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x80u;
    a.r[3] = 0x804890c8u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x34u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = 0x80u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x44u), &a);
        wrf32d(param_3, f1);
        r3 = 1u;
    }
    return r3;
}
