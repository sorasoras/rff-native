#include "tc_rt.h"

u32 fn_802fc0dc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802fedccu, &a);
    wr32(param_1, 0x8039d3f8u);
    return param_1;
}
