#include "tc_rt.h"

void fn_8017b810(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x128u, 0xffffffffu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80083e44u, &a);
    return;
}
