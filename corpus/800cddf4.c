#include "tc_rt.h"

void fn_800cddf4(u32 param_1)
{
    wr16(param_1 + 0x10u, 0u);
    wr16(param_1, 0u);
    wr32(param_1 + 0x34u, 0u);
    wr32(param_1 + 0x30u, 0u);
    return;
}
