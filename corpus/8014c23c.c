#include "tc_rt.h"

void fn_8014c23c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = param_2;
        (void)tc_call(0x8014ccfcu, &a);
        r30 = r30 + 1u;
    }
    r30 = (u32)param_1;
    wr32((u32)param_1 + 0x14u, 0xffffffffu);
    r29 = 0u;
    wr32((u32)param_1 + 0x18u, 0xffffffffu);
    do {
        r3 = rd32(r30 + 0x28u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157f30u, &a);
            wr32(r30 + 0x28u, 0u);
        }
        r29 = r29 + 1u;
        wr32(r30 + 0x34u, 0u);
        r30 = r30 + 4u;
    } while ((s32)r29 < 3);
    r4 = rd32((u32)param_1 + 4u);
    wr32((u32)param_1 + 0x6cu, 0u);
    wr32((u32)param_1 + 0x68u, 0u);
    wr32((u32)param_1 + 0x64u, 0u);
    wr32((u32)param_1 + 0x80u, 0u);
    wr32((u32)param_1 + 0x74u, 0u);
    wr32((u32)param_1 + 0x70u, 0u);
    wr32((u32)param_1 + 0x7cu, 0u);
    wr32((u32)param_1 + 0x78u, 0u);
    r3 = rd32(r4 + 0xf78u);
    wr32(r4 + 0xf78u, r3 ^ (r3 & 0x10000u));
    wr8(rd32((u32)param_1 + 4u) + 0x167cu, 0u);
    return;
}
