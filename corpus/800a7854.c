#include "tc_rt.h"

u32 fn_800a7854(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(0x804863d8u);
    }
    return r3;
}
