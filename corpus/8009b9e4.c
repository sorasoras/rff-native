#include "tc_rt.h"

u32 fn_8009b9e4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    if ((u32)param_1 != 0u && (((u32)param_2 == 0u || (u32)param_2 == 1u) || (u32)param_2 == 2u)) {
        r31 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
        r3 = rd32(r31 + 0xc0u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8009f2ccu, &a);
            if ((u32)(s8)r3 != 0u) {
                a.r[0] = rd32(r31 + 0xc0u);
                r3 = tc_call(0x8009f2dcu, &a);
                if ((u32)param_3 == r3) {
                    r30 = 1u;
                }
            }
        }
    }
    return r30;
}
