#include "tc_rt.h"

void fn_802e0038(u32 param_1)
{
    u32 r6 = 0;
    wr32(param_1, 0x8039ca98u);
    r6 = rd32(0x8039cafcu);
    wr32(param_1 + 4u, rd32(0x8039caf8u));
    wr32(param_1 + 8u, r6);
    wr32(param_1 + 0xcu, rd32(0x8039cb00u));
    wr32(param_1, 0x8039cb04u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr16(param_1 + 0x18u, 0u);
    wr16(param_1 + 0x1au, 0xffffu);
    return;
}
