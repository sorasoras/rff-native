#include "tc_rt.h"

void fn_80082660(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = 0x8049df80u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x800c9304u, &a);
    return;
}
