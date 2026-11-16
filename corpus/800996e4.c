#include "tc_rt.h"

void fn_800996e4(u32 param_1)
{
    u32 c0eq = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r5 = 0, r6 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    for (;;) {
        wr32(r1 - 0x10u, r1);
        r1 = r1 - 0x10u;
        wr32(r1 + 0x14u, lr);
        wr32(r1 + 0xcu, r31);
        r31 = r3;
        wr32(r1 + 8u, r30);
        r0 = rd32(r3);
        if (r0 != 0u) {
            a.r[0] = r0;
            a.r[1] = 1u;
            f1 = tc_callf(0x800a2a1cu, &a);
            r3 = tc_lastr();
            wr32(r31, 0u);
        }
        r30 = rd32(r31 + 4u);
        if (r30 != 0u) {
            r3 = tc_call(0x80097e5cu, &a);
            f1 = tc_lastf();
            r6 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    f1 = tc_callf(0x80040e98u, &a);
                    r3 = tc_lastr();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    f1 = tc_callf(0x80094ec0u, &a);
                    r3 = tc_lastr();
                }
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                f1 = tc_callf(0x80040e98u, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 4u, 0u);
        }
        r3 = rd32(r31 + 8u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x800997b0u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 8u, 0u);
        }
        r3 = rd32(r31 + 0xcu);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x800997dcu;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0xcu, 0u);
        }
        r3 = rd32(r31 + 0x10u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099808u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x10u, 0u);
        }
        r3 = rd32(r31 + 0x14u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099834u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x14u, 0u);
        }
        r3 = rd32(r31 + 0x18u);
        if (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x801a6234u, &a);
            r3 = tc_lastr();
            wr32(r31 + 0x18u, 0u);
        }
        r3 = rd32(r31 + 0x40u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099878u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x40u, 0u);
        }
        r3 = rd32(r31 + 0x44u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x800998a4u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x44u, 0u);
        }
        r30 = rd32(r31 + 0x50u);
        if (r30 != 0u) {
            r3 = tc_call(0x80097e5cu, &a);
            f1 = tc_lastf();
            r6 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    f1 = tc_callf(0x80040e98u, &a);
                    r3 = tc_lastr();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    f1 = tc_callf(0x80094ec0u, &a);
                    r3 = tc_lastr();
                }
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                f1 = tc_callf(0x80040e98u, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x50u, 0u);
        }
        r3 = rd32(r31 + 0x1cu);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099940u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x1cu, 0u);
        }
        r3 = rd32(r31 + 0x20u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x8009996cu;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x20u, 0u);
        }
        r3 = rd32(r31 + 0x24u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            f1 = tc_callf(0x80114c70u, &a);
            r3 = tc_lastr();
            wr32(r31 + 0x24u, 0u);
        }
        r30 = rd32(r31 + 0x54u);
        if (r30 != 0u) {
            r3 = tc_call(0x80097e5cu, &a);
            f1 = tc_lastf();
            r6 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    f1 = tc_callf(0x80040e98u, &a);
                    r3 = tc_lastr();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    f1 = tc_callf(0x80094ec0u, &a);
                    r3 = tc_lastr();
                }
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                f1 = tc_callf(0x80040e98u, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x54u, 0u);
        }
        r30 = rd32(r31 + 0x58u);
        if (r30 != 0u) {
            r3 = tc_call(0x80097e5cu, &a);
            f1 = tc_lastf();
            r6 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    f1 = tc_callf(0x80040e98u, &a);
                    r3 = tc_lastr();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    f1 = tc_callf(0x80094ec0u, &a);
                    r3 = tc_lastr();
                }
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                f1 = tc_callf(0x80040e98u, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x58u, 0u);
        }
        r30 = rd32(r31 + 0x5cu);
        if (r30 != 0u) {
            r3 = tc_call(0x80097e5cu, &a);
            f1 = tc_lastf();
            r6 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    f1 = tc_callf(0x80040e98u, &a);
                    r3 = tc_lastr();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    f1 = tc_callf(0x80094ec0u, &a);
                    r3 = tc_lastr();
                }
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                f1 = tc_callf(0x80040e98u, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x5cu, 0u);
        }
        r3 = rd32(r31 + 0x28u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099b04u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x28u, 0u);
        }
        r3 = rd32(r31 + 0x2cu);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099b30u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x2cu, 0u);
        }
        r3 = rd32(r31 + 0x30u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099b5cu;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x30u, 0u);
        }
        r30 = rd32(r31 + 0x4cu);
        if (r30 != 0u) {
            r3 = tc_call(0x80097e5cu, &a);
            f1 = tc_lastf();
            r6 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    f1 = tc_callf(0x80040e98u, &a);
                    r3 = tc_lastr();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    f1 = tc_callf(0x80094ec0u, &a);
                    r3 = tc_lastr();
                }
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                f1 = tc_callf(0x80040e98u, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x4cu, 0u);
        }
        r3 = rd32(r31 + 0x3cu);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099bf8u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x3cu, 0u);
        }
        r3 = rd32(r31 + 0x34u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099c24u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x34u, 0u);
        }
        r3 = rd32(r31 + 0x38u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099c50u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x38u, 0u);
        }
        r3 = rd32(r31 + 0x48u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099c7cu;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x48u, 0u);
        }
        r3 = rd32(r31 + 0x60u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            f1 = tc_callf(0x8021271cu, &a);
            r3 = tc_lastr();
            wr32(r31 + 0x60u, 0u);
        }
        r3 = rd32(r31 + 0x64u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099cc4u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x64u, 0u);
        }
        r3 = rd32(r31 + 0x68u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099cf0u;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x68u, 0u);
        }
        r3 = rd32(r31 + 0x6cu);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x80099d1cu;
                if (r12 == 0x800996e4u) continue;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
            }
            wr32(r31 + 0x6cu, 0u);
        }
        r3 = rd32(r31 + 0x70u);
        c0eq = r3 == 0u;
        if (c0eq) {
            r3 = tc_call(0x80118a08u, &a);
            f1 = tc_lastf();
            return;
        }
        if (c0eq) {
            wr32(r31 + 0x70u, 0u);
            r3 = tc_call(0x80118a08u, &a);
            f1 = tc_lastf();
            return;
        }
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x18u);
        lr = 0x80099d48u;
        if (r12 != 0x800996e4u) break;
    }
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    wr32(r31 + 0x70u, 0u);
    r3 = tc_call(0x80118a08u, &a);
    f1 = tc_lastf();
    return;
}
