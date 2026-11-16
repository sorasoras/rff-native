#include "tc_rt.h"

void fn_800f2cbc(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    if (rd32((u32)param_1 + 0x1b8u) != 0u) {
        if (rd32((u32)param_1 + 0xccu) != 0u) {
            f31 = (f64)rdf32(0x803d27acu);
            f1 = (f64)rdf32(0x803d27a4u);
            f0 = (f64)rdf32(0x803d27a8u);
            wrf32d(0x817fdfd8u, (f64)rdf32(0x803d27a0u));
            wrf32d(0x817fdfdcu, f1);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfe4u, f31);
            wrf32d(0x817fdfe4u, (f64)rdf32((u32)param_1 + 0xd0u));
            a.r[0] = 0x817fdfd8u;
            f1 = tc_callf(0x8004a4fcu, &a);
        }
        a.r[0] = (u32)param_1 + 0x148u;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x148u) + 0x14u), &a);
        if (rd32((u32)param_1 + 0xccu) != 0u) {
            wrf32d(0x817fdfe4u, f31);
            a.r[0] = 0x817fdfd8u;
            (void)tc_call(0x8004a4fcu, &a);
        }
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80064b98u, &a);
    return;
}
