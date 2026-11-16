#include "tc_rt.h"

void fn_80180768(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    r4 = rd32(r3);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfdcu, r4);
    wr32(0x817fdfe0u, r0);
    wr32(0x817fdfe4u, rd32(r3 + 8u));
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    wrf32d(0x817fdfd8u, f1);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x174u;
    (void)tc_call(0x80182788u, &a);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x178u;
    (void)tc_call(0x8018287cu, &a);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x174u;
    (void)tc_call(0x801828ecu, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfdcu;
    a.r[2] = 0x817fdfd8u;
    r3 = tc_call(0x801826e0u, &a);
    r30 = r3;
    r29 = 1u;
    a.r[0] = param_1;
    r3 = tc_call(0x8018095cu, &a);
    if (r3 == 0u) {
        r29 = 0u;
    }
    a.r[0] = param_1;
    a.r[1] = r29;
    a.r[2] = 1u;
    r3 = tc_call(0x80180ae4u, &a);
    r4 = tc_lastr4();
    r29 = r3;
    if (r3 == 1u) {
        r0 = rd32(param_1 + 0xfcu);
        if (r0 != 0x52u) {
            if (r0 == 0x53u) {
                f1 = (f64)rdf32(param_1 + 0x130u);
                f0 = (f64)rdf32(rd32(rd32(0x804863d8u) + 0x70u) + 0x54u);
                do {
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)rdf32(param_1 + 0x134u);
                        if ((f0 < f1) || (f0 == f1)) {
                            wr32(param_1 + 0x170u, 2u);
                            break;
                        }
                    }
                    if (rd32(param_1 + 0x170u) != 2u) {
                        wr32(param_1 + 0x170u, 1u);
                    }
                } while (0);
                a.r[0] = 0xffffffffu;
                r3 = tc_call(0x800a8624u, &a);
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    wr32(param_1 + 0x170u, 2u);
                }
            }
        } else {
            wr32(param_1 + 0x170u, 1u);
        }
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = (f64)rdf32(0x817fdfd8u);
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfdcu;
    (void)tc_call(0x801816c0u, &a);
    if (r30 == 0u) {
        a.f[0] = (f64)rdf32(0x817fdfdcu);
        a.f[1] = (f64)rdf32(0x817fdfe4u);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        wrf32d(0x817fdfe0u, f1);
    }
    a.r[0] = param_1;
    a.r[1] = 0x817fdfdcu;
    (void)tc_call(0x80182984u, &a);
    wrf32d(param_1 + 4u, (f64)rdf32(0x817fdfdcu));
    wrf32d(param_1 + 8u, (f64)rdf32(0x817fdfe0u));
    wrf32d(param_1 + 0xcu, (f64)rdf32(0x817fdfe4u));
    a.r[0] = param_1;
    a.r[1] = r29;
    (void)tc_call(0x80180988u, &a);
    return;
}
