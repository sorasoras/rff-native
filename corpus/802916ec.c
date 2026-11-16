#include "tc_rt.h"

void fn_802916ec(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdff8u, rd32((u32)param_2 + 0xcu));
    a.r[5] = (u32)rd8((u32)param_1 + 0x15u);
    (void)tc_call(0x80289b40u, &a);
    a.r[0] = 0x817fdff8u;
    (void)tc_call(0x8028d9f0u, &a);
    return;
}
