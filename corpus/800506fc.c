#include "tc_rt.h"

void fn_800506fc(u32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1 + 0x44u);
    if (r4 != 0u) {
        a.r[0] = rd32(param_1);
        a.r[1] = r4;
        a.r[2] = rd32(param_1 + 0xcu);
        a.r[3] = param_1 + 0x18u;
        (void)tc_call(0x80040e98u, &a);
        wr32(param_1 + 0x44u, 0u);
    }
    return;
}
