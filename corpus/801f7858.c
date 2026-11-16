#include "tc_rt.h"

u32 fn_801f7858(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r31 = r3;
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    return r31;
}
