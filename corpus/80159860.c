#include "tc_rt.h"

u32 fn_80159860(s32 param_1)
{
    u32 r4 = 0;
    r4 = 0u;
    if ((u32)((s32)rd32((u32)param_1 + 0x34u) >> 31) != 0u || (s32)(s16)rd16((u32)param_1 + 0x2au) > 0) {
        r4 = 1u;
    }
    return r4;
}
