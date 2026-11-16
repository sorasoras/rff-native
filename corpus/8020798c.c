#include "tc_rt.h"

u32 fn_8020798c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32(0x80571398u) + 0xe4u);
    if (r31 != 0x21u) {
        a.r[0] = 8u;
        a.r[1] = r31;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r4 = r3;
        if (r31 == (u32)rd8(0x8049912eu)) {
            r4 = 0x80499110u;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        (void)tc_call(0x801006a4u, &a);
    }
    return 1u;
}
