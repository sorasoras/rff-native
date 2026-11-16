#include "tc_rt.h"

u32 fn_801d65b8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d66ecu, &a);
    wr32((u32)param_1 + 0x294u, r3);
    return 1u;
}
