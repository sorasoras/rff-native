#include "tc_rt.h"

void fn_800d8bb8(u32 param_1)
{
    u32 r0 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    f7 = (f64)rdf32(0x805739e0u);
    wr32(0x817fe004u, 0x817ff000u);
    f6 = (f64)rdf32(0x805739d0u);
    r0 = rd32(0x805710e0u);
    wrf32d(0x817fdfb8u, f7);
    r0 = r0 * 0x6d0u;
    wrf32d(0x817fdfbcu, f6);
    r12 = r0 - 0x7fc2e738u;
    wrf32d(0x817fdfc0u, f7);
    r10 = rd32(r12 + 0x138u);
    r9 = rd32(r12 + 0x13cu);
    r8 = rd32(r12 + 0x140u);
    r7 = rd32(r12 + 0x144u);
    r0 = rd32(r12 + 0x148u);
    wr32(0x817fdfd0u, rd32(r12 + 0x134u));
    wr32(0x817fdfd4u, r10);
    f5 = (f64)rdf32(0x817fdfd0u);
    wr32(0x817fdfd8u, r9);
    f4 = (f64)rdf32(0x817fdfd4u);
    wr32(0x817fdfc4u, r8);
    f3 = (f64)rdf32(0x817fdfd8u);
    wr32(0x817fdfc8u, r7);
    f2 = (f64)rdf32(0x817fdfc4u);
    wr32(0x817fdfccu, r0);
    f1 = (f64)rdf32(0x817fdfc8u);
    f0 = (f64)rdf32(0x817fdfccu);
    wrf32d(0x817fdfe8u, f5);
    wrf32d(0x817fdfecu, f4);
    wrf32d(0x817fdff0u, f3);
    wrf32d(0x817fdfdcu, f7);
    wrf32d(0x817fdfe0u, f6);
    wrf32d(0x817fdfe4u, f7);
    wrf32d(0x817fdff4u, f2);
    wrf32d(0x817fdff8u, f1);
    wrf32d(0x817fdffcu, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0x817fdfdcu;
    a.r[3] = 0x817fdff4u;
    (void)tc_call(0x80233e28u, &a);
    return;
}
