#include "tc_rt.h"

s32 fn_8005947c(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffu;
    f1 = tc_callf(0x80044e78u, &a);
    r4 = tc_lastr4();
    if (rd32(0x8057110cu) == 0u) {
        r0 = rd32(0x805706e0u);
        if (r0 <= 8u) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fcb0270u);
            sw_ = r3;
            switch (sw_) {
            case 0x800594dcu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xcu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xcu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xcu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x80060a54u, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            case 0x800595dcu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x180u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x180u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x180u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x80060cc0u, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            case 0x8005955cu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x18u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x18u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x18u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8006142cu, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            case 0x800598d8u:
                break;
            case 0x8005965cu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x3cu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x3cu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x3cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8005c558u, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            case 0x800596dcu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xcu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xcu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xcu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x80060894u, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            case 0x8005975cu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xcu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xcu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xcu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x80060be0u, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            case 0x800597dcu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xcu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xcu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xcu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x80060974u, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            case 0x8005985cu:
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x14u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x14u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    }
                    r31 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x14u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r31 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x800f73a4u, &a);
                    r4 = tc_lastr4();
                }
                wr32(0x8057110cu, r31);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return (s32)r3;
            }
        }
        r3 = rd32(0x8057110cu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
        if (r3 == 0u) {
            r3 = 0u;
            return (s32)r3;
        }
    }
    r3 = tc_call(0x80059ea8u, &a);
    if (r3 == 0u) {
        if (rd32(0x80571128u) != 0u) {
            wr32(0x804dfa70u, 0xfu);
        }
        wr32(0x80571128u, 0u);
    } else {
        wr32(0x80571128u, 1u);
    }
    (void)tc_call(0x800a8474u, &a);
    f1 = tc_callf(0x80059e2cu, &a);
    r3 = rd32(0x8057110cu);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x1cu), &a);
    if (r3 == 0u) {
        (void)tc_call(0x80059e88u, &a);
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        (void)tc_call(0x8023e1c8u, &a);
        (void)tc_call(0x8023e1c8u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = 0x804b9da0u;
        (void)tc_call(0x8010b258u, &a);
        f1 = tc_callf(0x80051aecu, &a);
        r4 = tc_lastr4();
        r3 = rd32(0x8057110cu);
        r31 = rd32(r3 + 8u);
        if (r31 == 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
            f1 = tc_lastf();
            r4 = rd32(0x8057110cu);
            r30 = r3;
            r31 = rd32(r4 + 4u);
            if (r4 != 0u) {
                a.r[0] = r4;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r4) + 8u), &a);
                r4 = tc_lastr4();
            }
            wr32(0x8057110cu, r31);
            if (r31 != 0u) {
                wr32(r31 + 8u, 0u);
                r3 = rd32(0x8057110cu);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                r4 = tc_lastr4();
                if (r30 == 0u) {
                    r3 = rd32(0x8057110cu);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x14u), &a);
                }
            }
        } else {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x18u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r30 = r3;
            if (r3 != 0u) {
                wr32(0x8057110cu, r31);
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r31) + 0xcu), &a);
            } else {
                wr32(rd32(0x8057110cu) + 8u, 0u);
                r3 = rd32(0x8057110cu);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                r3 = rd32(0x8057110cu);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x14u), &a);
            }
        }
        r3 = r30;
    } else {
        a.r[0] = 0xffffffffu;
        (void)tc_call(0x80051fdcu, &a);
        a.r[0] = 0xffffffffu;
        (void)tc_call(0x80051b20u, &a);
        r3 = tc_call(0x80059ea8u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x80059e38u, &a);
            if (r3 != 0u) {
                a.r[0] = 0x804b9da0u;
                (void)tc_call(0x8010b258u, &a);
            }
        }
        (void)tc_call(0x80059e30u, &a);
        (void)tc_call(0x80059e88u, &a);
        r3 = 1u;
    }
    return (s32)r3;
}
