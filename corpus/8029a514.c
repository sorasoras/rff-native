#include "tc_rt.h"

s32 fn_8029a514(void)
{
    u32 r0 = 0, r3 = 0;
    r3 = 0u;
    r0 = (u32)rd16(0x8053f1b4u);
    if ((s32)r0 < 7 && (s32)r0 >= 2) {
        r3 = 1u;
    }
    r0 = (u32)rd16(0x8053f1e8u);
    if ((s32)r0 < 7 && (s32)r0 >= 2) {
        r3 = r3 + 1u;
    }
    r0 = (u32)rd16(0x8053f21cu);
    if ((s32)r0 >= 7) {
        return (s32)r3;
    }
    if ((s32)r0 < 2) {
        return (s32)r3;
    }
    r3 = r3 + 1u;
    return (s32)r3;
}
