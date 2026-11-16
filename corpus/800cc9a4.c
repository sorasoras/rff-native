#include "tc_rt.h"

void fn_800cc9a4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) + (f64)rdf32((u32)param_1 + 0x44u));
    f2 = (f64)rdf32((u32)param_1 + 0x40u);
    wrf32d((u32)param_1 + 0x18u, (f64)rdf32((u32)param_1 + 0xcu));
    f1 = (f64)rdf32(0x80572f78u);
    f0 = (f64)(f32)(f2 + f0);
    wrf32d((u32)param_1 + 0x1cu, f0);
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800cd050u, &a);
    return;
}
