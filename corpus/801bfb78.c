#include "tc_rt.h"

u32 fn_801bfb78(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801bfb7cu, &a);
    return r3;
}
