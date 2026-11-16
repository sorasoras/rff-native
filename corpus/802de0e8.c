#include "tc_rt.h"

s32 fn_802de0e8(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((s32)rd32(0x80570f00u) < 0) {
        a.r[0] = 0x80570f08u;
        a.r[1] = 0u;
        r3 = tc_call(0x8026f5f8u, &a);
        wr32(0x80570f00u, r3);
        if ((s32)r3 < 0) {
            r31 = r3;
        }
    }
    return (s32)r31;
}
