#include "tc_rt.h"

u32 fn_800a8624(u32 param_1)
{
    u32 r4 = 0;
    if (((ppc_cntlzw((u32)rd8(0x8049e134u) - 1u) >> 5u) & 0x7ffffffu) == 0u) {
        return 0u;
    }
    r4 = rd32(0x8049e288u);
    if (r4 == 0xffffffffu) {
        return 0u;
    }
    return (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu))) & param_1;
}
