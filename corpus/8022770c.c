#include "tc_rt.h"

u32 fn_8022770c(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0;
    r3 = param_1;
    if ((u32)param_2 > 0u) {
        ctr = (((u32)param_2 + (param_1 & 0x1fu) + 0x1fu) >> 5u) & 0x7ffffffu;
        do {
            r3 = r3 + 0x20u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return r3;
    }
    return param_1;
}
