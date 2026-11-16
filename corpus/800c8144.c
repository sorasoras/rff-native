#include "tc_rt.h"

void fn_800c8144(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 0u;
    a.r[2] = 0x1a40u;
    (void)tc_call(0x8000443cu, &a);
    r3 = 0u;
    ctr = 7u;
    do {
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        r4 = (u32)param_1 + r3;
        r3 = r3 + 0x60u;
        wr32(r4 + 0x20u, 0xabu);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
