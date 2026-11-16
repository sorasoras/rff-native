#include "tc_rt.h"

u32 fn_8026d088(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8026c6b0u, &a);
    return param_1;
}
