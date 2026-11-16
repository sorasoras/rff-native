#include "tc_rt.h"

u32 fn_8018bd7c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x3cu), &a);
    return 1u;
}
