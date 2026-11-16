#include "tc_rt.h"

void fn_80041024(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802550d4u, &a);
    f1 = tc_lastf();
    if (r3 > 0x24u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80335be8u;
        a.r[1] = 0x73u;
        a.r[2] = 0x80335bf4u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802285e4u, &a);
    }
    a.r[0] = 0x8034f81du;
    a.r[1] = param_1;
    (void)tc_call(0x8025bd34u, &a);
    wr32(0x8034f808u, 1u);
    wr32(0x8034f800u, param_2);
    wr32(0x8034f804u, 0u);
    return;
}
