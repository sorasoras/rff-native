#include "tc_rt.h"

u32 fn_80255fc0(u32 param_1, u32 param_2)
{
    if (rd32(0x805006d0u) == 0u) {
        wr32(0x805006c8u, param_1);
        wr32(0x805006ccu, param_2);
        wr32(0x805006d0u, 1u);
        return 0u;
    }
    return 0xffffffffu;
}
