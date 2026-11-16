#include "tc_rt.h"

void fn_8006ffec(s32 param_1)
{
    u32 r3 = 0, r4 = 0, t4 = 0, t8 = 0, t12 = 0, t16 = 0, t20 = 0;
    f64 t2 = 0.0, t6 = 0.0, t10 = 0.0, t14 = 0.0, t18 = 0.0, t22 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (rd32((u32)param_1 + 0x4cu) != 0u) {
        r3 = rd32((u32)param_1 + 0x60u);
        if (r3 != 0u) {
            r4 = rd32(r3 + 0x50u);
            t2 = (f64)rdf32(r4 + 4u);
            wrf32d(0x817fdfc8u, (f64)rdf32(r4));
            wrf32d(0x817fdfccu, t2);
            t4 = r4 + 8u;
            t6 = (f64)rdf32(t4 + 4u);
            wrf32d(0x817fdfd0u, (f64)rdf32(t4));
            wrf32d(0x817fdfd4u, t6);
            t8 = r4 + 0x10u;
            t10 = (f64)rdf32(t8 + 4u);
            wrf32d(0x817fdfd8u, (f64)rdf32(t8));
            wrf32d(0x817fdfdcu, t10);
            t12 = r4 + 0x18u;
            t14 = (f64)rdf32(t12 + 4u);
            wrf32d(0x817fdfe0u, (f64)rdf32(t12));
            wrf32d(0x817fdfe4u, t14);
            t16 = r4 + 0x20u;
            t18 = (f64)rdf32(t16 + 4u);
            wrf32d(0x817fdfe8u, (f64)rdf32(t16));
            wrf32d(0x817fdfecu, t18);
            t20 = r4 + 0x28u;
            t22 = (f64)rdf32(t20 + 4u);
            wrf32d(0x817fdff0u, (f64)rdf32(t20));
            wrf32d(0x817fdff4u, t22);
            a.r[0] = 0x817fdfc8u;
            a.r[1] = (u32)param_1 + 0x50u;
            a.r[2] = (u32)param_1 + 8u;
            (void)tc_call(0x8023411cu, &a);
        }
    }
    return;
}
