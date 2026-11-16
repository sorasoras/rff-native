#include "tc_rt.h"

void fn_801d7acc(s32 param_1)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32((u32)param_1 + 0x148u) << 6u) & 0xc0000000u) >> 31) != 0u) {
        r4 = rd32(0x804863d8u);
        wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
        f2 = (f64)rdf32((u32)param_1 + 0xd44u);
        f1 = (f64)rdf32((u32)param_1 + 0xd48u);
        f0 = (f64)rdf32((u32)param_1 + 0xd4cu);
        wrf32d((u32)param_1 + 0x84u, f2);
        wrf32d((u32)param_1 + 0x88u, f1);
        wrf32d((u32)param_1 + 0x8cu, f0);
        wrf32d((u32)param_1 + 4u, f2);
        wrf32d((u32)param_1 + 8u, f1);
        wrf32d((u32)param_1 + 0xcu, f0);
    }
    if ((u32)((s32)((rd32((u32)param_1 + 0x148u) << 5u) & 0xc0000000u) >> 31) != 0u && rd32(0x805706d0u) == 7u) {
        f2 = (f64)rdf32((u32)param_1 + 0xd44u);
        f1 = (f64)rdf32((u32)param_1 + 0xd48u);
        f0 = (f64)rdf32((u32)param_1 + 0xd4cu);
        wrf32d((u32)param_1 + 0x84u, f2);
        wrf32d((u32)param_1 + 0x88u, f1);
        wrf32d((u32)param_1 + 0x8cu, f0);
        wrf32d((u32)param_1 + 4u, f2);
        wrf32d((u32)param_1 + 8u, f1);
        wrf32d((u32)param_1 + 0xcu, f0);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007e314u, &a);
    return;
}
