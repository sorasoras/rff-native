#include "tc_rt.h"

u32 fn_8013c8d8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80363e18u);
    return param_1;
}
