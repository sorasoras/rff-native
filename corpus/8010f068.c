#include "tc_rt.h"

u32 fn_8010f068(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32(param_2);
    if (r5 != 0x2e8u && rd32(param_1) != r5) {
        r3 = 0x80000000u;
    } else {
        a.r[0] = rd32(param_2 + 4u);
        r3 = tc_call(0x8014d8acu, &a);
        if (r3 == 0u) {
            r3 = 0x80000000u;
        } else {
            r3 = 0x7fffffffu;
        }
    }
    return r3;
}
