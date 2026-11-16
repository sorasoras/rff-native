#include "tc_rt.h"

u32 fn_80091990(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0u;
    for (;;) {
        r3 = rd32((u32)param_1 + r31 + 0xbf8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            r3 = tc_call(0x80090324u, &a);
            if (r3 != 0u) break;
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
        if ((s32)r30 >= 20) {
            r3 = 0u;
            break;
        }
    }
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x8008f8e8u, &a);
    }
    return r3;
}
