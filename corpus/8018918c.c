#include "tc_rt.h"

void fn_8018918c(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x10u, rd32((u32)param_1 + 0x10u) - rd32((u32)param_1 + 4u));
    a.r[0] = 0x804b9da0u;
    a.r[1] = 1u;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
