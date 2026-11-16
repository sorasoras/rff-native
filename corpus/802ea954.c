#include "tc_rt.h"

u32 fn_802ea954(u32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x802e42a8u, &a);
    wr32(param_1, 0x8039cf18u);
    return param_1;
}
