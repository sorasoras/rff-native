#include "tc_rt.h"

void fn_800ef25c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x804863d8u);
    if (r4 != 0u && (r4 + 0x54cu) != 0u) {
        wr32(r4 + 0x5d0u, 1u);
    }
    wr32((u32)param_1 + 0x18u, 0u);
    wr32((u32)param_1 + 4u, 0xffffffffu);
    wr32((u32)param_1 + 8u, 0xffffffffu);
    return;
}
