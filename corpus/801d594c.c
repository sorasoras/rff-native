#include "tc_rt.h"

void fn_801d594c(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x8057600cu);
    r3 = rd32((u32)param_1 + 8u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    a.r[0] = r3;
    a.r[1] = 0xc8u;
    r3 = tc_call(0x801d4e14u, &a);
    r3 = rd32(r3 + 0x50u);
    f2 = (f64)rdf32(r3 + 0x1cu);
    f1 = (f64)rdf32(r3 + 0x2cu);
    wrf32d(0x817fdfe4u, (f64)rdf32(r3 + 0xcu));
    r3 = rd32((u32)param_1 + 8u);
    wrf32d(0x817fdfe8u, f2);
    wrf32d(0x817fdfecu, f1);
    a.r[0] = r3;
    a.r[1] = 0xc9u;
    r3 = tc_call(0x801d4e14u, &a);
    r4 = rd32(r3 + 0x50u);
    r3 = rd32((u32)param_1 + 0x10u);
    f4 = (f64)rdf32(r4 + 0xcu);
    f3 = (f64)rdf32(r4 + 0x1cu);
    f2 = (f64)rdf32(r4 + 0x2cu);
    f1 = (f64)rdf32(0x817fdfe8u);
    wrf32d(r3 + 0x3cu, (f64)rdf32(0x817fdfe4u));
    f0 = (f64)rdf32(0x817fdfecu);
    wrf32d(r3 + 0x40u, f1);
    wrf32d(r3 + 0x44u, f0);
    wrf32d(r3 + 0x48u, f4);
    wrf32d(r3 + 0x4cu, f3);
    wrf32d(r3 + 0x50u, f2);
    return;
}
