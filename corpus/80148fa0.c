#include "tc_rt.h"

u32 fn_80148fa0(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x150u;
    r3 = tc_call(0x801471c8u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if (rd32((u32)param_1 + 0x770u) == 0u) {
            r0 = rd32((u32)param_1 + 0x76cu) - 1u;
            wr32((u32)param_1 + 0x76cu, r0);
            if ((s32)r0 <= 0) {
                r3 = 0u;
                return r3;
            }
        }
        r3 = 1u;
    }
    return r3;
}
