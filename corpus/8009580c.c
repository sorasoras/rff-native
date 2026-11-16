#include "tc_rt.h"

u32 fn_8009580c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)((s32)rd32((u32)param_1 + 0xd4u) >> 31) == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x804863d8u);
        r3 = tc_call(0x800960b0u, &a);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    }
    return r3;
}
