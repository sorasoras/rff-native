#include "tc_rt.h"

void fn_801a7800(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800f3f20u, &a);
    wrf32d((u32)param_1 + 0xbcu, (f64)(f32)((f64)rdf32((u32)param_1 + 0xbcu) + (f64)rdf32(0x80575a00u)));
    return;
}
