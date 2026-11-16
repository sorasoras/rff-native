#include "tc_rt.h"

void fn_802cb7c4(u32 param_1)
{
    TcArgs a = {0};
    if (rd32(param_1 + 4u) != 0u) {
        a.r[0] = rd32(0x805474e0u);
        (void)tc_call(0x8026d4a0u, &a);
        wr32(param_1 + 4u, 0u);
        wr8(param_1, 0u);
        wr8(param_1 + 1u, 0u);
    }
    return;
}
