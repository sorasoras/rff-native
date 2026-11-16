#include "tc_rt.h"

void fn_8024cb3c(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32(0x80571928u);
    r4 = (u32)param_1 * 0x44u;
    wr32(r4 + r5, 0u);
    r4 = r4 + r5;
    wr32(r4 + 4u, 0u);
    wr32(r4 + 8u, 0u);
    wr32(r4 + 0xcu, 0u);
    wr32(r4 + 0x10u, 0u);
    wr32(r4 + 0x14u, 0xfffffc40u);
    wr32(r4 + 0x18u, 0xfffffc40u);
    wr32(r4 + 0x1cu, 0xfffffc40u);
    wr32(r4 + 0x20u, 0xfffffc40u);
    wr16(r4 + 0x40u, 0u);
    wr16(r4 + 0x3cu, 0u);
    wr16(r4 + 0x38u, 0u);
    wr16(r4 + 0x34u, 0u);
    wr16(r4 + 0x30u, 0u);
    wr16(r4 + 0x2cu, 0u);
    wr16(r4 + 0x28u, 0u);
    wr16(r4 + 0x24u, 0u);
    return;
}
