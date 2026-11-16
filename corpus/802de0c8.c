#include "tc_rt.h"

s32 fn_802de0c8(s32 param_1, u32 param_2)
{
    u32 r5 = 0;
    r5 = rd32((u32)param_1 + 4u);
    return (s32)(rd32((u32)param_1 + 8u) + (((param_2 - (ppc_divwu(param_2, r5) * r5)) << 3u) & 0xfffffff8u));
}
