#include "tc_rt.h"

void fn_80166474(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800b32f4u, &a);
    if (r3 == 0u && (s32)rd32((u32)param_1 + 0xf00u) > 10) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x804863d8u);
        (void)tc_call(0x800b32d0u, &a);
    }
    return;
}
