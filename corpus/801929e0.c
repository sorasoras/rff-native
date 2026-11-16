#include "tc_rt.h"

u32 fn_801929e0(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1) + 0xcdu;
    a.r[1] = 8u;
    r3 = tc_call(0x800f89c4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = r3;
        (void)tc_call(0x80100bb4u, &a);
    }
    return 1u;
}
