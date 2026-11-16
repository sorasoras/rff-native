#include "tc_rt.h"

void fn_80180574(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(0x805706e0u) == 4u) {
        if (rd32(0x805711ecu) != 0u) {
            return;
        }
        if (rd32(param_1 + 0xacu) == 1u) {
            r3 = rd32(0x804863d8u);
            if (rd32(r3 + 0x290u) != 0xbu) {
                a.r[0] = r3;
                (void)tc_call(0x800c42fcu, &a);
                wr32(param_1 + 0xfcu, 0x52u);
            }
            a.r[0] = param_1;
            (void)tc_call(0x80180768u, &a);
            r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            wrf32d(r3 + 0x1d8u, (f64)rdf32(param_1 + 0x15cu));
            wrf32d(r3 + 0x1d0u, (f64)rdf32(param_1 + 0x160u));
            wrf32d(r3 + 0x1d4u, (f64)rdf32(param_1 + 0x164u));
        } else {
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r7 = rd32(r3 + 4u);
            r0 = rd32(0x80471a18u);
            wr32(0x817fdfe8u, rd32(r3));
            r0 = r0 * 0x4150u;
            wr32(0x817fdfecu, r7);
            f1 = (f64)rdf32(0x817fdfe8u);
            wr32(0x817fdff0u, rd32(r3 + 8u));
            a.f[0] = f1;
            a.f[1] = (f64)rdf32(0x817fdff0u);
            a.r[0] = r0 - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            wrf32d(0x817fdfecu, f1);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfe8u;
            (void)tc_call(0x80182984u, &a);
            wrf32d(param_1 + 4u, (f64)rdf32(0x817fdfe8u));
            wrf32d(param_1 + 8u, (f64)rdf32(0x817fdfecu));
            wrf32d(param_1 + 0xcu, (f64)rdf32(0x817fdff0u));
            a.r[0] = param_1;
            a.r[1] = 1u;
            (void)tc_call(0x80182cbcu, &a);
        }
        a.r[0] = param_1;
        f1 = tc_callf(0x80084004u, &a);
        r4 = tc_lastr4();
        if (rd32(param_1 + 0xc0u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = rd32(param_1 + 0xc0u);
            a.r[1] = r3;
            f1 = tc_callf(0x80185f70u, &a);
            r4 = tc_lastr4();
        }
        if (rd32(param_1 + 0xc4u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = rd32(param_1 + 0xc4u);
            a.r[1] = r3;
            f1 = tc_callf(0x80185f70u, &a);
            r4 = tc_lastr4();
        }
        if (rd32(param_1 + 0x18cu) != 0xffffffffu) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9e80u;
            a.r[1] = rd32(param_1 + 0x18cu);
            a.r[2] = r3;
            (void)tc_call(0x80120914u, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = rd32(param_1 + 0x190u);
            a.r[2] = r3;
            r3 = tc_call(0x8010a85cu, &a);
            wr32(param_1 + 0x18cu, r3);
        }
    }
    return;
}
