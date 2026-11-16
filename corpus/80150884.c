#include "tc_rt.h"

u32 fn_80150884(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x1690u) != 0u) {
        return 1u;
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800b0668u, &a);
    return r3;
}
