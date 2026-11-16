#include "tc_rt.h"

u32 fn_801a04c4(s32 param_1)
{
    u32 r0 = 0;
    r0 = (u32)(s8)rd8((u32)param_1 + 0x142u);
    if (r0 != 1u) {
        if (r0 == 2u) {
            return 0x3du;
        }
        if (r0 == 4u) {
            return 0x42u;
        }
        if (r0 == 0xbu) {
            return 0x46u;
        }
        if (r0 == 8u || r0 == 9u) {
            return 0x3cu;
        }
        if (r0 != 0xau) {
            return 0xffffffffu;
        }
        return 0x45u;
    }
    return 0xffffffffu;
}
