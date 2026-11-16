#include "tc_rt.h"

u32 fn_800966c8(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = rd32((u32)param_1 + 0x114u);
    if (r0 == 0xffffffffu) {
        r3 = 0u;
    } else {
        wr32(0x817fdff8u, r0);
        a.r[0] = 0x817fdff8u;
        r3 = tc_call(0x80149544u, &a);
    }
    return r3;
}
