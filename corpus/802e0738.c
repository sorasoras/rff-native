#include "tc_rt.h"

u32 fn_802e0738(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802e0038u, &a);
    wr32(param_1, 0x8039cb60u);
    return param_1;
}
