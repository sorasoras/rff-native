#include "tc_rt.h"

void fn_8011f20c(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x54u) != 0u) {
        a.r[0] = rd32((u32)param_1 + 4u) + 0xcu;
        a.r[3] = 0u;
        (void)tc_call(0x80306584u, &a);
    } else {
        wr32((u32)param_1 + 0xcu, 0xffffffffu);
    }
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x50u) + (f64)rdf32(0x80574284u));
    wrf32d((u32)param_1 + 0x50u, f1);
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011f27cu, &a);
    return;
}
