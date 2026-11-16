#include "tc_rt.h"

void fn_801dc57c(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdff8u, 0xeu);
    a.r[0] = 0x817fdff8u;
    a.r[1] = param_1;
    (void)tc_call(0x8014a130u, &a);
    return;
}
