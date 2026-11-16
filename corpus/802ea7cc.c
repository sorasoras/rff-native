#include "tc_rt.h"

void fn_802ea7cc(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfc0u, 0x817fe000u);
    c0lt = param_3 < 4;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    do {
        if ((u32)param_3 != 4u) {
            if (c0lt) {
                if ((u32)param_3 == 1u) {
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = rd32((u32)param_4 + 4u);
                    a.r[2] = 0u;
                    (void)tc_call(0x802ed738u, &a);
                    f1 = (f64)rdf32(0x817fdfd8u);
                    f0 = (f64)rdf32(0x817fdfdcu);
                    wrf32d(0x817fdfe0u, f1);
                    wrf32d(0x817fdfe8u, f0);
                    wrf32d(0x817fdfe4u, f1);
                    wrf32d(0x817fdfecu, f0);
                    break;
                }
                break;
            }
            if ((u32)param_3 != 8u) break;
        }
        a.r[0] = 0x817fdfd0u;
        a.r[1] = rd32((u32)param_4 + 4u);
        a.r[2] = 0u;
        (void)tc_call(0x802ed738u, &a);
        f0 = (f64)rdf32(0x817fdfd4u);
        wrf32d(0x817fdfe0u, (f64)rdf32(0x817fdfd0u));
        r4 = rd32((u32)param_4 + 0x1cu);
        wrf32d(0x817fdfe8u, f0);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r4;
        a.r[2] = 0u;
        (void)tc_call(0x802ed738u, &a);
        f1 = (f64)rdf32(0x817fdfc8u);
        f0 = (f64)rdf32(0x817fdfccu);
        wrf32d(0x817fdfd0u, f1);
        wrf32d(0x817fdfd4u, f0);
        wrf32d(0x817fdfe4u, f1);
        wrf32d(0x817fdfecu, f0);
    } while (0);
    r4 = rd32(0x817fdfe4u);
    r3 = rd32(0x817fdfe8u);
    r0 = rd32(0x817fdfecu);
    wr32(param_1, rd32(0x817fdfe0u));
    wr32(param_1 + 4u, r4);
    wr32(param_1 + 8u, r3);
    wr32(param_1 + 0xcu, r0);
    return;
}
