#include "tc_rt.h"

u32 fn_80176b20(u32 param_r3)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x801769bcu, &a);
    return 0u;
}
