#include "tc_rt.h"

u32 fn_8028a4cc(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    r3 = (u32)param_1 - 8u;
    if ((r3 & 1u) != 0u) {
        return 0u;
    }
    r0 = (u32)rd8(r3 + 4u);
    if (r0 < 9u) {
        r0 = (r0 << 4u) & 0xff0u;
        return (u32)rd16(r0 - 0x7fac6570u);
    }
    return 0u;
}
