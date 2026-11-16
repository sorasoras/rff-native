#include "tc_rt.h"

u32 fn_800368cc(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x803a4bacu);
    while (r4 != 0u) {
        if (r4 == param_1) {
            return 1u;
        }
        r4 = rd32(r4);
    }
    return 0u;
}
