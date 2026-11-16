#include "tc_rt.h"

void fn_80159d38(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x6acu;
    a.r[1] = 0x3cu;
    a.r[2] = 4u;
    a.r[3] = 0x80159d0cu;
    a.r[4] = param_2;
    (void)tc_call(0x800a7780u, &a);
    return;
}
