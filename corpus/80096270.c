#include "tc_rt.h"

void fn_80096270(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x110u) == 0xffffffffu) {
        f2 = (f64)rdf32((u32)param_1 + 0xccu);
        f1 = (f64)rdf32((u32)param_1 + 0xc8u);
        wrf32d(0x817fdfe8u, (f64)rdf32((u32)param_1 + 0xc4u));
        wrf32d(0x817fdfecu, f1);
        wrf32d(0x817fdff0u, f2);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x2b04u;
        a.r[2] = 0x817fdfe8u;
        r3 = tc_call(0x8010a814u, &a);
        wr32((u32)param_1 + 0x110u, r3);
    }
    return;
}
