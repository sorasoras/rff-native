#include "tc_rt.h"

u32 fn_80150a4c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80168aacu, &a);
    wr32(param_1, 0x80366fa0u);
    return param_1;
}
