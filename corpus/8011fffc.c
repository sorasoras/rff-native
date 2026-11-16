#include "tc_rt.h"

s32 fn_8011fffc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x8011ff60u, &a);
    r31 = r3;
    if ((s32)r3 < 0) {
        r3 = 0xffffffffu;
    } else {
        r3 = (u32)param_1 + ((r3 << 7u) & 0xffffff80u);
        f1 = (f64)rdf32(param_3 + 4u);
        wrf32d(r3 + 0x94u, (f64)rdf32(param_3));
        r30 = r3 + 0x40u;
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(r30 + 0x58u, f1);
        wrf32d(r30 + 0x5cu, f0);
        wr32(r30 + 0x4cu, rd32(r30 + 0x4cu) | 2u);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = param_3;
        (void)tc_call(0x80120c00u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = param_3;
        (void)tc_call(0x80120d70u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        (void)tc_call(0x80120f70u, &a);
        r3 = r31;
    }
    return (s32)r3;
}
