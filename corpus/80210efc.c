#include "tc_rt.h"

u32 fn_80210efc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8007d490u, &a);
    wr32(param_1, 0x803786e4u);
    a.r[0] = param_1 + 0x1a0u;
    (void)tc_call(0x80051438u, &a);
    wr32(param_1 + 0x1e8u, 0u);
    return param_1;
}
