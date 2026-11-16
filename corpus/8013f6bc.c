#include "tc_rt.h"

void fn_8013f6bc(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f438u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    (void)tc_call(0x80140370u, &a);
    return;
}
