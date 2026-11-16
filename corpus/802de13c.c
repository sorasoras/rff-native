#include "tc_rt.h"

s32 fn_802de13c(void)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = 0u;
    r3 = rd32(0x80570f00u);
    if ((s32)r3 >= 0) {
        a.r[0] = r3;
        r3 = tc_call(0x8026f7d8u, &a);
        r4 = r3;
        if (r3 == 0u) {
            wr32(0x80570f00u, 0xffffffffu);
        }
    }
    return (s32)r4;
}
