#include "tc_rt.h"

void fn_800d1f6c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = param_r4 * 0x24u;
    r30 = 0u;
    r4 = param_r3 + r31;
    if (rd32(r4 + 0x54u) != 0u) {
        if ((rd32(param_r3 + 0x30u) & 1u) != 0u) {
            r26 = r4 + 0x34u;
            r3 = rd32(0x804863d8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            a.r[0] = r26;
            a.r[1] = r3;
            r3 = tc_call(0x800d2c58u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                a.f[0] = (f64)rdf32(r3 + 4u);
                a.r[0] = param_r3;
                r3 = tc_call(0x800d2228u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    r30 = 1u;
                }
            }
            if (r30 == 0u) {
                r27 = rd32(0x80571140u);
                if (r27 != 0u && (u32)((s32)rd32(r27 + 0x9cu) >> 31) != 0u) {
                    a.r[0] = r27;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
                    a.r[0] = r26;
                    a.r[1] = r3;
                    r3 = tc_call(0x800d2c58u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 != 0u) {
                        a.r[0] = r27;
                        a.r[1] = r4;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
                        a.f[0] = (f64)rdf32(r3 + 4u);
                        a.r[0] = param_r3;
                        r3 = tc_call(0x800d2228u, &a);
                        f1 = tc_lastf();
                        if (r3 != 0u) {
                            r30 = 1u;
                        }
                    }
                }
            }
        }
        if (r30 == 0u && (rd32(param_r3 + 0x30u) & 2u) != 0u) {
            r4 = 0x80470000u;
            r26 = rd32(0x8046ad74u);
            r27 = param_r3 + r31 + 0x34u;
            while (r26 != 0u) {
                r3 = r26;
                r26 = rd32(r26);
                r25 = rd32(r3 + 8u);
                if ((u32)((s32)rd32(r25 + 0x9cu) >> 31) != 0u) {
                    a.r[0] = r25;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r25) + 0x140u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 != 0u) {
                        a.r[0] = r25;
                        a.r[1] = r4;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r25) + 0x28u), &a);
                        a.r[0] = r27;
                        a.r[1] = r3;
                        r3 = tc_call(0x800d2c58u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0u) {
                            a.r[0] = r25;
                            a.r[1] = r4;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(r25) + 0x28u), &a);
                            a.f[0] = (f64)rdf32(r3 + 4u);
                            a.r[0] = param_r3;
                            r3 = tc_call(0x800d2228u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 != 0u) {
                                r30 = 1u;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if (r30 == 0u && (rd32(param_r3 + 0x30u) & 4u) != 0u) {
            r4 = 0x80470000u;
            r25 = rd32(0x8046b7e4u);
            r27 = param_r3 + r31 + 0x34u;
            while (r25 != 0u) {
                r3 = r25;
                r25 = rd32(r25);
                r26 = rd32(r3 + 8u);
                if ((rd32(r26 + 0x260u) & (u32)((s32)rd32(r26 + 0x9cu) >> 31)) != 0u) {
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
                    a.r[0] = r27;
                    a.r[1] = r3;
                    r3 = tc_call(0x800d2c58u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 != 0u) {
                        a.r[0] = r26;
                        a.r[1] = r4;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
                        a.f[0] = (f64)rdf32(r3 + 4u);
                        a.r[0] = param_r3;
                        r3 = tc_call(0x800d2228u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0u) {
                            r30 = 1u;
                            break;
                        }
                    }
                }
            }
        }
        if (r30 != 0u) {
            if (param_r4 != 0u) {
                wr32(param_r3 + 0x2cu, 1u);
            } else {
                wr32(param_r3 + 0x2cu, 0u);
            }
        }
    }
    return;
}
