#include "tc_rt.h"

void fn_80286da0(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (param_2 > 0) {
        wr8(0x817fdff0u, 2u);
    } else {
        wr8(0x817fdff0u, 0u);
    }
    wr16(0x817fdfe8u, (u16)param_2);
    r3 = (u32)rd8(0x8050f80au);
    wr16(0x817fdfeau, (u16)param_2);
    wr16(0x817fdfecu, 1u);
    wr16(0x817fdfeeu, 0u);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x80298becu, &a);
    return;
}
