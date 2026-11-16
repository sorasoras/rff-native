#include "tc_rt.h"

void fn_8013ed08(u32 param_1)
{
    wr32(param_1, 0u);
    wr32(param_1 + 0xcu, 0x80364118u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    return;
}
