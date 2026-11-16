#include "tc_rt.h"

void fn_80097f68(u32 param_1)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r12 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    do {
        wr32(r1 - 0x10u, r1);
        r1 = r1 - 0x10u;
        wr32(r1 + 0x14u, lr);
        wr32(r1 + 0xcu, r31);
        r31 = r3;
        wr32(r1 + 8u, 0u);
        a.r[0] = r3;
        r3 = tc_call(0x800996e4u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800efb40u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x801567a0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r12 = rd32(r3);
        r12 = rd32(r12 + 8u);
        lr = 0x80097f9cu;
    } while (r12 == 0x80097f68u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x84u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x84u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x84u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800ab784u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x4cu, r30);
    wr32(r30 + 0x10u, 1u);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xc8u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xc8u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xc8u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800ac720u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 8u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x333cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x333cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x333cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800a29d0u, &a);
        f1 = tc_lastf();
    }
    wr32(r31, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 4u, r3);
    a.r[0] = 0x44u;
    r3 = tc_call(0x800ef9c0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x800ed1c0u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0xcu, r30);
    a.r[0] = 0xcu;
    r3 = tc_call(0x800ef9c0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80109b9cu, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x10u, r30);
    a.r[0] = 0x38cu;
    r3 = tc_call(0x800ef9c0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80116e88u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x14u, r30);
    a.r[0] = 8u;
    r3 = tc_call(0x801a619cu, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x801a62b8u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x18u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x880u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x880u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x880u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x801598a0u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x40u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x4a4u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x4a4u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x4a4u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800c9698u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x44u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1c0u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1c0u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1c0u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800cdeb4u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x50u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8010b9acu, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x1cu, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8010f154u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x20u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 8u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 8u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 8u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x80114a04u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x24u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1810u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1810u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1810u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8010c300u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x54u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x480u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x480u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x480u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8010c838u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x58u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x80u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x80u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x80u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8010ec7cu, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x5cu, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x20u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8011b0e4u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x28u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x60u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x60u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x60u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8011bb64u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x2cu, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x4bcu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x4bcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x4bcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8015c610u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x30u, r30);
    a.r[0] = 0xcu;
    r3 = tc_call(0x800ef9c0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80121540u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x3cu, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
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
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8013c8d8u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x34u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x110u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x110u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x110u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x80141400u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x38u, r30);
    a.r[0] = 0x48u;
    r3 = tc_call(0x800ef9c0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x800adcb8u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x48u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x9ccu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x9ccu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x9ccu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = r31;
        r3 = tc_call(0x802125bcu, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x60u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x28cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x28cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8019e328u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x64u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
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
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x3cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x3cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x801f9134u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x68u, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x174u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x174u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x174u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8020e97cu, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x6cu, r30);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x74cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x74cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        }
        r30 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x74cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x80221fe8u, &a);
        f1 = tc_lastf();
    }
    wr32(r31 + 0x70u, r30);
    a.r[0] = r31;
    r3 = tc_call(0x80097e68u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = rd32(r31 + 0xcu);
        r3 = tc_call(0x800ed290u, &a);
        f1 = tc_lastf();
    }
    r0 = rd32(r1 + 0x14u);
    r31 = rd32(r1 + 0xcu);
    r30 = rd32(r1 + 8u);
    return;
}
