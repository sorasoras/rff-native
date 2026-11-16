#include "tc_rt.h"

s32 fn_8003aec0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    r8 = rd32((u32)param_2 + 8u) - (u32)param_3;
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
    if (r8 > 0x20u) {
        r31 = (u32)param_2 + rd32((u32)param_2 + 8u) - (u32)param_3;
        wr32(r31 + 8u, (u32)param_3);
        wr32(r31 + 0x10u, rd32((u32)param_2 + 0x10u));
        wr32(r31 + 0xcu, (u32)param_2);
        if ((u32)param_2 != 0u) {
            wr32((u32)param_2 + 0x10u, r31);
        } else {
            wr32((u32)param_1 + 8u, r31);
        }
        r5 = rd32(r31 + 0x10u);
        if (r5 != 0u) {
            wr32(r5 + 0xcu, r31);
        } else {
            wr32((u32)param_1 + 0xcu, r31);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = r8;
        a.r[3] = (u32)param_1;
        a.r[4] = rd32((u32)param_2 + 0xcu);
        a.r[5] = r31;
        (void)tc_call(0x8003ac00u, &a);
        r3 = r31;
    } else {
        r3 = (u32)param_2;
    }
    return (s32)r3;
}
