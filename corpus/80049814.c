#include "tc_rt.h"

s32 fn_80049814(u32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r4 = rd32(param_1);
    wr32(0x817fdffcu, 0u);
    r5 = (u32)rd8(param_1 + 4u);
    r31 = (u32)rd8(0x803c6241u);
    r6 = (u32)rd16(param_1 + 8u);
    wr8(0x803c6241u, (u8)(r31 + 1u));
    a.r[0] = 0x817fdfe8u;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    (void)tc_call(0x80252774u, &a);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = r31;
    (void)tc_call(0x8025279cu, &a);
    return (s32)r31;
}
