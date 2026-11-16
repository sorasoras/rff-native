#include "tc_rt.h"

u32 fn_80097e68(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80118b64u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x80097ea8u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
