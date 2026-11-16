#include "tc_rt.h"

void fn_80210af8(s32 param_1, u32 param_2)
{
    u32 r4 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80576880u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r5 = rd32((u32)param_1 + 0x408u);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe8u, f0);
    if (r5 != 0u) {
        r31 = rd32(r5 + 0x30u);
        wr32(r5 + 0x30u, 0u);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = rd32((u32)param_1 + 0x408u);
        (void)tc_call(0x80100db8u, &a);
        f4 = (f64)rdf32(0x817fdfc8u);
        f3 = (f64)rdf32(0x817fdfd0u);
        f1 = -(f64)rdf32(0x817fdfccu);
        r4 = rd32((u32)param_1 + 0x408u);
        wrf32d(0x817fdfe0u, f4);
        wr32(r4 + 0x30u, r31);
        f0 = (f64)rdf32(0x804b9d5cu);
        f2 = (f64)(f32)(f4 + (f64)rdf32(0x804b9d60u));
        wrf32d(0x817fdfe8u, f3);
        f0 = (f64)(f32)(f1 + f0);
        wrf32d(0x817fdfe0u, f2);
        wrf32d(0x817fdfe4u, f0);
    }
    f4 = (f64)(f32)((f64)rdf32(param_2) + (f64)rdf32(0x817fdfe0u));
    f1 = (f64)rdf32(param_2 + 8u);
    f2 = (f64)(f32)((f64)rdf32(param_2 + 4u) + (f64)rdf32(0x817fdfe4u));
    f0 = (f64)rdf32(0x817fdfe8u);
    wrf32d((u32)param_1 + 0x258u, f4);
    f0 = (f64)(f32)(f1 + f0);
    wrf32d((u32)param_1 + 0x25cu, f2);
    wrf32d((u32)param_1 + 0x260u, f0);
    wrf32d(0x817fdfd4u, f4);
    wrf32d(0x817fdfd8u, f2);
    wrf32d(0x817fdfdcu, f0);
    return;
}
