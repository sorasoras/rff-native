#include "tc_rt.h"

void fn_800975e0(void)
{
    TcArgs a = {0};
    a.r[0] = 0x33u;
    a.r[1] = rd32(rd32(0x804863d8u) + 0xa48u);
    (void)tc_call(0x8013dac0u, &a);
    return;
}
