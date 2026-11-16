#include "tc_rt.h"

void fn_8027c6fc(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = param_1;
    if (param_1 == 0u) {
        r0 = 0u;
    }
    if (param_1 >= 0x7fu) {
        r0 = 0x7fu;
    }
    wr8(0x80571afau, (u8)r0);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
