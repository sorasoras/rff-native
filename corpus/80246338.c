#include "tc_rt.h"

void fn_80246338(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32((u32)param_1 + 0x96u, rd32(param_2));
    wr32((u32)param_1 + 0x9au, rd32(param_2 + 4u));
    wr32((u32)param_1 + 0x9eu, rd32(param_2 + 8u));
    wr32((u32)param_1 + 0xa2u, rd32(param_2 + 0xcu));
    r0 = (u32)rd16(param_2 + 2u);
    c0lt = (s32)r0 < 10;
    if (r0 == 0xau) {
        wr32((u32)param_1 + 0xa6u, 0u);
        wr32((u32)param_1 + 0xaau, 0u);
        wr32((u32)param_1 + 0xaeu, 0u);
        wr32((u32)param_1 + 0xb2u, 0u);
        wr32((u32)param_1 + 0xb6u, 0u);
        wr32((u32)param_1 + 0xbau, 0u);
        wr32((u32)param_1 + 0xbeu, 0u);
        wr32((u32)param_1 + 0xc2u, 0u);
        wr32((u32)param_1 + 0xc6u, 0x8000000u);
        wr32((u32)param_1 + 0xcau, 0u);
    } else if (!c0lt && r0 == 0x19u) {
        wr32((u32)param_1 + 0xa6u, 0u);
        wr32((u32)param_1 + 0xaau, 0u);
        wr32((u32)param_1 + 0xaeu, 0u);
        wr32((u32)param_1 + 0xb2u, 0u);
        wr32((u32)param_1 + 0xb6u, 0u);
        wr32((u32)param_1 + 0xbau, 0u);
        wr32((u32)param_1 + 0xbeu, 0u);
        wr32((u32)param_1 + 0xc2u, 0u);
        wr32((u32)param_1 + 0xc6u, 0x1000000u);
        wr32((u32)param_1 + 0xcau, 0u);
    }
    wr32((u32)param_1 + 0x1cu, (rd32((u32)param_1 + 0x1cu) & 0xffff87ffu) | 0x8400u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
