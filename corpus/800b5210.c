#include "tc_rt.h"

u32 fn_800b5210(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x15d8u);
    if (r3 != 0u) {
        while (r3 != 0u) {
            if (rd32(r3) == (u32)param_2) {
                return 1u;
            }
            r3 = rd32(r3 + 0x20u);
        }
    }
    return 0u;
}
