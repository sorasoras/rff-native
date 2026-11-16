#include "tc_rt.h"

void fn_80237498(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_1 == 0x10u) {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        (void)tc_call(0x8023a598u, &a);
    } else {
        if (param_1 == 0x20u) {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        } else {
            if ((param_1 & 1u) != 0u) {
                r3 = tc_call(0x802302bcu, &a);
                wr32(0x8057162cu, tc_lastr4());
                wr32(0x80571628u, r3);
                wr32(0x80571634u, 0u);
                wr32(0x805715d4u, 0u);
                a.r[0] = 0x804e5c60u;
                (void)tc_call(0x8022671cu, &a);
                a.r[0] = 0x804e5c60u;
                a.r[1] = 0x10624dd3u;
                a.r[2] = 0u;
                a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                a.r[4] = 0x80237248u;
                (void)tc_call(0x8022697cu, &a);
            } else {
                a.r[0] = 0x27u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                f1 = tc_callf(0x80234fd0u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x802357f4u;
                a.r[7] = 0u;
                (void)tc_call(0x8023bff4u, &a);
            }
        }
    }
    return;
}
