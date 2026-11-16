#include "tc_rt.h"

void fn_80250654(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r9 = 0;
    r0 = 0u;
    r9 = (u32)rd16(rd32(0x80571958u) + 2u);
    if ((u32)param_1 == 1u || (u32)param_1 == 3u) {
        r0 = 1u;
    }
    r9 = (r9 & 0xfffffffeu) | (r0 & 1u);
    r9 = (r9 & 0xfffff7ffu) | ((ppc_cntlzw((u32)param_1 - 3u) << 6u) & 0x800u);
    r9 = (r9 & 0xfffffffdu) | ((ppc_cntlzw((u32)param_1 - 2u) >> 4u) & 2u);
    r9 = (r9 & 0xffff0fffu) | (((u32)param_4 << 0xcu) & 0xf000u);
    r9 = (r9 & 0xfffff8ffu) | ((param_2 << 8u) & 0x700u);
    r9 = (r9 & 0xffffff1fu) | ((param_3 << 5u) & 0xe0u);
    r9 = (r9 & 0xffffffu) | 0x41000000u;
    wr16(rd32(0x80571958u) + 2u, (u16)r9);
    return;
}
