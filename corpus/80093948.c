#include "tc_rt.h"

void fn_80093948(s32 param_1, u32 param_2)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    if (rd32((u32)param_1 + 0x254u) != 3u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        f1 = tc_callf(0x800f2cbcu, &a);
        if (rd32((u32)param_1 + 0x1b8u) == 0u) {
            if (rd32((u32)param_1 + 0xccu) != 0u) {
                f31 = (f64)rdf32(0x803d27acu);
                f1 = (f64)rdf32(0x803d27a4u);
                f0 = (f64)rdf32(0x803d27a8u);
                wrf32d(0x817fdfc8u, (f64)rdf32(0x803d27a0u));
                wrf32d(0x817fdfccu, f1);
                wrf32d(0x817fdfd0u, f0);
                wrf32d(0x817fdfd4u, f31);
                wrf32d(0x817fdfd4u, (f64)rdf32((u32)param_1 + 0xd0u));
                a.r[0] = 0x817fdfc8u;
                f1 = tc_callf(0x8004a4fcu, &a);
            }
            if (rd32((u32)param_1 + 0x144u) == 0u && rd32((u32)param_1 + 0x264u) != 0u) {
                r31 = (u32)param_1 + 0x26cu;
                r30 = 0u;
                do {
                    a.r[0] = r31;
                    a.r[1] = param_2;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(r31) + 0x14u), &a);
                    r30 = r30 + 1u;
                    r31 = r31 + 0xacu;
                } while ((s32)r30 < 12);
            }
            if (rd32((u32)param_1 + 0xccu) != 0u) {
                wrf32d(0x817fdfd4u, f31);
                a.r[0] = 0x817fdfc8u;
                (void)tc_call(0x8004a4fcu, &a);
            }
        }
    }
    return;
}
