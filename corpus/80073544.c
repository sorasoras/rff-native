#include "tc_rt.h"

void fn_80073544(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    r5 = (u32)param_1 * 0x34u;
    r3 = r5 - 0x7fb7991cu;
    wr32(r3 + 0x14u, 0u);
    wr32(r3 + 0xcu, 0u);
    wr32(r3 + 4u, 0u);
    wr32(r3 + 0x10u, 0u);
    wr32(r3 + 8u, 0u);
    wr32(r5 - 0x7fb7991cu, 0u);
    wr32(r3 + 0x18u, 0u);
    return;
}
