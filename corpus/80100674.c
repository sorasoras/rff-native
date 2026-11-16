#include "tc_rt.h"

u32 fn_80100674(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    (void)param_1;
    r5 = (u32)(s16)rd16(param_2 + 2u);
    r3 = (u32)(s16)rd16(param_2 + 4u);
    r0 = (u32)(s16)rd16(param_2 + 6u);
    wr8(0x817fdff8u, (u8)rd16(param_2));
    wr8(0x817fdff9u, (u8)r5);
    wr8(0x817fdffau, (u8)r3);
    wr8(0x817fdffbu, (u8)r0);
    return rd32(0x817fdff8u);
}
