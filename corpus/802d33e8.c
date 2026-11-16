#include "tc_rt.h"

void fn_802d33e8(u32 param_1, u32 param_2, s32 param_3, s32 param_4, f64 param_f1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f1 = (f64)rdf32(0x80348a80u);
    r28 = (u32)param_3;
    wrf32d(param_1, f1);
    r29 = (u32)param_4;
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 0xcu, f1);
    a.f[0] = f1;
    a.f[1] = f1;
    a.r[0] = param_2;
    (void)tc_call(0x802d72e8u, &a);
    f31 = (f64)rdf32(0x80348a80u);
    do {
        wrf32d(0x817fdfb0u, f31);
        wrf32d(0x817fdfb4u, f31);
        wrf32d(0x817fdfb8u, f31);
        wrf32d(0x817fdfbcu, f31);
        a.f[0] = param_f1;
        a.r[0] = 0x817fdfb0u;
        a.r[1] = param_2;
        a.r[2] = r28;
        a.r[3] = r29;
        a.r[4] = 0x817fdfa8u;
        r3 = tc_call(0x802d2a14u, &a);
        r30 = r3;
        if ((u32)rd8(0x817fdfa8u) != 0u) {
            a.f[0] = param_f1;
            a.r[0] = 0x817fdfb0u;
            a.r[1] = param_2;
            a.r[2] = 0x80399ea8u;
            a.r[3] = 1u;
            a.r[4] = 0x817fdfa8u;
            (void)tc_call(0x802d2a14u, &a);
        }
        f1 = (f64)rdf32(0x817fdfb0u);
        f0 = (f64)rdf32(param_1);
        r28 = r28 + ((r30 << 1u) & 0xfffffffeu);
        r29 = r29 - r30;
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_1, f1);
        f0 = (f64)rdf32(param_1 + 4u);
        f1 = (f64)rdf32(0x817fdfb4u);
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_1 + 4u, f1);
        f0 = (f64)rdf32(param_1 + 8u);
        f1 = (f64)rdf32(0x817fdfb8u);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_1 + 8u, f1);
        f0 = (f64)rdf32(param_1 + 0xcu);
        f1 = (f64)rdf32(0x817fdfbcu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_1 + 0xcu, f1);
    } while ((s32)r29 > 0);
    return;
}
