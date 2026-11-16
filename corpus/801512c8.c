#include "tc_rt.h"

void fn_801512c8(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = rd32(0x804863d8u);
    (void)tc_call(0x800b32d0u, &a);
    return;
}
