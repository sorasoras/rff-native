#include "tc_rt.h"

s32 fn_80031188(s32 param_1)
{
    u32 r5 = 0, r6 = 0;
    r5 = (u32)rd16((u32)param_1 + 0x66u);
    r6 = rd32((u32)param_1 + 0x6cu);
    wr16((u32)param_1 + 0x66u, (u16)(r5 + 1u));
    return (s32)(r6 + (r5 * 0x30u));
}
