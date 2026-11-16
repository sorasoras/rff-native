#include "tc_rt.h"

u32 fn_800ae008(s32 param_1)
{
    return ppc_rlwinm(1u, (s32)(ppc_cntlzw(rd32((u32)param_1 + 0x3cu)) & 0x1fu), 31, 31);
}
