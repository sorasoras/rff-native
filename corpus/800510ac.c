#include "tc_rt.h"

u32 fn_800510ac(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80037178u, &a);
    return r3;
}
