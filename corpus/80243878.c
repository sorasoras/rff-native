#include "tc_rt.h"

void fn_80243878(u32 param_1)
{
    if (rd32(0x80571828u) != 0u) {
        wr32(param_1, (rd32(0x805717f8u) * 0x600u) - 0x7fb19b80u);
        return;
    }
    wr32(param_1, 0u);
    return;
}
