#include "tc_rt.h"

void fn_8008c9d0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x4190u;
    (void)tc_call(0x80189908u, &a);
    return;
}
