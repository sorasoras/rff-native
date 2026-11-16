#include "tc_rt.h"

s32 fn_80130ea4(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32((u32)param_2 + 0x3ecu);
    r3 = tc_call(0x801894d8u, &a);
    r3 = rd32(r3);
    r3 = r3 + 0xcdu;
    return (s32)r3;
}
