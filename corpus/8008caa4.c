#include "tc_rt.h"

void fn_8008caa4(u32 param_1, u32 param_2, u32 param_3)
{
    (void)param_2;
    wr32(param_1, param_3);
    wr32(param_1 + 4u, 0u);
    wr8(param_1 + 0xau, 0u);
    wr16(param_1 + 8u, 0u);
    wr8(param_1 + 0xbu, 8u);
    return;
}
