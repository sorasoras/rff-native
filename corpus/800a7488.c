#include "tc_rt.h"

s32 fn_800a7488(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    r3 = tc_call(0x800a3578u, &a);
    if (r3 == 0x53u) {
        r3 = 4u;
    }
    return (s32)r3;
}
