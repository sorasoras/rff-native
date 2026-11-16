#include "tc_rt.h"

s32 fn_8029407c(void)
{
    u32 r3 = 0;
    r3 = 0u;
    if ((u32)rd8(0x8053daa5u) != 0u) {
        r3 = 1u;
    }
    if ((u32)rd8(0x8053dbc1u) != 0u) {
        r3 = (r3 + 1u) & 0xffffu;
    }
    if ((u32)rd8(0x8053dcddu) != 0u) {
        r3 = (r3 + 1u) & 0xffffu;
    }
    if ((u32)rd8(0x8053ddf9u) != 0u) {
        r3 = (r3 + 1u) & 0xffffu;
        return (s32)r3;
    }
    return (s32)r3;
}
