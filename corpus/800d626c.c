#include "tc_rt.h"

u32 fn_800d626c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xa4u) == 0u) {
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x40u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x40u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x40u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
            }
            r31 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            f1 = tc_callf(0x800d639cu, &a);
            r4 = tc_lastr4();
        }
        wr32(param_1 + 0xa4u, r31);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80573190u);
        a.r[0] = rd32(param_1 + 0xa4u);
        a.r[1] = param_1;
        a.r[2] = r3;
        r3 = tc_call(0x800d64d0u, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
