#include "tc_rt.h"

u32 fn_800602c0(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 != 0u) {
        r0 = rd32(r3 + 4u);
    } else {
        r0 = 3u;
    }
    if (r0 == 0u) {
        a.r[0] = rd32(0x804863d8u);
        r3 = tc_call(0x800c3ec8u, &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
