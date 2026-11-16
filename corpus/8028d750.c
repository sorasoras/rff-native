#include "tc_rt.h"

void fn_8028d750(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)rd8(0x8053d535u);
    a.r[1] = (u32)rd8(rd32(0x80570e08u) + 2u);
    a.r[2] = param_1;
    (void)tc_call(0x8028a510u, &a);
    return;
}
