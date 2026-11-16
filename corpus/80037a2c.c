#include "tc_rt.h"

u32 fn_80037a2c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    do {
        a.r[0] = param_3;
        a.r[1] = param_4;
        a.r[2] = param_2;
        r3 = tc_call(0x80272fbcu, &a);
        r31 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800379c4u, &a);
    } while (r3 != 0u);
    if (param_1 != 0u) {
        wr32(param_1, r31);
    }
    return r31;
}
