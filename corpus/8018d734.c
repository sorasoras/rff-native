#include "tc_rt.h"

void fn_8018d734(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x805752d8u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfd4u, f0);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 0x817fdfd4u;
    (void)tc_call(0x8018d6a4u, &a);
    if ((u32)param_2 != 0u) {
        if ((u32)param_2 != 1u) {
            f2 = (f64)rdf32(0x8057532cu);
            f0 = (f64)rdf32(0x817fdfd0u);
            wrf32d(0x817fdfc8u, f2);
            f1 = (f64)(f32)(f0 - f2);
            f0 = (f64)rdf32(0x805752d8u);
            wrf32d(0x817fdfd0u, f1);
            if ((f64)rdf32((u32)param_1 + 0x74u) < f0) {
                wrf32d(0x817fdfc8u, (f64)(f32)(f2 * (f64)rdf32(0x805752e8u)));
            }
            f31 = (f64)rdf32(0x805752ecu);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8018d008u, &a);
            if (r3 != 0u) {
                if (r3 == 1u) {
                    wrf32d(0x817fdfc8u, (f64)(f32)((f64)rdf32(0x817fdfc8u) * (f64)rdf32(0x805752e8u)));
                }
            } else {
                wrf32d(0x817fdfc8u, (f64)rdf32(0x805752d8u));
            }
        } else {
            f2 = (f64)rdf32(0x80575328u);
            f0 = (f64)rdf32(0x805752d8u);
            wrf32d(0x817fdfc8u, f2);
            f31 = (f64)rdf32(0x80575324u);
            if ((f64)rdf32((u32)param_1 + 0x74u) < f0) {
                f1 = (f64)rdf32(0x805752e8u);
                f31 = (f64)(f32)(f31 * f1);
                wrf32d(0x817fdfc8u, (f64)(f32)(f2 * f1));
            }
        }
    } else {
        f2 = (f64)rdf32(0x80575320u);
        f0 = (f64)rdf32(0x805752d8u);
        wrf32d(0x817fdfc8u, f2);
        f31 = (f64)rdf32(0x80575324u);
        if ((f64)rdf32((u32)param_1 + 0x74u) < f0) {
            f1 = (f64)rdf32(0x805752e8u);
            f31 = (f64)(f32)(f31 * f1);
            wrf32d(0x817fdfc8u, (f64)(f32)(f2 * f1));
        }
    }
    a.r[0] = 0x817fdfd4u;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0x817fdfd4u;
    (void)tc_call(0x80234380u, &a);
    f3 = (f64)rdf32(0x817fdfd4u);
    r4 = rd32(0x804863d8u);
    wrf32d(r4 + 0x84u, f3);
    f2 = (f64)rdf32(0x817fdfd8u);
    wrf32d(r4 + 0x88u, f2);
    f0 = (f64)rdf32(0x817fdfdcu);
    wrf32d(r4 + 0x8cu, f0);
    wrf32d(r4 + 4u, f3);
    wrf32d(r4 + 8u, f2);
    wrf32d(r4 + 0xcu, f0);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f31;
    a.f[1] = f2;
    a.f[2] = f3;
    (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
    return;
}
