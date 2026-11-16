#include "tc_rt.h"

u32 fn_8020e584(u32 param_1)
{
    u32 r3 = 0;
    if (param_1 >= 0x23u) {
        r3 = 0u;
    } else {
        r3 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fb20620u);
    }
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x74u);
        return r3;
    }
    return 0u;
}
