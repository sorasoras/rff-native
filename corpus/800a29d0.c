#include "tc_rt.h"

u32 fn_800a29d0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 0xcu;
    (void)tc_call(0x800a3490u, &a);
    a.r[0] = param_1 + 0x3324u;
    (void)tc_call(0x800a5f50u, &a);
    wr32(param_1, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x800a2ad0u, &a);
    return param_1;
}
