#include "tc_rt.h"

void fn_80101080(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = rd32(param_1);
    (void)tc_call(0x802e45a4u, &a);
    a.r[0] = param_1 + 0x20u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0x10u;
    (void)tc_call(0x80004338u, &a);
    return;
}
