#include "tc_rt.h"

u32 fn_8009b980(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = 0u;
    if ((u32)param_1 != 0u && (((u32)param_2 == 0u || (u32)param_2 == 1u) || (u32)param_2 == 2u)) {
        r3 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0xc0u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_3;
            r3 = tc_call(0x8009f238u, &a);
            r6 = r3;
        }
    }
    return r6;
}
