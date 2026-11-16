#include "tc_rt.h"

void fn_801a09a8(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0u;
    ctr = 2u;
    do {
        if (rd32(r3 + 0x15f0u) == 0u) {
            f0 = (f64)rdf32(0x80575830u);
            wrf32d(0x817fdfd8u, f0);
            wrf32d(0x817fdfd4u, f0);
            wrf32d(0x817fdfd0u, f0);
            if ((u32)param_3 == 0xffffffffu) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = (u32)param_3;
                a.r[3] = param_4;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfb8u, rd32(r3));
                wr32(0x817fdfbcu, r0);
                wr32(0x817fdfc0u, rd32(r3 + 8u));
                a.r[0] = 0x817fdfb8u;
                a.r[1] = param_4;
                a.r[2] = 0x817fdfb8u;
                (void)tc_call(0x80234380u, &a);
                f1 = (f64)rdf32(0x817fdfbcu);
                f0 = (f64)rdf32(0x817fdfc0u);
                wrf32d(0x817fdfd0u, (f64)rdf32(0x817fdfb8u));
                wrf32d(0x817fdfd4u, f1);
                wrf32d(0x817fdfd8u, f0);
            } else {
                a.r[0] = param_1;
                a.r[1] = 0x817fdfd0u;
                a.r[2] = (u32)param_3;
                a.r[3] = 0x804890c8u;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x34u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    wrf32d(0x817fdfd0u, (f64)rdf32(r3));
                    wrf32d(0x817fdfd4u, (f64)rdf32(r3 + 4u));
                    wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 8u));
                }
            }
            a.f[0] = (f64)rdf32(0x8057582cu);
            a.r[0] = param_2;
            a.r[1] = 0x817fdfd0u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            r4 = param_1 + ((r30 << 2u) & 0xfffffffcu);
            f2 = (f64)rdf32(param_4);
            wr32(r4 + 0x15f0u, r3);
            f1 = (f64)rdf32(param_4 + 4u);
            wr32(r4 + 0x15e8u, (u32)param_3);
            r3 = param_1 + (r30 * 0xcu);
            f0 = (f64)rdf32(param_4 + 8u);
            wrf32d(r3 + 0x15f8u, f2);
            wrf32d(r3 + 0x15fcu, f1);
            wrf32d(r3 + 0x1600u, f0);
            return;
        }
        r3 = r3 + 4u;
        r30 = r30 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f0 = (f64)rdf32(0x80575830u);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfc4u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc4u;
    a.r[2] = (u32)param_3;
    a.r[3] = 0x804890c8u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x34u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        wrf32d(0x817fdfc4u, (f64)rdf32(r3));
        wrf32d(0x817fdfc8u, (f64)rdf32(r3 + 4u));
        wrf32d(0x817fdfccu, (f64)rdf32(r3 + 8u));
    }
    a.f[0] = (f64)rdf32(0x8057582cu);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfc4u;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800d783cu, &a);
    return;
}
