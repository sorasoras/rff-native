#include "tc_rt.h"

void fn_800ca4a0(f64 param_1, f64 param_2, f64 param_3, u32 param_4)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf32d(0x817fdfe8u, param_1);
    wrf32d(0x817fdfecu, param_2);
    wrf32d(0x817fdff0u, param_3);
    a.r[0] = param_4;
    a.r[1] = 0x817fdfe8u;
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.f[2] = param_3;
    (void)tc_call(rd32(rd32(param_4) + 0x1cu), &a);
    return;
}
