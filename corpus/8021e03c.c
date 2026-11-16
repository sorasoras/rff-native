#include "tc_rt.h"

void fn_8021e03c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x800f8610u, &a);
    return;
}
