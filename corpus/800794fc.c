#include "tc_rt.h"

void fn_800794fc(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr16(0x817fdff8u, (u16)param_2);
    a.r[0] = 0x817fdff8u;
    a.r[1] = rd32(param_1);
    a.r[2] = (u32)rd16(param_1 + 4u);
    a.r[3] = 0xcu;
    a.r[4] = 0x800794d8u;
    (void)tc_call(0x80258684u, &a);
    return;
}
