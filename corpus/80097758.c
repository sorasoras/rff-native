#include "tc_rt.h"

u32 fn_80097758(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32(param_2);
    if ((s32)r3 < 0) {
        r3 = 1u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x8014d8acu, &a);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    }
    return r3;
}
