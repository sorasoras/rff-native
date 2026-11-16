#include "tc_rt.h"

u32 fn_8015bdc0(s32 param_1)
{
    u32 r0 = 0;
    r0 = 0x10u;
    if (param_1 < 16) {
        r0 = (u32)param_1;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    return rd32(r0 - 0x7fcc9ad0u);
}
