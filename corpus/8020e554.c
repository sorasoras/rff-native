#include "tc_rt.h"

void fn_8020e554(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    if (param_1 >= 0x23u) {
        r3 = 0u;
    } else {
        r3 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fb20620u);
    }
    if (r3 != 0u) {
        wr32(r3 + 0x74u, param_2);
        return;
    }
    return;
}
