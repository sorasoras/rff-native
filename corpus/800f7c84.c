#include "tc_rt.h"

u32 fn_800f7c84(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    f1 = tc_callf(0x801e6900u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801e5998u, &a);
    if (rd32((u32)param_1 + 0x10u) != 0u) {
        r3 = tc_call(0x80059e38u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3 + 0x40u) + 0x10u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                r3 = rd32((u32)param_1 + 0x10u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(r3 + 0x40u) + 0x14u), &a);
                r3 = rd32((u32)param_1 + 0x10u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(r3 + 0x40u) + 8u), &a);
                }
                f1 = (f64)rdf32(0x80573be0u);
                wr32((u32)param_1 + 0x10u, 0u);
                a.f[0] = f1;
                a.f[1] = (f64)rdf32(0x80573be4u);
                f1 = tc_callf(0x80059c9cu, &a);
                r4 = tc_lastr4();
            }
        }
        r3 = rd32((u32)param_1 + 0x10u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(r3 + 0x40u) + 0x18u), &a);
            r31 = 1u;
        }
    }
    return r31;
}
