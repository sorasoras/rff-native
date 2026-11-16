#include "tc_rt.h"

u32 fn_80192b20(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1) + 0xcdu;
    a.r[1] = 8u;
    r3 = tc_call(0x800f89c4u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x800cd694u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x801006a4u, &a);
    return 1u;
}
