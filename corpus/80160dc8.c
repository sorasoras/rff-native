#include "tc_rt.h"

u32 fn_80160dc8(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574a78u);
    r0 = 1u;
    f1 = (f64)rdf32((u32)param_1 + 0x1ecu);
    if ((f1 < f0) || (f1 == f0)) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x8016125cu, &a);
        r0 = 0u;
    }
    wrf32d((u32)param_1 + 0x1ecu, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1ecu) - (f64)rdf32(0x80574a7cu)));
    return r0;
}
