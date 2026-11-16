#include "tc_rt.h"

void fn_801dcdb8(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r31 = param_1;
    r30 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x801dcaccu, &a);
        if (r3 == 0u) break;
        r30 = r30 + 1u;
        r31 = r31 + 0x14u;
    } while ((s32)r30 < 128);
    if (r30 != 0x80u) {
        wr32(r31, param_2);
        f0 = (f64)rdf32(param_4);
        wr32(r31 + 4u, (u32)param_3);
        f1 = (f64)rdf32(param_4 + 4u);
        wrf32d(r31 + 8u, f0);
        f0 = (f64)rdf32(param_4 + 8u);
        wrf32d(r31 + 0xcu, f1);
        wrf32d(r31 + 0x10u, f0);
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x8010b43cu, &a);
        wr32(param_2 + 0x20u, r3);
        wr32(param_2 + 0x24u, 0u);
    }
    return;
}
