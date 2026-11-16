#include "tc_rt.h"

u32 fn_802228b0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800934f4u, &a);
    wr32(param_1 + 0xb20u, 0u);
    wr32(param_1, 0x80378f60u);
    return param_1;
}
