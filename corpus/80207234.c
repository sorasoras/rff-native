#include "tc_rt.h"

u32 fn_80207234(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80167a34u, &a);
    wr32(param_1, 0x80377870u);
    return param_1;
}
