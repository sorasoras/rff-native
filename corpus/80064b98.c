#include "tc_rt.h"

void fn_80064b98(s32 param_1, u32 param_2)
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
    if (rd32((u32)param_1 + 0xccu) != 0u) {
        a.r[0] = 1u;
        a.r[1] = 3u;
        a.r[2] = 1u;
        (void)tc_call(0x80253f64u, &a);
        f1 = (f64)rdf32(0x803d27a4u);
        f0 = (f64)rdf32(0x803d27a8u);
        f31 = (f64)rdf32(0x803d27acu);
        wrf32d(0x817fdfd8u, (f64)rdf32(0x803d27a0u));
        wrf32d(0x817fdfdcu, f1);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfe4u, f31);
        wrf32d(0x817fdfe4u, (f64)rdf32((u32)param_1 + 0xd0u));
        a.r[0] = 0x817fdfd8u;
        (void)tc_call(0x8004a4fcu, &a);
        a.r[0] = rd32((u32)param_1 + 0x70u);
        a.r[1] = param_2;
        (void)tc_call(0x800318a8u, &a);
        wrf32d(0x817fdfe4u, f31);
        a.r[0] = 0x817fdfd8u;
        (void)tc_call(0x8004a4fcu, &a);
        if ((param_2 & 6u) == 0u) {
            return;
        }
        a.r[0] = 1u;
        a.r[1] = 3u;
        a.r[2] = 1u;
        (void)tc_call(0x80253f64u, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x70u);
        a.r[1] = param_2;
        (void)tc_call(0x800318a8u, &a);
    }
    return;
}
