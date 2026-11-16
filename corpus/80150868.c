#include "tc_rt.h"

u32 fn_80150868(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x1690u) != 0u) {
        return 0u;
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800b04c4u, &a);
    return r3;
}
