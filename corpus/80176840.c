#include "tc_rt.h"

u32 fn_80176840(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(rd32(0x804863d8u) + 0x290u) != 0u) {
        return 0u;
    }
    a.r[0] = param_r3;
    r3 = tc_call(0x800f42f4u, &a);
    return r3;
}
