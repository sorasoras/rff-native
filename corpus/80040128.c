#include "tc_rt.h"

void fn_80040128(void)
{
    wr32(0x803be67cu, 0xffffffffu);
    wr32(0x803be680u, 0u);
    return;
}
