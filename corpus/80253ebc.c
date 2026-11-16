#include "tc_rt.h"

void fn_80253ebc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r9 = 0, r10 = 0;
    r10 = rd32(0x80576c88u);
    r9 = (rd32(r10 + 0x220u) & 0xfffff7ffu) | ((ppc_cntlzw(param_1 - 3u) << 6u) & 0x800u);
    wr8(0xcc008000u, 0x61u);
    r9 = (r9 & 0xfffffffeu) | (param_1 & 1u);
    r9 = (r9 & 0xfffffffdu) | ((ppc_cntlzw(param_1 - 2u) >> 4u) & 2u);
    r9 = (r9 & 0xffff0fffu) | ((param_4 << 0xcu) & 0xf000u);
    r9 = (r9 & 0xfffff8ffu) | ((param_2 << 8u) & 0x700u);
    r9 = (r9 & 0xffffff1fu) | ((param_3 << 5u) & 0xe0u);
    wr32(0xcc008000u, r9);
    wr32(r10 + 0x220u, r9);
    wr16(r10 + 2u, 0u);
    return;
}
