#include "tc_rt.h"

void fn_8013c504(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    (void)tc_call(0x8013ad20u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xfadu;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
