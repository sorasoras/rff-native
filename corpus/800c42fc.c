#include "tc_rt.h"

void fn_800c42fc(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572ea8u);
    wr32(param_1 + 0x290u, 0xbu);
    a.r[0] = param_1;
    a.r[1] = 0x52u;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
    if (rd32(param_1 + 0x900u) == 0u) {
        a.r[0] = param_1 + 0x890u;
        a.r[1] = 0x223u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804890c8u;
        a.r[4] = 1u;
        a.r[5] = 1u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1 + 0x890u) + 0x48u), &a);
        a.r[0] = param_1 + 0x890u;
        a.r[1] = param_1;
        a.r[2] = 0x15u;
        (void)tc_call(0x80070380u, &a);
    }
    return;
}
