#include "tc_rt.h"

u32 fn_800cb55c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x24u) == 0u) {
        a.r[0] = 0x8046d8c8u;
        a.r[1] = (u32)param_1;
        r3 = tc_call(0x8008c3f8u, &a);
        wr32((u32)param_1 + 0x24u, r3);
    }
    return rd32((u32)param_1 + 0x24u);
}
