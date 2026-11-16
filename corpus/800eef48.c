#include "tc_rt.h"

void fn_800eef48(u32 param_1)
{
    wr32(param_1, 0x8035baa0u);
    wr32(param_1 + 4u, 0xffffffffu);
    wr32(param_1 + 8u, 0xffffffffu);
    wr32(param_1 + 0x18u, 0u);
    return;
}
