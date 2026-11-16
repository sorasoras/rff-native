#include "tc_rt.h"

void fn_8008242c(void)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr16(0x817fdff8u, 0x2e8u);
    wr8(0x817fdffau, 0u);
    wr8(0x817fdffbu, 0u);
    a.r[0] = 0x817fdff8u;
    (void)tc_call(0x80082418u, &a);
    return;
}
