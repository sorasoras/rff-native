#include "tc_rt.h"

void fn_80243a18(u32 param_1)
{
    if (rd32(0x80571820u) != 0u) {
        wr32(param_1, (rd32(0x805717f8u) * 0x480u) - 0x7fb17780u);
        return;
    }
    wr32(param_1, 0u);
    return;
}
