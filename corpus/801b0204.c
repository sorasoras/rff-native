#include "tc_rt.h"

void fn_801b0204(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = (u32)param_1 + 0xf0u;
    (void)tc_call(0x80320f94u, &a);
    a.r[0] = 0x817fdfb8u;
    r3 = tc_call(0x80321010u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x817fdfb8u;
        r3 = tc_call(0x80321010u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(r3 + 0xcu);
        }
        r0 = 0u;
        if (r3 == 1u || r3 == 2u) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r4 = rd32((u32)param_2 + 0x70u);
            r0 = rd32(r4 + 0x3cu);
            r4 = rd32(r4 + 0x38u);
            r0 = r0 * 0xa8u;
            r4 = r4 + r0;
            r5 = rd32(r4 + 0x4cu);
            f11 = (f64)rdf32(r4 + 0x2cu);
            f10 = (f64)rdf32(r5 + 0x28u);
            f9 = (f64)rdf32(r4 + 0x24u);
            f8 = (f64)rdf32(r4 + 0x20u);
            f7 = (f64)rdf32(r4 + 0x1cu);
            f6 = (f64)rdf32(r5 + 0x18u);
            f5 = (f64)rdf32(r4 + 0x14u);
            f4 = (f64)rdf32(r4 + 0x10u);
            f3 = (f64)rdf32(r4 + 0xcu);
            f2 = (f64)rdf32(r5 + 8u);
            f1 = (f64)rdf32(r4 + 4u);
            wrf32d(0x817fdfc0u, (f64)rdf32(r4));
            wrf32d(0x817fdfc4u, f1);
            wrf32d(0x817fdfc8u, f2);
            wrf32d(0x817fdfccu, f3);
            wrf32d(0x817fdfd0u, f4);
            wrf32d(0x817fdfd4u, f5);
            wrf32d(0x817fdfd8u, f6);
            wrf32d(0x817fdfdcu, f7);
            wrf32d(0x817fdfe0u, f8);
            wrf32d(0x817fdfe4u, f9);
            wrf32d(0x817fdfe8u, f10);
            wrf32d(0x817fdfecu, f11);
            a.r[0] = 0x817fdfb8u;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            a.r[1] = 0x817fdfc0u;
            (void)tc_call(0x80311368u, &a);
        }
    }
    return;
}
