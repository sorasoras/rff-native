#include "tc_rt.h"

u32 fn_8017424c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = 1u;
    r0 = rd32((u32)param_1 + 0x4cu);
    r4 = rd32(0x804863d8u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return r5;
        }
        if ((s32)r0 < 0) {
            return r5;
        }
        a.r[0] = r4;
        a.r[1] = 0x60u;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80574ea0u);
        (void)tc_call(rd32(rd32(r4) + 0x54u), &a);
        r5 = 1u;
        wr32((u32)param_1 + 0x4cu, 1u);
        wr32((u32)param_1 + 0x50u, 0u);
    } else {
        if (rd32(r4 + 0x110u) != 0u) {
            r5 = 0u;
            wr32((u32)param_1 + 0x4cu, 0u);
        }
    }
    return r5;
}
