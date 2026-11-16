#include "tc_rt.h"

u32 fn_8016d738(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    r3 = rd32(param_1);
    if (param_3 < 36) {
        if (param_3 < 0) {
            return 0u;
        }
        r3 = r3 + (((u32)param_3 << 2u) & 0xfffffffcu);
        r3 = rd32(r3 + 0x128u);
        return r3;
    }
    return rd32((u32)param_2 + ((((u32)param_3 - 0x24u) << 2u) & 0xfffffffcu) + 0x32cu);
}
