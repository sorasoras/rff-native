#include "tc_rt.h"

void fn_80120914(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (param_2 >= 0) {
        r4 = (u32)param_1 + (((u32)param_2 << 7u) & 0xffffff80u);
        r31 = r4 + 0x40u;
        wr32(r31 + 0x4cu, rd32(r4 + 0x8cu) | 2u);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        a.r[2] = param_3;
        (void)tc_call(0x80120c00u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        a.r[2] = param_3;
        (void)tc_call(0x80120d70u, &a);
        f1 = (f64)rdf32(param_3 + 4u);
        wrf32d(r31 + 0x54u, (f64)rdf32(param_3));
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(r31 + 0x58u, f1);
        wrf32d(r31 + 0x5cu, f0);
    }
    return;
}
