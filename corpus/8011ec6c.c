#include "tc_rt.h"

void fn_8011ec6c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 4u) + 0xcu;
    a.r[3] = 0u;
    (void)tc_call(0x80306584u, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    f1 = (f64)(f32)((f64)rdf32(r3 + 0x4cu) + (f64)rdf32(0x8057426cu));
    wrf32d(r3 + 0x4cu, f1);
    a.f[0] = f1;
    a.r[0] = r3;
    (void)tc_call(0x8011eb74u, &a);
    return;
}
