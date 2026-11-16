#include "tc_rt.h"

void fn_80159418(f64 param_1, s32 param_2)
{
    TcArgs a = {0};
    wrf32d((u32)param_2 + 0x1cu, (f64)(f32)((f64)rdf32((u32)param_2 + 0x18u) + param_1));
    a.r[0] = (u32)param_2;
    a.r[1] = 1u;
    (void)tc_call(0x80159888u, &a);
    return;
}
