#include "tc_rt.h"

s32 fn_800823c0(u32 param_1)
{
    if (rd32(0x80499430u) <= param_1) {
        return 0;
    }
    return (s32)(((param_1 << 2u) & 0xfffffffcu) - 0x7fb66cc0u);
}
