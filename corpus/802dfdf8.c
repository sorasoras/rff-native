#include "tc_rt.h"

void fn_802dfdf8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    for (;;) {
        a.r[0] = 0x805480f0u;
        r3 = tc_call(0x8022d77cu, &a);
        if (r3 != 0u) {
            a.r[0] = r30;
            f1 = tc_callf(0x8022c2d8u, &a);
            r0 = 1u;
            break;
        }
        a.r[0] = 0x80571d08u;
        (void)tc_call(0x8022ffe4u, &a);
        if ((u32)rd8(param_1 + 0x6fu) != 0u) {
            a.r[0] = r30;
            f1 = tc_callf(0x8022c2d8u, &a);
            r0 = 0u;
            break;
        }
    }
    if (r0 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802df9fcu, &a);
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = r3;
        a.r[0] = 0x805480f0u;
        (void)tc_call(0x8022d648u, &a);
        a.r[0] = 0x80571d08u;
        (void)tc_call(0x802300d0u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
