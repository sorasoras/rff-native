#include "tc_rt.h"

void fn_801d4b10(f64 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    (void)tc_call(0x801d4994u, &a);
    f1 = (f64)rdf32(0x8057600cu);
    r0 = 0u;
    if ((f1 == (f64)rdf32(0x817fdfd8u) && f1 == (f64)rdf32(0x817fdfdcu)) && f1 == (f64)rdf32(0x817fdfe0u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802343e4u, &a);
    }
    a.f[0] = param_1;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802343c8u, &a);
    f2 = (f64)rdf32(param_3);
    wrf32d((u32)param_2 + 0x17cu, (f64)rdf32(0x817fdfd8u));
    f1 = (f64)rdf32(param_3 + 4u);
    f0 = (f64)rdf32(param_3 + 8u);
    wrf32d((u32)param_2 + 0x180u, (f64)rdf32(0x817fdfdcu));
    wrf32d((u32)param_2 + 0x184u, (f64)rdf32(0x817fdfe0u));
    wrf32d((u32)param_2 + 0x190u, f2);
    wrf32d((u32)param_2 + 0x194u, f1);
    wrf32d((u32)param_2 + 0x198u, f0);
    return;
}
