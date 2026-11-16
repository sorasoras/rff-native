#include "tc_rt.h"

void fn_80188438(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x54cu;
    a.r[1] = param_2;
    a.r[2] = 0xc8u;
    a.r[3] = 0x804890c8u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1 + 0x54cu) + 0x34u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0x15u;
        a.r[3] = 0x804890c8u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x801882f4u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x15u;
            a.r[3] = 0x804890c8u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
        }
    }
    return;
}
