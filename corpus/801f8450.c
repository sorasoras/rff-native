#include "tc_rt.h"

s32 fn_801f8450(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d3470u, &a);
    wr32((u32)param_1 + 0x738u, 0x80376d30u);
    return param_1;
}
