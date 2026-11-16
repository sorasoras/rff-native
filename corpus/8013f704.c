#include "tc_rt.h"

void fn_8013f704(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(0x804bead0u);
    a.r[1] = param_1;
    (void)tc_call(0x801407bcu, &a);
    return;
}
