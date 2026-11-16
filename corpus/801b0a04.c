#include "tc_rt.h"

u32 fn_801b0a04(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 8u) == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x805706e8u) != 7u) {
            r3 = 0u;
        } else {
            r5 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
            while (r5 != 0u) {
                r4 = r5;
                r5 = rd32(r5);
                r30 = rd32(r4 + 8u);
                if (rd32(r30 + 0x84u) == 0x1f41u) {
                    f3 = (f64)rdf32(param_1);
                    r4 = rd32(0x804863d8u);
                    f2 = (f64)rdf32(param_1 + 4u);
                    wrf32d(r4 + 0x84u, f3);
                    f0 = (f64)rdf32(param_1 + 8u);
                    wrf32d(r4 + 0x88u, f2);
                    f1 = (f64)rdf32(0x80575b78u);
                    wrf32d(r4 + 0x8cu, f0);
                    wrf32d(r4 + 4u, f3);
                    wrf32d(r4 + 8u, f2);
                    wrf32d(r4 + 0xcu, f0);
                    r3 = rd32(0x804863d8u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
                    a.r[0] = rd32(0x804863d8u);
                    (void)tc_call(0x800c4b50u, &a);
                    a.r[0] = rd32(0x804863d8u);
                    (void)tc_call(0x800c4394u, &a);
                    wr32(r30 + 0xacu, 0u);
                    f2 = (f64)rdf32(0x803365a8u);
                    f1 = (f64)rdf32(0x803365b0u);
                    wrf32d(r30 + 0xb0u, (f64)rdf32(0x804890d4u));
                    r3 = 1u;
                    wrf32d(r30 + 0xb4u, (f64)rdf32(0x804890d8u));
                    wrf32d(r30 + 0xb8u, (f64)rdf32(0x804890dcu));
                    r6 = rd32(0x805710e0u);
                    wr32(0x80486da8u, 0x7fu);
                    r4 = (r6 * 0x6d0u) - 0x7fc2e738u;
                    wrf32d(r4 + 0x1d8u, f1);
                    wrf32d(r4 + 0x1d0u, f2);
                    return r3;
                }
            }
            r3 = 0u;
        }
    }
    return r3;
}
