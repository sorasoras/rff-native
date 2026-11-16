#include "tc_rt.h"

u32 fn_802cb598(u32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x802d09d8u, &a);
    wr32(param_1, 0x80399b70u);
    return param_1;
}
