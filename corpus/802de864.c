#include "tc_rt.h"

void fn_802de864(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r6 = 0;
    if ((u32)param_2 == 0u) {
        if (rd32(param_1) == 0u) {
            r4 = (u32)param_3 + (u32)rd16(param_1 + 0xau);
            wr32(r4 + 4u, 0u);
            wr32(r4, 0u);
            r4 = (u32)rd16(param_1 + 8u);
            wr32(param_1, (u32)param_3);
            wr32(param_1 + 4u, (u32)param_3);
            wr16(param_1 + 8u, (u16)(r4 + 1u));
            return;
        }
        r6 = (u32)rd16(param_1 + 0xau);
        wr32(r6 + (u32)param_3, rd32(param_1 + 4u));
        r6 = r6 + (u32)param_3;
        wr32(r6 + 4u, 0u);
        wr32(rd32(param_1 + 4u) + (u32)rd16(param_1 + 0xau) + 4u, (u32)param_3);
        r4 = (u32)rd16(param_1 + 8u);
        wr32(param_1 + 4u, (u32)param_3);
        wr16(param_1 + 8u, (u16)(r4 + 1u));
        return;
    }
    r0 = rd32(param_1);
    if ((u32)param_2 == r0) {
        if (r0 == 0u) {
            r4 = (u32)param_3 + (u32)rd16(param_1 + 0xau);
            wr32(r4 + 4u, 0u);
            wr32(r4, 0u);
            r4 = (u32)rd16(param_1 + 8u);
            wr32(param_1, (u32)param_3);
            wr32(param_1 + 4u, (u32)param_3);
            wr16(param_1 + 8u, (u16)(r4 + 1u));
            return;
        }
        r4 = (u32)rd16(param_1 + 0xau);
        wr32(r4 + (u32)param_3, 0u);
        r4 = r4 + (u32)param_3;
        wr32(r4 + 4u, rd32(param_1));
        wr32(rd32(param_1) + (u32)rd16(param_1 + 0xau), (u32)param_3);
        r4 = (u32)rd16(param_1 + 8u);
        wr32(param_1, (u32)param_3);
        wr16(param_1 + 8u, (u16)(r4 + 1u));
        return;
    }
    r0 = (u32)rd16(param_1 + 0xau);
    r6 = rd32((u32)param_2 + r0);
    wr32((u32)param_3 + r0, r6);
    r6 = r6 + r0;
    wr32((u32)param_3 + r0 + 4u, (u32)param_2);
    wr32(r6 + 4u, (u32)param_3);
    wr32((u32)param_2 + (u32)rd16(param_1 + 0xau), (u32)param_3);
    wr16(param_1 + 8u, (u16)((u32)rd16(param_1 + 8u) + 1u));
    return;
}
