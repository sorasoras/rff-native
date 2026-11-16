#include "tc_rt.h"

void fn_8015fcf4(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wrf32d((u32)param_4 + 0x124u, param_1);
    a.f[0] = param_2;
    r3 = tc_call(0x802558e4u, &a);
    wr32((u32)param_4 + 0x130u, r3);
    wrf32d((u32)param_4 + 0x128u, param_3);
    return;
}
