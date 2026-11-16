#include "tc_rt.h"

void fn_8026d4e4(u32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0;
    if (rd32(param_1) == 0u) {
        r5 = (u32)param_2 + (u32)rd16(param_1 + 0xau);
        wr32(r5 + 4u, 0u);
        wr32(r5, 0u);
        r5 = (u32)rd16(param_1 + 8u);
        wr32(param_1, (u32)param_2);
        wr32(param_1 + 4u, (u32)param_2);
        wr16(param_1 + 8u, (u16)(r5 + 1u));
        return;
    }
    r6 = (u32)rd16(param_1 + 0xau);
    wr32(r6 + (u32)param_2, rd32(param_1 + 4u));
    r6 = r6 + (u32)param_2;
    wr32(r6 + 4u, 0u);
    wr32(rd32(param_1 + 4u) + (u32)rd16(param_1 + 0xau) + 4u, (u32)param_2);
    r5 = (u32)rd16(param_1 + 8u);
    wr32(param_1 + 4u, (u32)param_2);
    wr16(param_1 + 8u, (u16)(r5 + 1u));
    return;
}
