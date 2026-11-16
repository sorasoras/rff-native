#include "tc_rt.h"

void fn_8013e3f8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        wr32(param_1, 0u);
    }
    if (rd32(param_1 + 4u) != 0u) {
        wr32(param_1 + 4u, 0u);
    }
    if (rd32(param_1 + 8u) != 0u) {
        wr32(param_1 + 8u, 0u);
    }
    if (rd32(param_1 + 0xcu) != 0u) {
        wr32(param_1 + 0xcu, 0u);
    }
    if (rd32(param_1 + 0x10u) != 0u) {
        wr32(param_1 + 0x10u, 0u);
    }
    r3 = rd32(param_1 + 0x14u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32(param_1 + 0x14u, 0xffffffffu);
    }
    return;
}
