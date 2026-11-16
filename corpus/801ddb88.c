#include "tc_rt.h"

s32 fn_801ddb88(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    if (param_1 > 0xcu) {
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
            }
            r30 = r3;
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            r30 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x803752d0u);
        }
    } else {
        r4 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc8ad78u);
        sw_ = r4;
        switch (sw_) {
        case 0x801ddbc0u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x803752d0u);
            break;
        case 0x801ddc48u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x80375530u);
            break;
        case 0x801ddcd0u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x803754f8u);
            break;
        case 0x801ddd58u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x803754c0u);
            break;
        case 0x801de1b8u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x803752f8u);
            break;
        case 0x801ddf88u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x2cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x2cu;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x2cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wrf32d(r30 + 0x28u, (f64)rdf32(0x80576200u));
            wr32(r30 + 0x24u, 0x803753e8u);
            break;
        case 0x801de018u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x2cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x2cu;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x2cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            f0 = (f64)rdf32(0x80576200u);
            wr32(r30 + 0x24u, 0x80375428u);
            wrf32d(r30 + 0x28u, f0);
            break;
        case 0x801de0a8u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x80375348u);
            break;
        case 0x801de130u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x80375320u);
            break;
        case 0x801dde70u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x2cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x2cu;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x2cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wrf32d(r30 + 0x28u, (f64)rdf32(0x80576200u));
            wr32(r30 + 0x24u, 0x803753b0u);
            break;
        case 0x801ddde0u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x2cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x2cu;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x2cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wrf32d(r30 + 0x28u, (f64)rdf32(0x80576200u));
            wr32(r30 + 0x24u, 0x80375370u);
            break;
        case 0x801ddf00u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x2cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x2cu;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x2cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x80375460u);
            break;
        case 0x801de240u:
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x28u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x28u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 == 0u) break;
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801dd788u, &a);
            wr32(r30 + 0x24u, 0x80375488u);
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
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
    wr32(r30 + 0x20u, param_1);
    return (s32)r30;
}
