#include "tc_rt.h"

void fn_8010a5c0(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x19b8u;
    a.r[1] = param_2;
    a.r[2] = 3u;
    (void)tc_call(0x80162d34u, &a);
    return;
}
