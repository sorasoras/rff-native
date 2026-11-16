#include "tc_rt.h"

u32 fn_800f391c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f3d44u, &a);
    wr32(param_1, 0x8035bdf0u);
    wr32(param_1 + 0x128u, 0u);
    wr32(param_1 + 0x12cu, 1u);
    return param_1;
}
