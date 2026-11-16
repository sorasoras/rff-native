#include "tc_rt.h"

void fn_80079efc(u32 param_1)
{
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1, 0x80350378u);
    return;
}
