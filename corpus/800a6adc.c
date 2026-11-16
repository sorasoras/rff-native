#include "tc_rt.h"

u32 fn_800a6adc(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    r3 = tc_call(0x800a6a24u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if ((u32)(s8)param_4 != 0u) {
            r0 = (u32)param_3 - 1u;
            r3 = rd32(0x817fdfe8u);
            r4 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            if ((r4 & r3) != 0u) {
                r0 = r3 & ~r4;
                r0 = ~(r0 | r0) + 1u;
                wr32(0x817fdfe8u, r0);
            }
        }
        r3 = 1u;
        wr32(param_1, rd32(0x817fdfe8u));
    }
    return r3;
}
