#include "tc_rt.h"

void fn_8015cef0(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 8u);
    r31 = 0x64u;
    r0 = rd32(r3 + 0x6cu);
    if ((s32)r0 > 100) {
        r31 = r0;
    }
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 8u);
    wr32(r3 + 0x6cu, r31);
    return;
}
