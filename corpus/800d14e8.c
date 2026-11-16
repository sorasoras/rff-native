#include "tc_rt.h"

u32 fn_800d14e8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800c9dccu, &a);
    wr32(param_1, 0x80355b28u);
    wr32(param_1 + 0x144u, 2u);
    wr32(param_1 + 0x130u, 1u);
    wr32(param_1 + 0x138u, 2u);
    wr32(param_1 + 0x134u, 0u);
    return param_1;
}
