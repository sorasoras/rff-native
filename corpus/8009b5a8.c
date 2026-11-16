#include "tc_rt.h"

u32 fn_8009b5a8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    r4 = rd32((u32)param_1 + 0x50u);
    if ((r4 & 2u) != 0u) {
        if ((r4 & 0x200u) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = rd32((u32)param_1 + 0x64u);
            a.r[3] = rd32((u32)param_1 + 0x40u);
            a.r[4] = rd32((u32)param_1 + 0x44u);
            r3 = tc_call(0x8009f16cu, &a);
            wr32((u32)param_1 + 0xc0u, r3);
            if (r3 == 0u) {
                r31 = 0u;
                return r31;
            }
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) | 0x200u);
        }
        if ((rd32((u32)param_1 + 0x50u) & 0x400u) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[2] = rd32((u32)param_1 + 0x74u);
            a.r[3] = rd32((u32)param_1 + 0x40u);
            a.r[4] = rd32((u32)param_1 + 0x44u);
            r3 = tc_call(0x8009f16cu, &a);
            wr32((u32)param_1 + 0xc4u, r3);
            if (r3 == 0u) {
                r31 = 0u;
                return r31;
            }
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) | 0x400u);
        }
        if ((rd32((u32)param_1 + 0x50u) & 0x800u) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 2u;
            a.r[2] = rd32((u32)param_1 + 0x84u);
            a.r[3] = rd32((u32)param_1 + 0x40u);
            a.r[4] = rd32((u32)param_1 + 0x44u);
            r3 = tc_call(0x8009f16cu, &a);
            wr32((u32)param_1 + 0xc8u, r3);
            if (r3 == 0u) {
                r31 = 0u;
            } else {
                wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) | 0x800u);
            }
        }
    }
    return r31;
}
