#include "tc_rt.h"

void fn_80266ef0(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 2u;
    (void)tc_call(0x802662d4u, &a);
    wr32(0x817fdff0u, param_1);
    wr32(0x805026f0u, 0xffffffffu);
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x802662ecu, &a);
    return;
}
