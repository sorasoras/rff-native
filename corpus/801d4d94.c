#include "tc_rt.h"

void fn_801d4d94(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x801d4994u, &a);
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x80234440u, &a);
    return;
}
