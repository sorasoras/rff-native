#include "tc_rt.h"

void fn_8004ae8c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8004ca64u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x800499e4u, &a);
    return;
}
