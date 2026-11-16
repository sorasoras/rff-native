#include "tc_rt.h"

void fn_801e72c0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x270u);
    if (r0 != 0u) {
        if (r0 != 1u) {
            if (r0 != 2u) {
                if (r0 != 3u) {
                    if (r0 != 4u && r0 == 5u) {
                        a.r[0] = 0x804bc030u;
                        a.r[1] = 0xffffffffu;
                        (void)tc_call(0x801cadb0u, &a);
                        if (rd32(param_1 + 0xcf8u) != 0u) {
                            r4 = rd32(0x804863d8u);
                            wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xbfffffffu);
                            a.r[0] = param_1;
                            (void)tc_call(0x801e7e04u, &a);
                        }
                        if ((rd32(0x8057118cu) & 0x40u) != 0u) {
                            a.r[0] = 0x80486da8u;
                            (void)tc_call(0x800b872cu, &a);
                        }
                        wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) & 0xfbffffffu);
                    }
                } else {
                    a.r[0] = 0x804bc030u;
                    a.r[1] = 0xffffffffu;
                    (void)tc_call(0x801cadb0u, &a);
                    if (rd32(param_1 + 0xcf8u) != 0u) {
                        r4 = rd32(0x804863d8u);
                        wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xbfffffffu);
                        a.r[0] = param_1;
                        (void)tc_call(0x801e7e04u, &a);
                    }
                    if ((rd32(0x8057118cu) & 0x40u) != 0u) {
                        a.r[0] = 0x80486da8u;
                        (void)tc_call(0x800b872cu, &a);
                    }
                    wr32(param_1 + 0x270u, 4u);
                }
            } else {
                a.r[0] = param_1;
                r3 = tc_call(0x801e7900u, &a);
                r30 = r3;
                a.r[0] = param_1;
                (void)tc_call(0x801e80ecu, &a);
                if (r30 == 0u) {
                    a.r[0] = param_1;
                    (void)tc_call(0x801e7960u, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x801e8514u, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x801e8614u, &a);
                    a.r[0] = param_1;
                    f1 = tc_callf(0x801e7ac8u, &a);
                    wr32(param_1 + 0x270u, 3u);
                    a.r[0] = param_1;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0x1b4u), &a);
                }
            }
        } else if (rd32(0x805706d0u) == 7u) {
            a.r[0] = 0x80486da8u;
            f1 = tc_callf(0x800bce90u, &a);
            r4 = tc_lastr4();
            if ((rd32(0x8057118cu) & 0x40u) != 0u) {
                a.r[0] = 0x80486da8u;
                f1 = tc_callf(0x800b8754u, &a);
                r4 = tc_lastr4();
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x1a0u), &a);
            f1 = tc_lastf();
            if ((r3 + 0x10000u) == 0xffffu) {
                wr32(param_1 + 0x270u, 5u);
            } else {
                a.r[0] = param_1;
                a.r[1] = 0x804890c8u;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = (f64)rdf32(0x80576328u);
                f1 = tc_callf(rd32(rd32(param_1) + 0x24u), &a);
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = param_1 + 0xce8u;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = (f64)rdf32(param_1 + 0xcf4u);
                f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0x1a0u), &a);
                a.f[0] = (f64)rdf32(0x80576328u);
                a.r[0] = param_1;
                a.r[1] = r3;
                a.r[2] = 0u;
                (void)tc_call(0x800a94c0u, &a);
                a.r[0] = param_1;
                a.r[1] = 1u;
                (void)tc_call(0x801e7884u, &a);
                wr32(param_1 + 0x270u, 2u);
                a.r[0] = param_1;
                a.r[1] = 1u;
                f1 = tc_callf(0x801e8074u, &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0x1b0u), &a);
            }
            if (rd32(param_1 + 0xcf8u) != 0u) {
                a.f[0] = (f64)rdf32(0x80576338u);
                a.r[0] = 2u;
                a.r[1] = 6u;
                (void)tc_call(0x800523b0u, &a);
                wr32(0x805710d8u, 0u);
                r3 = rd32(0x804863d8u);
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x40000000u);
            }
        }
    } else {
        a.r[0] = rd32(0x804863d8u);
        (void)tc_call(0x8006c388u, &a);
        wr32(0x805711acu, 1u);
        r0 = rd32(param_1 + 0xcf8u);
        wr32(param_1 + 0x270u, 1u);
        if (r0 != 0u) {
            a.f[0] = (f64)rdf32(0x80576338u);
            a.r[0] = 3u;
            a.r[1] = 6u;
            (void)tc_call(0x800523b0u, &a);
            r3 = rd32(0x804863d8u);
            wr32(0x805710d8u, 0u);
            a.r[0] = r3;
            (void)tc_call(0x800c4b50u, &a);
            r4 = rd32(0x804863d8u);
            wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
            a.r[0] = param_1;
            (void)tc_call(0x801e7cb8u, &a);
            wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x2000000u);
        }
    }
    if (rd32(param_1 + 0x270u) >= 4u) {
        wr32(0x805711acu, 0u);
    }
    return;
}
