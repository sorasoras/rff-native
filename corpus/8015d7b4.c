#include "tc_rt.h"

void fn_8015d7b4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    r3 = tc_call(0x8015c6e8u, &a);
    wr32((u32)param_1 + 0x46cu, r3);
    return;
}
