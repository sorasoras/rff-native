#include "tc_rt.h"

u32 fn_80249808(s32 param_1)
{
    if (param_1 <= -904) {
        return 0u;
    }
    if (param_1 >= 60) {
        return 0xff64u;
    }
    return (u32)rd16(((((u32)param_1 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
}
