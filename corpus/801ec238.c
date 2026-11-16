#include "tc_rt.h"

s32 fn_801ec238(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80045be0u, &a);
    return (s32)r3;
}
