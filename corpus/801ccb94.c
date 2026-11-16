#include "tc_rt.h"

void fn_801ccb94(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0xed0u) + 1u;
    c0lt = (s32)r4 < (s32)rd32((u32)param_1 + 0xed4u);
    wr32((u32)param_1 + 0xed0u, r4);
    if (!c0lt) {
        wr32((u32)param_1 + 0xed0u, 0u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xfbeu;
        (void)tc_call(0x8010a74cu, &a);
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801cfa98u, &a);
    if ((s32)r3 >= 1) {
        r3 = rd32((u32)param_1 + 0xed8u) + 1u;
        c0lt = (s32)r3 < (s32)rd32((u32)param_1 + 0xedcu);
        wr32((u32)param_1 + 0xed8u, r3);
        if (!c0lt) {
            wr32((u32)param_1 + 0xed8u, 0u);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xfc7u;
            (void)tc_call(0x8010a74cu, &a);
        }
    }
    return;
}
