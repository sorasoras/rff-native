#include "tc_rt.h"

u32 fn_800b0b2c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x800b071cu, &a);
    return r3;
}
