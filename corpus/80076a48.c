#include "tc_rt.h"

u32 fn_80076a48(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571148u) == 0u) {
        c0lt = param_1 < 1;
        if ((u32)param_1 == 1u) {
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xc0u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0xc0u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xc0u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                f1 = tc_callf(0x8018b9fcu, &a);
            }
            wr32(0x80571148u, r30);
        } else if (!c0lt) {
            if (param_1 < 3) {
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x740u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x740u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x740u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x801b1398u, &a);
                }
                wr32(0x80571148u, r30);
            }
        } else if (param_1 >= 0) {
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x50cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x50cu;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x50cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                f1 = tc_callf(0x8018dad8u, &a);
            }
            wr32(0x80571148u, r30);
        }
        r3 = rd32(0x80571148u);
        if (r3 == 0u) {
            wr32(0x8057114cu, 6u);
            r3 = 0u;
        } else {
            wr32(0x8057114cu, (u32)param_1);
            a.r[0] = r3;
            a.r[1] = 0x80571148u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
            r3 = 1u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
