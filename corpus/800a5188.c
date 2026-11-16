#include "tc_rt.h"

s32 fn_800a5188(void)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80097da4u, &a);
    r3 = tc_call(0x800ac3f8u, &a);
    r5 = r3 - 1u;
    r3 = ppc_mulhw(715827883, (s32)r5);
    r3 = r5 - ((r3 + ((r3 >> 0x1fu) & 1u)) * 6u);
    return (s32)r3;
}
