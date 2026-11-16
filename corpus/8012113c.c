#include "tc_rt.h"

u32 fn_8012113c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    r5 = 0u;
    if (param_2 >= 0) {
        r3 = (u32)param_1 + (((u32)param_2 << 7u) & 0xffffff80u);
        if ((rd32(r3 + 0x8cu) & 8u) != 0u) {
            if ((s32)rd32(r3 + 0xa0u) > 0) {
                r5 = 1u;
            } else {
                if (rd32(r3 + 0x44u) != 0u) {
                    r5 = 1u;
                }
            }
        }
    }
    return r5;
}
