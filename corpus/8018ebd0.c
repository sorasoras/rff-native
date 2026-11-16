#include "tc_rt.h"

u32 fn_8018ebd0(void)
{
    u32 r4 = 0;
    r4 = rd32(0x804863d8u);
    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xbfffffffu);
    return 0u;
}
