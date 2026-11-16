#include "tc_rt.h"

u32 fn_803200ac(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r4 = 0u;
    for (;;) {
        a.r[0] = param_1;
        a.r[1] = r4;
        r3 = tc_call(0x802de9f0u, &a);
        r4 = r3;
        if (r3 == 0u) break;
        r5 = (r31 << 2u) & 0x3fffcu;
        r31 = r31 + 1u;
        wr32((u32)param_2 + r5, r3);
        if ((s32)(r31 & 0xffffu) >= param_3) {
            return r31;
        }
    }
    return r31;
}
