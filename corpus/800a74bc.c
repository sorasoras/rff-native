#include "tc_rt.h"

u32 fn_800a74bc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x20u);
    r3 = rd32(r3 + 0xcu);
    return r3;
}
