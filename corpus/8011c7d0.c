#include "tc_rt.h"

u32 fn_8011c7d0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((s32)rd32((u32)param_1 + 0x18u) <= 0) {
        return 0u;
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x10u));
    r3 = tc_call(0x802edce4u, &a);
    return r3;
}
