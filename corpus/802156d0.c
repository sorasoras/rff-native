#include "tc_rt.h"

s32 fn_802156d0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, r3 = 0;
    r3 = rd32((u32)param_1 + 0x3e8u);
    if (r3 != 0u) {
        r3 = r3 + (((u32)param_2 << 2u) & 0xfffffffcu);
        r3 = rd32(r3 + 0x10u);
        c0eq = r3 == 0u;
        if ((!c0eq && !c0eq) && (param_3 >= 0 && param_3 < (s32)rd32(r3))) {
            r3 = r3 + (((u32)param_3 << 2u) & 0xfffffffcu);
            r3 = rd32(r3 + 4u);
            return (s32)r3;
        }
    }
    return 0;
}
