#include "tc_rt.h"

u32 fn_80173d50(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f41bcu, &a);
    wr32(param_1, 0x8036e2b8u);
    return param_1;
}
