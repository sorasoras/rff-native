#include "tc_rt.h"

void fn_800b6480(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800b2fe8u, &a);
    if (r3 != 0u) {
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) & 0xbfffffffu);
    }
    return;
}
