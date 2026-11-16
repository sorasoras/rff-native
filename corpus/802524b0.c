#include "tc_rt.h"

void fn_802524b0(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r6 = 0;
    r6 = (rd32(param_1) & 0xffffffefu) | ((ppc_cntlzw((u32)param_3 - 1u) >> 1u) & 0x10u);
    wr32(param_1, r6);
    r6 = (r6 & 0xffffff1fu) | (((u32)rd8((u32)param_2 - 0x7fa8f428u) << 5u) & 0xe0u);
    wr32(param_1, r6);
    return;
}
