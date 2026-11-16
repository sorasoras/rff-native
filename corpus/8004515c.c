#include "tc_rt.h"

void fn_8004515c(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r0 = ((u32)param_2 << 2u) & 0xfffffffcu;
    f0 = (f64)rdf32(0x805720e8u);
    f1 = (f64)rdf32(0x805720ecu);
    r30 = rd32(r0 - 0x7fcb0790u);
    r4 = rd32(r0 - 0x7fcb079cu);
    wr32((u32)param_1 + 0x1e8u, param_5);
    wrf32d((u32)param_1 + 0x134u, f1);
    wrf32d((u32)param_1 + 0x144u, f0);
    wrf32d((u32)param_1 + 0x154u, f0);
    wrf32d((u32)param_1 + 0x138u, f0);
    wrf32d((u32)param_1 + 0x148u, f1);
    wrf32d((u32)param_1 + 0x158u, f0);
    wrf32d((u32)param_1 + 0x13cu, f0);
    wrf32d((u32)param_1 + 0x14cu, f0);
    wrf32d((u32)param_1 + 0x15cu, f1);
    wrf32d((u32)param_1 + 0x140u, f0);
    wrf32d((u32)param_1 + 0x150u, f0);
    wrf32d((u32)param_1 + 0x160u, f0);
    wr32((u32)param_1 + 0x194u, (u32)param_2);
    wr16((u32)param_1 + 0x1ecu, (u16)param_3);
    wr16((u32)param_1 + 0x1eeu, (u16)param_4);
    wr8((u32)param_1 + 0x1f0u, rd8((u32)param_2 - 0x7fa8f970u));
    a.r[0] = (u32)param_1 + 0x1d8u;
    a.r[1] = r4;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = 0u;
    a.r[5] = param_5;
    (void)tc_call(0x8004b72cu, &a);
    a.r[0] = (u32)param_1 + 0x198u;
    a.r[1] = 0u;
    a.r[2] = (u32)param_1 + 0x1d8u;
    a.r[3] = 0u;
    (void)tc_call(0x8004b7a0u, &a);
    a.r[0] = (u32)param_1 + 0x1b8u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x80252494u, &a);
    a.r[0] = (u32)param_1 + 0x1b8u;
    a.r[1] = r30;
    a.r[2] = r30;
    (void)tc_call(0x802524b0u, &a);
    if ((u32)param_2 == 2u) {
        wr32((u32)param_1 + 0x1f4u, 0x803c1d00u);
        wr16((u32)param_1 + 0x1f2u, 0x100u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8004cdecu, &a);
    r0 = (u32)rd16((u32)param_1 + 0x1eeu);
    wr16((u32)param_1 + 0xf4u, rd16((u32)param_1 + 0x1ecu));
    wr16((u32)param_1 + 0xf6u, (u16)r0);
    return;
}
