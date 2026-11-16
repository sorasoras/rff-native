#include "tc_rt.h"

void fn_80100db8(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 1u;
    a.r[3] = 1u;
    (void)tc_call(0x80100ddcu, &a);
    return;
}
