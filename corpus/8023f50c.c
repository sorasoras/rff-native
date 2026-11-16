#include "tc_rt.h"

u32 fn_8023f50c(void)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (((u32)rd16(0xcc00206cu) & 1u) == 1u) {
        r31 = 2u;
    } else {
        r4 = ((u32)rd16(0xcc002002u) >> 2u) & 1u;
        r31 = (((0u - r4) | r4) >> 0x1fu) & 1u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
