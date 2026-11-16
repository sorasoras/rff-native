#include "tc_rt.h"

void fn_8008178c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x8049e140u;
    a.r[1] = param_1;
    (void)tc_call(0x801a78c0u, &a);
    (void)tc_call(0x80081be0u, &a);
    (void)tc_call(0x800816b0u, &a);
    return;
}
