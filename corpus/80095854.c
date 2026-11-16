#include "tc_rt.h"

u32 fn_80095854(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)((s32)rd32((u32)param_1 + 0xd4u) >> 31) == 0u) {
        r3 = 0u;
    } else {
        if ((rd32(0x8057118cu) & 0x20000u) == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(0x804863d8u);
            r3 = tc_call(0x800960b0u, &a);
            if (r3 == 0u) {
                r3 = 1u;
            } else {
                r4 = rd32((u32)param_1 + 0xf8u);
                r3 = (u32)rd8((u32)param_1 + 6u);
                r0 = r4 - r3;
                r3 = r4 | ~r3;
                r0 = (r0 >> 1u) & 0x7fffffffu;
                r0 = r3 - r0;
                r3 = (r0 >> 0x1fu) & 1u;
            }
        }
    }
    return r3;
}
