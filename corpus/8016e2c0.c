#include "tc_rt.h"

void fn_8016e2c0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x16f0u) == 1u) {
        wr8((u32)param_1 + 0x16f0u, 2u);
        a.r[0] = rd32(0x804863d8u);
        a.r[1] = 0u;
        r3 = tc_call(0x80069478u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80171e70u, &a);
            if ((s32)(s8)r3 < 0) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd3cu;
                (void)tc_call(0x8010a74cu, &a);
                return;
            }
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xd3eu;
        (void)tc_call(0x8010a74cu, &a);
    }
    return;
}
