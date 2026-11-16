#include "tc_rt.h"

u32 fn_8003a4c4(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r31 = ((rd32(param_1 + 4u) >> 8u) & 0xffu) * rd32(param_1);
        a.r[0] = r31;
        r3 = tc_call(0x8004ca24u, &a);
        r30 = r3;
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 8u);
        a.r[2] = r31;
        (void)tc_call(0x80004338u, &a);
        r3 = r30;
    } else {
        r3 = 0u;
    }
    return r3;
}
