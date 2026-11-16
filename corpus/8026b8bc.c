#include "tc_rt.h"

void fn_8026b8bc(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(param_1, r3);
    return;
}
