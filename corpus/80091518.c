#include "tc_rt.h"

void fn_80091518(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r28 = (u32)param_1;
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 != 0u) {
        r0 = rd32(r3 + 4u);
    } else {
        r0 = 3u;
    }
    if (r0 == 2u) {
        r0 = rd32(0x805706e8u);
        if (r0 < 0x1bu || r0 > 0x1eu) {
            if (r0 != 0x39u) {
                f3 = (f64)rdf32(0x80572988u);
                f1 = (f64)rdf32(0x803d27a4u);
                f0 = (f64)rdf32(0x803d27a8u);
                wrf32d(0x817fdfd8u, (f64)rdf32(0x803d27a0u));
                f4 = (f64)rdf32(0x803d27acu);
                wrf32d(0x817fdfdcu, f1);
                r5 = rd32(0x817fdfd8u);
                wrf32d(0x817fdfe0u, f0);
                r4 = rd32(0x817fdfdcu);
                r0 = rd32(0x817fdfe0u);
                wr32(0x817fdfc8u, r5);
                wr32(0x817fdfccu, r4);
                f1 = (f64)rdf32(0x817fdfccu);
                f2 = (f64)(f32)((f64)rdf32(0x817fdfc8u) * f3);
                wr32(0x817fdfd0u, r0);
                f1 = (f64)(f32)(f1 * f3);
                f0 = (f64)rdf32(0x817fdfd0u);
                wrf32d(0x817fdfe4u, f4);
                f0 = (f64)(f32)(f0 * f3);
                r0 = rd32(0x817fdfe4u);
                wrf32d(0x817fdfc8u, f2);
                wr32(0x817fdfd4u, r0);
                wrf32d(0x817fdfccu, f1);
                wrf32d(0x817fdfd0u, f0);
                a.r[0] = 0x817fdfc8u;
                (void)tc_call(0x8004a4fcu, &a);
            }
        }
    }
    r31 = 0u;
    do {
        r3 = rd32(r28 + 0xbf8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = param_3;
            (void)tc_call(0x80090298u, &a);
        }
        r31 = r31 + 1u;
        r28 = r28 + 4u;
    } while ((s32)r31 < 20);
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 != 0u) {
        r0 = rd32(r3 + 4u);
    } else {
        r0 = 3u;
    }
    if (r0 == 2u) {
        r0 = rd32(0x805706e8u);
        if (r0 < 0x1bu || r0 > 0x1eu) {
            if (r0 != 0x39u) {
                a.r[0] = 0x817fdfd8u;
                (void)tc_call(0x8004a4fcu, &a);
            }
        }
    }
    return;
}
