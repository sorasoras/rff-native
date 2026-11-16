#include "tc_rt.h"

u32 fn_801a6360(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r4 = 0, r7 = 0;
    r7 = rd32(param_1);
    if (r7 == 0u || (s32)rd32(param_1 + 4u) <= 0) {
        return 0xffffu;
    }
    r0 = (u32)param_2 * 0xcu;
    r4 = rd32(r7 + r0);
    r0 = rd32(r7 + r0 + 8u);
    r0 = (u32)param_3 * r0;
    r0 = (u32)param_4 + r0;
    r0 = (r0 << 1u) & 0xfffffffeu;
    return (u32)rd16(r4 + r0);
}
