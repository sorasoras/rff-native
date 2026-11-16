#include "tc_rt.h"

u32 fn_80174200(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(0x804863d8u);
    r3 = tc_call(0x800c4168u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800f42f4u, &a);
    } else {
        r3 = 0u;
    }
    return r3;
}
