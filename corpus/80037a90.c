#include "tc_rt.h"

u32 fn_80037a90(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    do {
        a.r[0] = param_2;
        a.r[1] = 0x817fdfe8u;
        r3 = tc_call(0x80271804u, &a);
        r31 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800379c4u, &a);
    } while (r3 != 0u);
    if (param_1 != 0u) {
        wr32(param_1, r31);
    }
    return r31;
}
