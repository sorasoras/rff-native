#include "tc_rt.h"

void fn_802715b0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    wr32(param_2, 0u);
    wr32(param_3, 0u);
    wr32(param_4, 0u);
    if ((param_1 & 0x10u) != 0u) {
        wr32(param_2, rd32(param_2) | 1u);
    }
    if ((param_1 & 0x20u) != 0u) {
        wr32(param_2, rd32(param_2) | 2u);
    }
    if ((param_1 & 4u) != 0u) {
        wr32(param_3, rd32(param_3) | 1u);
    }
    if ((param_1 & 8u) != 0u) {
        wr32(param_3, rd32(param_3) | 2u);
    }
    if ((param_1 & 1u) != 0u) {
        wr32(param_4, rd32(param_4) | 1u);
    }
    if ((param_1 & 2u) != 0u) {
        wr32(param_4, rd32(param_4) | 2u);
        return;
    }
    return;
}
