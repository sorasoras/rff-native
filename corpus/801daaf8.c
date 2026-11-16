#include "tc_rt.h"

u32 fn_801daaf8(void)
{
    return ((u32)rd16(rd32(0x804863d8u) + 0x140u) >> 6u) & 1u;
}
