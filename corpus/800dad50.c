#include "tc_rt.h"

u32 fn_800dad50(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32((u32)param_2 + 0x2cu);
    if (r3 != 0u && rd32(r3 + 0xb8u) == 2u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x140u), &a);
        if (r3 == 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
