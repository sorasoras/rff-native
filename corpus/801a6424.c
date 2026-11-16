#include "tc_rt.h"

void fn_801a6424(u32 param_1)
{
    u32 r0 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32(param_1 + 4u, 0u);
    }
    r4 = rd32(param_1 + 0xcu);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32(param_1 + 0xcu, 0xffffffffu);
    }
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0u);
    return;
}
