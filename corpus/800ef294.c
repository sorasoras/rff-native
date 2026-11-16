#include "tc_rt.h"

void fn_800ef294(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_r3 + 4u);
    r3 = tc_call(0x800a4500u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 != 0u) {
        r0 = rd32(param_r3 + 0x18u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x94u), &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_r3;
                a.r[1] = r31;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x800ef5c4u, &a);
                a.r[0] = param_r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_r3) + 0x14u), &a);
            }
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x94u), &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_r3;
                    a.r[1] = r31;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x800ef5c4u, &a);
                    a.r[0] = param_r3;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_r3) + 0x14u), &a);
                }
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                r29 = rd32(0x804863d8u);
                r3 = tc_call(0x80097da4u, &a);
                r28 = rd32(r29 + 0x100u);
                r3 = rd32(r3 + 0xcu);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0x5au;
                r3 = tc_call(0x800ed39cu, &a);
                if (r28 == (r3 & 0xffu)) {
                    f0 = (f64)rdf32(0x80573ad0u);
                    f1 = (f64)rdf32(rd32(r29 + 0x70u) + 0x54u);
                    if ((f1 > f0) || (f1 == f0)) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0x446u;
                        (void)tc_call(0x8010a75cu, &a);
                        r27 = rd32(param_r3 + 0x14u);
                        if (rd32(param_r3 + 0xcu) == 0u) {
                            if (rd32(param_r3 + 0x10u) == 0u) {
                                a.r[0] = r29;
                                (void)tc_call(0x800c4a78u, &a);
                            } else {
                                r3 = tc_call(0x8006bb94u, &a);
                                r4 = r3;
                                if (rd32(r3 + 0x10u) == 0u) {
                                    if (rd32(r3 + 0x20u) == 0u) {
                                        r3 = rd32(r3);
                                        a.r[0] = r3;
                                        a.r[1] = 0xb8u;
                                        a.r[2] = rd32(r4 + 0xcu);
                                        a.r[3] = r4 + 0x18u;
                                        r3 = tc_call(0x80040cd8u, &a);
                                        f1 = tc_lastf();
                                        r4 = tc_lastr4();
                                    } else {
                                        r3 = r3 + 0x24u;
                                        a.r[0] = r3;
                                        a.r[1] = 0x20u;
                                        a.r[2] = 0xb8u;
                                        r3 = tc_call(0x80094e80u, &a);
                                        f1 = tc_lastf();
                                        r4 = tc_lastr4();
                                    }
                                    r29 = r3;
                                } else {
                                    r3 = rd32(r3);
                                    a.r[0] = r3;
                                    a.r[1] = 0xb8u;
                                    a.r[2] = rd32(r4 + 0xcu);
                                    a.r[3] = r4 + 0x18u;
                                    r3 = tc_call(0x80040db8u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    r29 = r3;
                                }
                                if (r3 != 0u) {
                                    r3 = r3;
                                    a.r[0] = r3;
                                    f1 = tc_callf(0x800d5c2cu, &a);
                                    r4 = tc_lastr4();
                                }
                                r28 = rd32(r27 + 0x74u);
                                a.r[0] = r27;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
                                f1 = tc_lastf();
                                a.r[0] = r29;
                                a.r[1] = r28;
                                a.r[2] = r3;
                                a.r[3] = 0x804890c8u;
                                a.r[4] = (u32)rd8(r27 + 0x78u);
                                a.r[5] = 1u;
                                a.f[0] = f1;
                                (void)tc_call(rd32(rd32(r29) + 0x48u), &a);
                                wr32(r29 + 0x7cu, 1u);
                                wr32(param_r3 + 0x14u, r29);
                            }
                            a.r[0] = rd32(param_r3 + 0x14u);
                            a.r[1] = r31;
                            a.r[2] = 0x15u;
                            (void)tc_call(0x800d612cu, &a);
                            wr32(param_r3 + 0x18u, rd32(param_r3 + 0x18u) + 1u);
                        } else {
                            if (rd32(param_r3 + 0x10u) == 0u) {
                                a.r[0] = r29;
                                (void)tc_call(0x800c4a78u, &a);
                                a.r[0] = param_r3;
                                (void)tc_call(0x800ef568u, &a);
                            }
                            wr32(param_r3 + 0x18u, 3u);
                        }
                    }
                }
            } else if (!c0lt) {
                r3 = tc_call(0x80097da4u, &a);
                r28 = rd32(r31 + 0x100u);
                r3 = rd32(r3 + 0xcu);
                a.r[0] = r3;
                a.r[1] = rd32(param_r3 + 4u);
                a.r[2] = 0x96u;
                r3 = tc_call(0x800ed39cu, &a);
                if (r28 == (r3 & 0xffu)) {
                    f0 = (f64)rdf32(0x80573ac0u);
                    f1 = (f64)rdf32(rd32(r31 + 0x70u) + 0x54u);
                    if ((f1 > f0) || (f1 == f0)) {
                        a.r[0] = param_r3;
                        (void)tc_call(0x800ef568u, &a);
                        wr32(param_r3 + 0x18u, rd32(param_r3 + 0x18u) + 1u);
                    }
                }
            }
        }
    }
    return;
}
