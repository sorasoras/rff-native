#include "tc_rt.h"

void fn_802bee94(u32 param_1)
{
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1, 0x80398708u);
    wr32(param_1 + 0x24u, 0u);
    return;
}
