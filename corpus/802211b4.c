#include "tc_rt.h"

void fn_802211b4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x800f8634u, &a);
    return;
}
