#include "tc_rt.h"

void fn_8010a90c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xe0u;
    (void)tc_call(0x80120760u, &a);
    return;
}
