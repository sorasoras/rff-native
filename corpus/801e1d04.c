#include "tc_rt.h"

void fn_801e1d04(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801dda54u, &a);
    a.r[0] = 0x239eu;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801ddae8u, &a);
    a.r[0] = 0x23a1u;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    if (rd32((u32)param_1 + 0x28u) != 0u) {
        f0 = (f64)rdf32(0x805761f0u);
        wrf32d(0x817fdff0u, f0);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfc0u, f0);
        wrf32d(0x817fdfbcu, f0);
        wrf32d(0x817fdfb8u, f0);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfc8u, f0);
        wrf32d(0x817fdfc4u, f0);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801ddaf4u, &a);
        f0 = (f64)rdf32(0x805762dcu);
        wrf32d(0x817fdfc4u, (f64)rdf32(r3));
        f1 = (f64)rdf32(r3 + 4u);
        wrf32d(0x817fdfc8u, f1);
        f0 = (f64)(f32)(f1 + f0);
        wrf32d(0x817fdfccu, (f64)rdf32(r3 + 8u));
        wrf32d(0x817fdfc8u, f0);
        r3 = tc_call(0x801ddb34u, &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfd0u, rd32(r3));
        wr32(0x817fdfd4u, r0);
        wr32(0x817fdfd8u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfd0u;
        a.r[1] = 0x817fdfc4u;
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x802343a4u, &a);
        f3 = (f64)rdf32(0x817fdfd0u);
        r0 = 0u;
        f0 = (f64)rdf32(0x805761f0u);
        f2 = (f64)rdf32(0x817fdfd4u);
        f1 = (f64)rdf32(0x817fdfd8u);
        wrf32d(0x817fdfb8u, f3);
        wrf32d(0x817fdfbcu, f2);
        wrf32d(0x817fdfc0u, f1);
        if ((f0 == f3 && f0 == f2) && f0 == f1) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x802343e4u, &a);
        }
        f1 = (f64)rdf32(0x817fdfbcu);
        wrf32d(0x817fdfe8u, (f64)rdf32(0x817fdfb8u));
        f0 = (f64)rdf32(0x817fdfc0u);
        wrf32d(0x817fdfecu, f1);
        r0 = rd32(0x817fdfe8u);
        r3 = rd32(0x817fdfecu);
        wrf32d(0x817fdff0u, f0);
        wr32(0x817fdfdcu, r0);
        r0 = rd32(0x817fdff0u);
        wr32(0x817fdfe0u, r3);
        r3 = rd32((u32)param_1 + 0x28u);
        f0 = (f64)rdf32(0x817fdfdcu);
        wr32(0x817fdfe4u, r0);
        f1 = (f64)rdf32(0x817fdfe0u);
        wrf32d(r3 + 0x174u, f0);
        f0 = (f64)rdf32(0x817fdfe4u);
        wrf32d(r3 + 0x178u, f1);
        wrf32d(r3 + 0x17cu, f0);
    }
    return;
}
