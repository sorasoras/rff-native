#include "tc_rt.h"

void fn_80040144(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x803be670u, param_1);
    wr32(0x803be674u, param_2);
    wr32(0x803be67cu, 0xffffffffu);
    wr32(0x803be680u, 0u);
    wr8(0x803be690u, 2u);
    wr8(0x803be691u, 1u);
    r3 = tc_call(0x8003d7a0u, &a);
    wr8(0x803be692u, (u8)r3);
    r3 = tc_call(0x8004e080u, &a);
    wr8(0x803be693u, (u8)r3);
    wr8(0x803be696u, 0u);
    wr8(0x803be697u, 0u);
    a.r[0] = 0x803be670u;
    a.r[1] = param_1;
    (void)tc_call(0x8004004cu, &a);
    return;
}
