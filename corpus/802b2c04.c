#include "tc_rt.h"

s32 fn_802b2c04(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    r6 = (u32)rd16((u32)param_1 + 8u);
    r3 = (u32)param_1 + 0xcu;
    r7 = 0u;
    while ((r7 & 0xffffu) < r6) {
        r0 = (u32)rd16(r3 + 8u);
        if (r0 >= param_2 && r0 <= param_3) {
            return (s32)r3;
        }
        r7 = r7 + 1u;
        r3 = r3 + 0xcu;
    }
    return 0;
}
