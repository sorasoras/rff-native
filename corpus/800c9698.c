#include "tc_rt.h"

u32 fn_800c9698(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80355660u);
    a.r[0] = param_1;
    (void)tc_call(0x800c96e8u, &a);
    wr32(param_1 + 0x498u, 0u);
    wr16(param_1 + 0x44cu, 0u);
    return param_1;
}
