#include "tc_rt.h"

u32 fn_800c9458(s32 param_1)
{
    u32 r0 = 0;
    r0 = (u32)rd8((u32)param_1 + 0x2au);
    if (r0 >= 1u && r0 <= 0xdu) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        return (u32)rd8((u32)param_1 + 0x2au);
    }
    return 0u;
}
