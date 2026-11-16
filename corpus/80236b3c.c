#include "tc_rt.h"

void fn_80236b3c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r10 = tc_argr(7u), r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    if (rd32(0x805715c0u) == 0u) {
        wr32(0x804e5ef8u, param_1);
    } else {
        wr32(((rd32(0x805715c0u) - 1u) * 0x14u) - 0x7fb1a158u, param_1);
    }
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    r3 = tc_lastr();
    r10 = tc_junkr(0xau);
    if (param_1 == 0x10u) {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        r3 = tc_call(0x8023a598u, &a);
        f1 = tc_lastf();
    } else {
        if (param_1 == 0x20u) {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            r3 = tc_call(0x8023a598u, &a);
            f1 = tc_lastf();
        } else {
            if ((param_1 & 1u) != 0u) {
                wr32(0x805715d8u, 0u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0u;
                a.r[7] = r10;
                r3 = tc_call(0x8023cdc0u, &a);
                f1 = tc_lastf();
                r3 = tc_call(0x8022c2b0u, &a);
                f1 = tc_lastf();
                r31 = r3;
                if (rd32(0x805715c0u) >= 5u) {
                    wr32(0x805715c0u, 0u);
                }
                r0 = rd32(0x805715c0u);
                r3 = rd32(0x805715c0u);
                r6 = r0 * 0x14u;
                r0 = rd32(0x805715c0u);
                r3 = r3 * 0x14u;
                r6 = r6 - 0x7fb1a180u;
                wr32(r6 + 0x1cu, 1u);
                r3 = r3 - 0x7fb1a180u;
                r0 = r0 * 0x14u;
                wr32(r3 + 0x20u, 0x108u);
                wr32(r0 - 0x7fb1a15cu, 0x20u);
                r3 = tc_call(0x802302b4u, &a);
                f1 = tc_lastf();
                r5 = rd32(0x805715c0u) * 0x14u;
                wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
                wr32(r5 - 0x7fb1a154u, r3);
                a.r[0] = r31;
                f1 = tc_callf(0x8022c2d8u, &a);
                r3 = tc_lastr();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x804e5b40u;
                a.r[1] = 0x20u;
                a.r[2] = 0x108u;
                a.r[3] = 0x80236ff0u;
                a.r[4] = tc_junkr(7u);
                a.r[5] = tc_junkr(8u);
                a.r[6] = tc_junkr(9u);
                a.r[7] = tc_junkr(0xau);
                r3 = tc_call(0x8023c78cu, &a);
                f1 = tc_lastf();
            } else {
                a.r[0] = 0x27u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                f1 = tc_callf(0x80234fd0u, &a);
                r3 = tc_lastr();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x802357f4u;
                a.r[7] = tc_junkr(0xau);
                r3 = tc_call(0x8023bff4u, &a);
                f1 = tc_lastf();
            }
        }
    }
    return;
}
