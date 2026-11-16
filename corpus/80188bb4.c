#include "tc_rt.h"

void fn_80188bb4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x8033a9acu;
    (void)tc_call(0x80188aecu, &a);
    wr32((u32)param_1 + 0x3e4u, 1u);
    return;
}
