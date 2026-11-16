#include "tc_rt.h"

u32 fn_800d6aa8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 1u;
    r0 = rd32((u32)param_1 + 0x3cu);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return r30;
        }
        if ((s32)r0 < 0) {
            return r30;
        }
        a.r[0] = rd32(0x804863d8u);
        f1 = tc_callf(0x800c3fc0u, &a);
        r3 = rd32((u32)param_1 + 0x20u);
        a.r[0] = r3;
        a.r[1] = rd32(0x804863d8u);
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
        r4 = rd32(0x804863d8u);
        r3 = rd32((u32)param_1 + 0x20u);
        if (rd32(r4 + 0xa48u) == 0u) {
            wr32(r4 + 0xa48u, r3);
        }
        wr32((u32)param_1 + 0x3cu, 1u);
    } else {
        r30 = 0u;
        wr32((u32)param_1 + 0x3cu, 0u);
    }
    return r30;
}
