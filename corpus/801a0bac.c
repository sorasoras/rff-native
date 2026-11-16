#include "tc_rt.h"

void fn_801a0bac(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    f31 = (f64)rdf32(0x80575830u);
    r29 = param_r3;
    r28 = param_r3 + 0x15f8u;
    r27 = 0u;
    do {
        r3 = rd32(r29 + 0x15f0u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                wr32(r29 + 0x15f0u, 0u);
            } else {
                wrf32d(0x817fdfc8u, f31);
                wrf32d(0x817fdfc4u, f31);
                wrf32d(0x817fdfc0u, f31);
                r5 = rd32(r29 + 0x15e8u);
                if (r5 == 0xffffffffu) {
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfb4u, rd32(r3));
                    wr32(0x817fdfb8u, r0);
                    wr32(0x817fdfbcu, rd32(r3 + 8u));
                    a.r[0] = 0x817fdfb4u;
                    a.r[1] = r28;
                    a.r[2] = 0x817fdfb4u;
                    (void)tc_call(0x80234380u, &a);
                    f1 = (f64)rdf32(0x817fdfb8u);
                    f0 = (f64)rdf32(0x817fdfbcu);
                    wrf32d(0x817fdfc0u, (f64)rdf32(0x817fdfb4u));
                    wrf32d(0x817fdfc4u, f1);
                    wrf32d(0x817fdfc8u, f0);
                } else {
                    a.r[0] = param_r3;
                    a.r[1] = 0x817fdfc0u;
                    a.r[2] = r5;
                    a.r[3] = 0x804890c8u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x34u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u) {
                        a.r[0] = param_r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                        wrf32d(0x817fdfc0u, (f64)rdf32(r3));
                        wrf32d(0x817fdfc4u, (f64)rdf32(r3 + 4u));
                        wrf32d(0x817fdfc8u, (f64)rdf32(r3 + 8u));
                    }
                }
                r3 = rd32(0x817fdfc4u);
                r0 = rd32(0x817fdfc8u);
                wr32(0x817fdfa8u, rd32(0x817fdfc0u));
                wr32(0x817fdfacu, r3);
                wr32(0x817fdfb0u, r0);
                a.r[0] = rd32(r29 + 0x15f0u);
                a.r[1] = 0x817fdfa8u;
                (void)tc_call(0x8015811cu, &a);
            }
        }
        r27 = r27 + 1u;
        r28 = r28 + 0xcu;
        r29 = r29 + 4u;
    } while (r27 < 2u);
    return;
}
