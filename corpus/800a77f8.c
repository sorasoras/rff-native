#include "tc_rt.h"

u32 fn_800a77f8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x13u;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a51f8u, &a);
    if ((s32)r3 >= 6 && (s32)r3 < 12) {
        r3 = 0u;
    } else {
        if ((s32)r3 >= 12 && (s32)r3 < 18) {
            r3 = 1u;
        } else {
            r3 = 2u;
        }
    }
    return r3;
}
