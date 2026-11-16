#include "tc_rt.h"

u32 fn_8005d1f4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0x80480000u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x70u), &a);
    if (r3 != 0u) {
        r31 = 1u;
        wr32(0x80571184u, 0u);
    }
    if (rd32((u32)param_1 + 0x1cu) != 0u) {
        r31 = 1u;
    }
    return r31;
}
