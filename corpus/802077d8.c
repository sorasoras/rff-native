#include "tc_rt.h"

u32 fn_802077d8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1) + 0xcdu;
    a.r[1] = 8u;
    r3 = tc_call(0x800f89c4u, &a);
    if ((s32)r3 >= 0) {
        a.r[0] = 0x13u;
        a.r[1] = r3;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = 0u;
        (void)tc_call(0x801006a4u, &a);
    }
    return 1u;
}
