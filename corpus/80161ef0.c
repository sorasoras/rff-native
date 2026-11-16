#include "tc_rt.h"

void fn_80161ef0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x5cu) != 0u) {
        r0 = (u32)rd16((u32)param_1 + 0xbcu);
        wrf32d((u32)param_1 + 0xc0u, (f64)rdf32(param_2));
        r0 = r0 * 0x34u;
        f0 = (f64)rdf32(0x80574afcu);
        wrf32d((u32)param_1 + 0xc4u, (f64)rdf32(param_2 + 4u));
        wrf32d((u32)param_1 + 0xc8u, (f64)rdf32(param_2 + 8u));
        f2 = (f64)rdf32(param_2 + 4u);
        f3 = (f64)(f32)((f64)rdf32(param_2) + (f64)rdf32(r0 - 0x7fb5e5e8u));
        wrf32d(param_2, f3);
        f1 = (f64)(f32)(f2 + (f64)rdf32(((u32)rd16((u32)param_1 + 0xbcu) * 0x34u) - 0x7fb5e5e4u));
        wrf32d(param_2 + 4u, f1);
        r4 = rd32((u32)param_1 + 0x5cu);
        wrf32d(r4 + 4u, f3);
        wrf32d(r4 + 8u, f1);
        wrf32d(r4 + 0xcu, f0);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801618ecu, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8016182cu, &a);
    }
    return;
}
