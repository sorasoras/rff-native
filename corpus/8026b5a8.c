#include "tc_rt.h"

u32 fn_8026b5a8(u32 param_r3, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    (void)tc_call(0x8026b938u, &a);
    a.r[0] = 0x805031b0u;
    a.r[1] = 0x80502cb0u;
    a.r[2] = 0x500u;
    (void)tc_call(0x8026b840u, &a);
    return 0u;
}
