#include "tc_rt.h"

void fn_801d5868(s32 param_1)
{
    u32 r3 = 0, r6 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x8057600cu);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    a.r[0] = rd32((u32)param_1 + 8u);
    a.r[1] = 0xc8u;
    r3 = tc_call(0x801d4e14u, &a);
    r3 = rd32(r3 + 0x50u);
    f0 = (f64)rdf32(0x8057600cu);
    wrf32d(0x817fdfe4u, (f64)rdf32(r3 + 0xcu));
    wrf32d(0x817fdfe8u, (f64)rdf32(r3 + 0x1cu));
    wrf32d(0x817fdfecu, (f64)rdf32(r3 + 0x2cu));
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    a.r[0] = rd32((u32)param_1 + 8u);
    a.r[1] = 0xc9u;
    r3 = tc_call(0x801d4e14u, &a);
    r6 = rd32(r3 + 0x50u);
    wrf32d(0x817fdfd8u, (f64)rdf32(r6 + 0xcu));
    wrf32d(0x817fdfdcu, (f64)rdf32(r6 + 0x1cu));
    wrf32d(0x817fdfe0u, (f64)rdf32(r6 + 0x2cu));
    a.r[0] = 0xd4u;
    a.r[1] = 0x817fdfe4u;
    a.r[2] = 0x817fdfd8u;
    r3 = tc_call(0x800d7ac8u, &a);
    wr32((u32)param_1 + 0x10u, r3);
    if (r3 != 0u) {
        wrf32d(r3 + 0x3cu, (f64)rdf32(0x817fdfe4u));
        wrf32d(r3 + 0x40u, (f64)rdf32(0x817fdfe8u));
        wrf32d(r3 + 0x44u, (f64)rdf32(0x817fdfecu));
        wrf32d(r3 + 0x48u, (f64)rdf32(0x817fdfd8u));
        wrf32d(r3 + 0x4cu, (f64)rdf32(0x817fdfdcu));
        wrf32d(r3 + 0x50u, (f64)rdf32(0x817fdfe0u));
    }
    return;
}
