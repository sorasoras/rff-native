#include "tc_rt.h"

u32 fn_801ca420(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 8u) == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = rd32(0x804863d8u);
        r3 = tc_call(0x800c423cu, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x800f42f4u, &a);
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
