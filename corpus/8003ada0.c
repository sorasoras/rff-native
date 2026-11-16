#include "tc_rt.h"

s32 fn_8003ada0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r6 = 0, r9 = 0, r31 = 0;
    TcArgs a = {0};
    r9 = rd32((u32)param_2 + 8u) - (u32)param_3;
    if (rd32((u32)param_2 + 0x1cu) == 0u) {
        r6 = rd32((u32)param_2 + 0x14u);
        if (r6 != 0u) {
            wr32(r6 + 0x18u, rd32((u32)param_2 + 0x18u));
        } else {
            wr32((u32)param_1 + 0x10u, rd32((u32)param_2 + 0x18u));
        }
        r6 = rd32((u32)param_2 + 0x18u);
        if (r6 != 0u) {
            wr32(r6 + 0x14u, rd32((u32)param_2 + 0x14u));
        }
        wr32((u32)param_2 + 0x14u, 0u);
        wr32((u32)param_2 + 0x18u, 0u);
        wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0x14u) - 1u);
    }
    if (r9 > 0x20u) {
        wr32((u32)param_2 + 8u, (u32)param_3);
        r31 = (u32)param_2 + (u32)param_3;
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        a.r[2] = r9;
        a.r[3] = (u32)param_1;
        a.r[4] = (u32)param_2;
        a.r[5] = rd32((u32)param_2 + 0x10u);
        (void)tc_call(0x8003ac00u, &a);
        r3 = r31;
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
