#include "tc_rt.h"

void fn_800ce4d4(u32 param_1)
{
    wr32(param_1, 0x80355a90u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 4u, 2u);
    wr32(param_1 + 8u, 5u);
    wr32(param_1 + 0x14u, 0xffffffffu);
    wr32(param_1 + 0x10u, 0u);
    wr8(param_1 + 0x1cu, 0x80u);
    wr32(param_1 + 0x18u, 0x40u);
    return;
}
