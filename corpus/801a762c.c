#include "tc_rt.h"

u32 fn_801a762c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8017b710u, &a);
    wr32(param_1, 0x80371730u);
    return param_1;
}
