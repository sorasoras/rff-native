#include "tc_rt.h"

u32 fn_800a4500(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = 0u;
    } else {
        if ((u32)param_1 == 0u) {
            r3 = rd32(0x804863d8u);
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80074e90u, &a);
            if (r3 != 0u) {
                r3 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fb79c28u);
            } else {
                r3 = 0u;
            }
        }
    }
    return r3;
}
