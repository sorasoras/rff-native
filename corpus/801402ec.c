#include "tc_rt.h"

u32 fn_801402ec(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    r0 = rd32(param_1 + 8u);
    r3 = rd32(param_1);
    r0 = (u32)param_2 - r0;
    r0 = r0 * 0xau;
    r3 = (u32)rd16(r3 + r0);
    return r3;
}
