#include "tc_rt.h"

void fn_802e81b8(f64 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f31 = (f64)rdf32(0x80577488u);
    wr32(0x817fdfdcu, 0u);
    r31 = (u32)param_5;
    wr32(0x817fdfd8u, 0u);
    r30 = (u32)param_4;
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd0u, 0u);
    wrf32d(param_2, f31);
    wrf32d(param_2 + 8u, f31);
    wrf32d(param_2 + 4u, f31);
    wrf32d(param_2 + 0xcu, f31);
    wrf32d((u32)param_3 + 0x2cu, f31);
    wrf32d((u32)param_3 + 0x30u, f31);
    do {
        wrf32d(0x817fdfc0u, f31);
        wrf32d(0x817fdfc4u, f31);
        wrf32d(0x817fdfc8u, f31);
        wrf32d(0x817fdfccu, f31);
        a.f[0] = param_1;
        a.r[0] = 0x817fdfc0u;
        a.r[1] = (u32)param_3;
        a.r[2] = r30;
        a.r[3] = r31;
        a.r[4] = 0x817fdfb8u;
        r3 = tc_call(0x802e7720u, &a);
        f1 = (f64)rdf32(0x817fdfc0u);
        f0 = (f64)rdf32(param_2);
        r30 = r30 + ((r3 << 1u) & 0xfffffffeu);
        r31 = r31 - r3;
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_2, f1);
        f0 = (f64)rdf32(param_2 + 4u);
        f1 = (f64)rdf32(0x817fdfc4u);
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 4u, f1);
        f0 = (f64)rdf32(param_2 + 8u);
        f1 = (f64)rdf32(0x817fdfc8u);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 8u, f1);
        f0 = (f64)rdf32(param_2 + 0xcu);
        f1 = (f64)rdf32(0x817fdfccu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 0xcu, f1);
        if ((u32)rd8(0x817fdfb8u) != 0u) {
            a.f[0] = param_1;
            a.r[0] = 0x817fdfc0u;
            a.r[1] = (u32)param_3;
            a.r[2] = 0x80570f20u;
            a.r[3] = 1u;
            a.r[4] = 0x817fdfb8u;
            (void)tc_call(0x802e7720u, &a);
            f1 = (f64)rdf32(0x817fdfc0u);
            f0 = (f64)rdf32(param_2);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_2, f1);
            f0 = (f64)rdf32(param_2 + 4u);
            f1 = (f64)rdf32(0x817fdfc4u);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 4u, f1);
            f0 = (f64)rdf32(param_2 + 8u);
            f1 = (f64)rdf32(0x817fdfc8u);
            if (!(f0 < f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 8u, f1);
            f0 = (f64)rdf32(param_2 + 0xcu);
            f1 = (f64)rdf32(0x817fdfccu);
            if (!(f0 < f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 0xcu, f1);
        }
    } while ((s32)r31 > 0);
    return;
}
