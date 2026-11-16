#include "tc_rt.h"

void fn_801e5d74(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r29 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(0x804dcaf8u);
    while (r31 != 0x804dcaf8u) {
        r0 = r31;
        r29 = r31;
        r31 = rd32(r31);
        wr32(0x817fdfdcu, r0);
        a.r[0] = 0x804dcaf4u;
        a.r[1] = 0x817fdfdcu;
        f1 = tc_callf(0x802deab0u, &a);
        r3 = tc_lastr();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        if (r29 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803759f4u;
            a.r[1] = 0x23du;
            a.r[2] = 0x803759d0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        }
        r29 = r29 - 0x10u;
        if (r29 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80375a24u;
            a.r[1] = 0x193u;
            a.r[2] = 0x80375a00u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x802e41c0u, &a);
            f1 = tc_lastf();
        }
        if (r29 != 0u) {
            a.r[0] = r29;
            r3 = tc_call(0x801e5f10u, &a);
            f1 = tc_lastf();
        }
    }
    r29 = rd32(0x804dcb10u);
    while (r29 != 0x804dcb10u) {
        r0 = r29;
        r31 = r29;
        r29 = rd32(r29);
        wr32(0x817fdfd8u, r0);
        a.r[0] = 0x804dcb0cu;
        a.r[1] = 0x817fdfd8u;
        f1 = tc_callf(0x802deab0u, &a);
        r3 = tc_lastr();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80375994u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80375970u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        }
        r31 = r31 - 0x18u;
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803759c4u;
            a.r[1] = 0x193u;
            a.r[2] = 0x803759a0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x802e41c0u, &a);
            f1 = tc_lastf();
        }
        if (r31 != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x801e5f10u, &a);
            f1 = tc_lastf();
        }
    }
    if (rd32(0x805713b8u) != 0u) {
        a.r[0] = 1u;
        f1 = tc_callf(0x80050c04u, &a);
        r3 = tc_lastr();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[3] = tc_junkr(6u);
        a.r[4] = tc_junkr(7u);
        a.r[5] = tc_junkr(8u);
        a.r[6] = tc_junkr(9u);
        a.r[7] = tc_junkr(0xau);
        r3 = tc_call(0x801e5998u, &a);
        f1 = tc_lastf();
        wr32(0x805713b8u, 0u);
    }
    return;
}
