#include "tc_rt.h"

void fn_801ae464(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x84u) != 0u) {
        f0 = (f64)rdf32((u32)param_1 + 0x80u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x7cu) + (f64)rdf32(rd32(rd32((u32)param_1 + 0x74u) + 0xcu) + 0x18u));
        wrf32d((u32)param_1 + 0x7cu, f1);
        if (f1 > f0) {
            wrf32d((u32)param_1 + 0x7cu, f0);
        }
        a.f[0] = (f64)rdf32((u32)param_1 + 0x7cu);
        a.r[0] = rd32((u32)param_1 + 0x70u);
        (void)tc_call(0x80040728u, &a);
        return;
    }
    return;
}
