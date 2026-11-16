#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1, u32 param_2)
{
    u32 r1 = 0, r3 = 0, r25 = 0, r26 = 0, r30 = 0, r31 = 0, t0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x30u, sp_);
    r1 = sp_ - 0x30u;
    wr32(r1 + 0x34u, 0x817ff000u);
    t0 = r1 + 0x10u;
    wr32(t0, 0u);
    wr32(t0 + 4u, 0u);
    wr32(t0 + 8u, 0u);
    wr32(t0 + 0xcu, 0u);
    wr32(t0 + 0x10u, 0u);
    wr32(t0 + 0x14u, 0u);
    wr32(t0 + 0x18u, 0u);
    wr32(t0 + 0x1cu, 0u);
    a.r[0] = param_1 + 0xbcu;
    a.r[1] = param_2;
    r3 = tc_call(0x800f8664u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = param_1;
    } else {
        r31 = rd32(param_1 + 0x14u);
        r30 = param_1 + 0x14u;
        while (r31 != r30) {
            if (r31 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803604e4u;
                a.r[1] = 0x23du;
                a.r[2] = 0x803604c0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            a.r[0] = r31 + 0xb8u;
            a.r[1] = param_2;
            r3 = tc_call(0x800f8664u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                if (r31 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x803604e4u;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x803604c0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x802e41c0u, &a);
                }
                r26 = r31 - 4u;
                if (r26 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80360514u;
                    a.r[1] = 0x193u;
                    a.r[2] = 0x803604f0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802e41c0u, &a);
                }
                r3 = r26;
                return r3;
            }
            if (r31 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803604e4u;
                a.r[1] = 0x23du;
                a.r[2] = 0x803604c0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802e41c0u, &a);
            }
            r25 = r31 - 4u;
            if (r25 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80360514u;
                a.r[1] = 0x193u;
                a.r[2] = 0x803604f0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802e41c0u, &a);
            }
            r3 = px_rec(r1, r25, param_2);
            if (r3 != 0u) {
                return r3;
            }
            r31 = rd32(r31);
        }
        r3 = 0u;
    }
    return r3;
}

u32 fn_80103424(u32 param_1, u32 param_2)
{
    return px_rec(0x817fe000u, param_1, param_2);
}
