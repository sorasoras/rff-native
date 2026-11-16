#include "tc_rt.h"

void fn_80243948(u32 param_1)
{
    if (rd32(0x80571824u) != 0u) {
        wr32(param_1, (rd32(0x805717f8u) * 0x600u) - 0x7fb18980u);
        return;
    }
    wr32(param_1, 0u);
    return;
}
