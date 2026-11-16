#include "tc_rt.h"

void fn_801428a4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x804beba0u;
    a.r[1] = param_1;
    (void)tc_call(0x801434acu, &a);
    return;
}
