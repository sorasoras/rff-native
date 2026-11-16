#include "tc_rt.h"

void fn_801cc8c8(u32 param_1)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x8007f7e4u, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 1u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x18cu), &a);
    a.r[0] = param_1;
    (void)tc_call(0x801cf8e8u, &a);
    wr32(0x8057118cu, rd32(0x8057118cu) | 0x2000u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801cf7b0u, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801ce724u, &a);
    a.r[0] = param_1;
    a.r[1] = 3u;
    (void)tc_call(0x801ce724u, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 8u;
    a.r[3] = 1u;
    (void)tc_call(0x801ce348u, &a);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 8u;
    a.r[3] = 1u;
    (void)tc_call(0x801ce348u, &a);
    r31 = 2u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = 5u;
        a.r[3] = 1u;
        (void)tc_call(0x801ce368u, &a);
        r31 = r31 + 1u;
    } while (r31 < 0xau);
    wrf32d(param_1 + 0xd14u, (f64)rdf32(0x80575ea8u));
    return;
}
