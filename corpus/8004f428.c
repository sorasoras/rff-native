#include "tc_rt.h"

u32 fn_8004f428(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (param_1 < 4) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdff8u;
        r3 = tc_call(0x8027a174u, &a);
        if (r3 == 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
